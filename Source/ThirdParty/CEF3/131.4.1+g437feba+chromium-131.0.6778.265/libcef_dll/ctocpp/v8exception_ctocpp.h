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
// $hash=bc772798e1c99104c6b3abc43c24991ae6dd99e5$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8EXCEPTION_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8EXCEPTION_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefV8ExceptionCToCpp : public CefCToCppRefCounted<CefV8ExceptionCToCpp,
                                                        CefV8Exception,
                                                        cef_v8exception_t> {
 public:
  CefV8ExceptionCToCpp();
  virtual ~CefV8ExceptionCToCpp();

  // CefV8Exception methods.
  CefString GetMessage() override;
  CefString GetSourceLine() override;
  CefString GetScriptResourceName() override;
  int GetLineNumber() override;
  int GetStartPosition() override;
  int GetEndPosition() override;
  int GetStartColumn() override;
  int GetEndColumn() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_V8EXCEPTION_CTOCPP_H_
