// Copyright 2025 YZG. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "CoreMinimal.h"
#include "HAL/Platform.h"
#include "Internationalization/Text.h"
#include "Misc/Guid.h"
#include "Templates/EnableIf.h"
#include "Templates/IsPointer.h"
#include "Templates/SharedPointer.h"
#include "UObject/Class.h"
#include "UObject/NameTypes.h"
#include "UObject/ObjectMacros.h"

#include "YzgWebJSFunction.generated.h"

class FWebJSScripting;
class UObject;
class UStruct;

struct FWebJSParam
{

	struct IStructWrapper
	{
		virtual ~IStructWrapper() {};
		virtual UStruct* GetTypeInfo() = 0;
		virtual const void* GetData() = 0;
		virtual IStructWrapper* Clone() = 0;
	};

	template <typename T> struct FStructWrapper
		: public IStructWrapper
	{
		T StructValue;
		FStructWrapper(const T& InValue)
			: StructValue(InValue)
		{}
		virtual ~FStructWrapper()
		{}
		virtual UStruct* GetTypeInfo() override
		{
			return T::StaticStruct();
		}
		virtual const void* GetData() override
		{
			return &StructValue;
		}
		virtual IStructWrapper* Clone() override
		{
			return new FStructWrapper<T>(StructValue);
		}
	};

	FWebJSParam() : Tag(PTYPE_NULL) {}
	FWebJSParam(bool Value) : Tag(PTYPE_BOOL), BoolValue(Value) {}
	FWebJSParam(int8 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FWebJSParam(int16 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FWebJSParam(int32 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FWebJSParam(uint8 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FWebJSParam(uint16 Value) : Tag(PTYPE_INT), IntValue(Value) {}
	FWebJSParam(uint32 Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FWebJSParam(int64 Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FWebJSParam(uint64 Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FWebJSParam(double Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FWebJSParam(float Value) : Tag(PTYPE_DOUBLE), DoubleValue(Value) {}
	FWebJSParam(const FString& Value) : Tag(PTYPE_STRING), StringValue(new FString(Value)) {}
	FWebJSParam(const FText& Value) : Tag(PTYPE_STRING), StringValue(new FString(Value.ToString())) {}
	FWebJSParam(const FName& Value) : Tag(PTYPE_STRING), StringValue(new FString(Value.ToString())) {}
	FWebJSParam(const TCHAR* Value) : Tag(PTYPE_STRING), StringValue(new FString(Value)) {}
	FWebJSParam(UObject* Value) : Tag(PTYPE_OBJECT), ObjectValue(Value) {}
	template <typename T> FWebJSParam(const T& Value,
		typename TEnableIf<!TIsPointer<T>::Value, UStruct>::Type* InTypeInfo=T::StaticStruct())
		: Tag(PTYPE_STRUCT)
		, StructValue(new FStructWrapper<T>(Value))
	{}
	template <typename T> FWebJSParam(const TArray<T>& Value)
		: Tag(PTYPE_ARRAY)
	{
		ArrayValue = new TArray<FWebJSParam>();
		ArrayValue->Reserve(Value.Num());
		for(T Item : Value)
		{
			ArrayValue->Add(FWebJSParam(Item));
		}
	}
	template <typename T> FWebJSParam(const TMap<FString, T>& Value)
		: Tag(PTYPE_MAP)
	{
		MapValue = new TMap<FString, FWebJSParam>();
		MapValue->Reserve(Value.Num());
		for(const auto& Pair : Value)
		{
			MapValue->Add(Pair.Key, FWebJSParam(Pair.Value));
		}
	}
	template <typename K, typename T> FWebJSParam(const TMap<K, T>& Value)
		: Tag(PTYPE_MAP)
	{
		MapValue = new TMap<FString, FWebJSParam>();
		MapValue->Reserve(Value.Num());
		for(const auto& Pair : Value)
		{
			MapValue->Add(Pair.Key.ToString(), FWebJSParam(Pair.Value));
		}
	}
	YZGWEBBROWSER_API FWebJSParam(const FWebJSParam& Other);
	YZGWEBBROWSER_API FWebJSParam(FWebJSParam&& Other);
	YZGWEBBROWSER_API ~FWebJSParam();

	enum { PTYPE_NULL, PTYPE_BOOL, PTYPE_INT, PTYPE_DOUBLE, PTYPE_STRING, PTYPE_OBJECT, PTYPE_STRUCT, PTYPE_ARRAY, PTYPE_MAP } Tag;
	union
	{
		bool BoolValue;
		double DoubleValue;
		int32 IntValue;
		UObject* ObjectValue;
		const FString* StringValue;
		IStructWrapper* StructValue;
		TArray<FWebJSParam>* ArrayValue;
		TMap<FString, FWebJSParam>* MapValue;
	};

};

class FWebJSScripting;

USTRUCT()
struct FYzgWebJSCallbackBase
{
	GENERATED_USTRUCT_BODY()
    FYzgWebJSCallbackBase()
	{}

	bool IsValid() const
	{
		return ScriptingPtr.IsValid();
	}


protected:
    FYzgWebJSCallbackBase(TSharedPtr<FWebJSScripting> InScripting, const FGuid& InCallbackId)
		: ScriptingPtr(InScripting)
		, CallbackId(InCallbackId)
	{}

	YZGWEBBROWSER_API void Invoke(int32 ArgCount, FWebJSParam Arguments[], bool bIsError = false) const;

private:

	TWeakPtr<FWebJSScripting> ScriptingPtr;
	FGuid CallbackId;
};

USTRUCT()
struct FYzgWebJSFunction
	: public FYzgWebJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

    FYzgWebJSFunction()
		: FYzgWebJSCallbackBase()
	{}

    FYzgWebJSFunction(TSharedPtr<FWebJSScripting> InScripting, const FGuid& InFunctionId)
		: FYzgWebJSCallbackBase(InScripting, InFunctionId)
	{}

	template<typename ...ArgTypes> void operator()(ArgTypes... Args) const
	{
		FWebJSParam ArgArray[sizeof...(Args)] = {FWebJSParam(Args)...};
		Invoke(sizeof...(Args), ArgArray);
	}
};

USTRUCT()
struct FYzgWebJSResponse
	: public FYzgWebJSCallbackBase
{
	GENERATED_USTRUCT_BODY()

    FYzgWebJSResponse()
		: FYzgWebJSCallbackBase()
	{}

    FYzgWebJSResponse(TSharedPtr<FWebJSScripting> InScripting, const FGuid& InCallbackId)
		: FYzgWebJSCallbackBase(InScripting, InCallbackId)
	{}

	void Success() const
	{
		Invoke(0, nullptr, false);
	}

	template<typename T>
	void Success(T Arg) const
	{
		FWebJSParam ArgArray[1] = {FWebJSParam(Arg)};
		Invoke(1, ArgArray, false);
	}

	template<typename T>
	void Failure(T Arg) const
	{
		FWebJSParam ArgArray[1] = {FWebJSParam(Arg)};
		Invoke(1, ArgArray, true);
	}
};

typedef FYzgWebJSCallbackBase FWebJSCallbackBase;
typedef FYzgWebJSFunction FWebJSFunction;
typedef FYzgWebJSResponse FWebJSResponse;
