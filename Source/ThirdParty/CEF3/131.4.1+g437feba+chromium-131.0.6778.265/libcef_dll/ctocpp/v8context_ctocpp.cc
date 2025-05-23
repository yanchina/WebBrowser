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
// $hash=55a06b76a3a5ab0984fb20cf0cdd9caaf25ba184$
//

#include "libcef_dll/ctocpp/v8context_ctocpp.h"

#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/task_runner_ctocpp.h"
#include "libcef_dll/ctocpp/v8exception_ctocpp.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefV8Context> CefV8Context::GetCurrentContext() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8context_t* _retval = cef_v8context_get_current_context();

  // Return type: refptr_same
  return CefV8ContextCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefV8Context> CefV8Context::GetEnteredContext() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8context_t* _retval = cef_v8context_get_entered_context();

  // Return type: refptr_same
  return CefV8ContextCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefV8Context::InContext() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = cef_v8context_in_context();

  // Return type: bool
  return _retval ? true : false;
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTaskRunner> CefV8ContextCToCpp::GetTaskRunner() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_task_runner)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_task_runner_t* _retval = _struct->get_task_runner(_struct);

  // Return type: refptr_same
  return CefTaskRunnerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefV8ContextCToCpp::IsValid() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowser> CefV8ContextCToCpp::GetBrowser() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_browser)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_t* _retval = _struct->get_browser(_struct);

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefFrame> CefV8ContextCToCpp::GetFrame() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = _struct->get_frame(_struct);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefV8Value> CefV8ContextCToCpp::GetGlobal() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_global)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8value_t* _retval = _struct->get_global(_struct);

  // Return type: refptr_same
  return CefV8ValueCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefV8ContextCToCpp::Enter() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, enter)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->enter(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefV8ContextCToCpp::Exit() {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, exit)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->exit(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefV8ContextCToCpp::IsSame(CefRefPtr<CefV8Context> that) {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->is_same(_struct, CefV8ContextCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefV8ContextCToCpp::Eval(const CefString& code,
                              const CefString& script_url,
                              int start_line,
                              CefRefPtr<CefV8Value>& retval,
                              CefRefPtr<CefV8Exception>& exception) {
  cef_v8context_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, eval)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: code; type: string_byref_const
  DCHECK(!code.empty());
  if (code.empty()) {
    return false;
  }
  // Unverified params: script_url

  // Translate param: retval; type: refptr_same_byref
  cef_v8value_t* retvalStruct = NULL;
  if (retval.get()) {
    retvalStruct = CefV8ValueCToCpp::Unwrap(retval);
  }
  cef_v8value_t* retvalOrig = retvalStruct;
  // Translate param: exception; type: refptr_same_byref
  cef_v8exception_t* exceptionStruct = NULL;
  if (exception.get()) {
    exceptionStruct = CefV8ExceptionCToCpp::Unwrap(exception);
  }
  cef_v8exception_t* exceptionOrig = exceptionStruct;

  // Execute
  int _retval = _struct->eval(_struct, code.GetStruct(), script_url.GetStruct(),
                              start_line, &retvalStruct, &exceptionStruct);

  // Restore param:retval; type: refptr_same_byref
  if (retvalStruct) {
    if (retvalStruct != retvalOrig) {
      retval = CefV8ValueCToCpp::Wrap(retvalStruct);
    }
  } else {
    retval = nullptr;
  }
  // Restore param:exception; type: refptr_same_byref
  if (exceptionStruct) {
    if (exceptionStruct != exceptionOrig) {
      exception = CefV8ExceptionCToCpp::Wrap(exceptionStruct);
    }
  } else {
    exception = nullptr;
  }

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefV8ContextCToCpp::CefV8ContextCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefV8ContextCToCpp::~CefV8ContextCToCpp() {}

template <>
cef_v8context_t*
CefCToCppRefCounted<CefV8ContextCToCpp, CefV8Context, cef_v8context_t>::
    UnwrapDerived(CefWrapperType type, CefV8Context* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefV8ContextCToCpp,
                                   CefV8Context,
                                   cef_v8context_t>::kWrapperType =
    WT_V8CONTEXT;
