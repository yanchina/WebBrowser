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
// $hash=b8441d40db12ea746f214facb1a5ddbf5037232b$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_RUN_QUICK_MENU_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_RUN_QUICK_MENU_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_context_menu_handler_capi.h"
#include "include/cef_context_menu_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefRunQuickMenuCallbackCToCpp
    : public CefCToCppRefCounted<CefRunQuickMenuCallbackCToCpp,
                                 CefRunQuickMenuCallback,
                                 cef_run_quick_menu_callback_t> {
 public:
  CefRunQuickMenuCallbackCToCpp();
  virtual ~CefRunQuickMenuCallbackCToCpp();

  // CefRunQuickMenuCallback methods.
  void Continue(int command_id, cef_event_flags_t event_flags) override;
  void Cancel() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_RUN_QUICK_MENU_CALLBACK_CTOCPP_H_
