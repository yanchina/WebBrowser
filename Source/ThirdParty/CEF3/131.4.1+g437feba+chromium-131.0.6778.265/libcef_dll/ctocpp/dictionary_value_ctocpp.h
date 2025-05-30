// Copyright (c) 2025 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=5ad50df6449df83b63b1225675c36aa94f3c2f94$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DICTIONARY_VALUE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DICTIONARY_VALUE_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_values_capi.h"
#include "include/cef_values.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDictionaryValueCToCpp
    : public CefCToCppRefCounted<CefDictionaryValueCToCpp,
                                 CefDictionaryValue,
                                 cef_dictionary_value_t> {
 public:
  CefDictionaryValueCToCpp();
  virtual ~CefDictionaryValueCToCpp();

  // CefDictionaryValue methods.
  bool IsValid() override;
  bool IsOwned() override;
  bool IsReadOnly() override;
  bool IsSame(CefRefPtr<CefDictionaryValue> that) override;
  bool IsEqual(CefRefPtr<CefDictionaryValue> that) override;
  CefRefPtr<CefDictionaryValue> Copy(bool exclude_empty_children) override;
  size_t GetSize() override;
  bool Clear() override;
  bool HasKey(const CefString& key) override;
  bool GetKeys(KeyList& keys) override;
  bool Remove(const CefString& key) override;
  CefValueType GetType(const CefString& key) override;
  CefRefPtr<CefValue> GetValue(const CefString& key) override;
  bool GetBool(const CefString& key) override;
  int GetInt(const CefString& key) override;
  double GetDouble(const CefString& key) override;
  CefString GetString(const CefString& key) override;
  CefRefPtr<CefBinaryValue> GetBinary(const CefString& key) override;
  CefRefPtr<CefDictionaryValue> GetDictionary(const CefString& key) override;
  CefRefPtr<CefListValue> GetList(const CefString& key) override;
  bool SetValue(const CefString& key, CefRefPtr<CefValue> value) override;
  bool SetNull(const CefString& key) override;
  bool SetBool(const CefString& key, bool value) override;
  bool SetInt(const CefString& key, int value) override;
  bool SetDouble(const CefString& key, double value) override;
  bool SetString(const CefString& key, const CefString& value) override;
  bool SetBinary(const CefString& key,
                 CefRefPtr<CefBinaryValue> value) override;
  bool SetDictionary(const CefString& key,
                     CefRefPtr<CefDictionaryValue> value) override;
  bool SetList(const CefString& key, CefRefPtr<CefListValue> value) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DICTIONARY_VALUE_CTOCPP_H_
