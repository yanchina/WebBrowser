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
// $hash=7479588d0dec53a4b9fccc3ed697220f05ab5ca0$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_FRAME_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_FRAME_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_frame_capi.h"
#include "include/capi/cef_urlrequest_capi.h"
#include "include/capi/cef_v8_capi.h"
#include "include/cef_browser.h"
#include "include/cef_frame.h"
#include "include/cef_urlrequest.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefFrameCToCpp
    : public CefCToCppRefCounted<CefFrameCToCpp, CefFrame, cef_frame_t> {
 public:
  CefFrameCToCpp();
  virtual ~CefFrameCToCpp();

  // CefFrame methods.
  bool IsValid() override;
  void Undo() override;
  void Redo() override;
  void Cut() override;
  void Copy() override;
  void Paste() override;
  void PasteAndMatchStyle() override;
  void Delete() override;
  void SelectAll() override;
  void ViewSource() override;
  void GetSource(CefRefPtr<CefStringVisitor> visitor) override;
  void GetText(CefRefPtr<CefStringVisitor> visitor) override;
  void LoadRequest(CefRefPtr<CefRequest> request) override;
  void LoadURL(const CefString& url) override;
  void ExecuteJavaScript(const CefString& code,
                         const CefString& script_url,
                         int start_line) override;
  bool IsMain() override;
  bool IsFocused() override;
  CefString GetName() override;
  CefString GetIdentifier() override;
  CefRefPtr<CefFrame> GetParent() override;
  CefString GetURL() override;
  CefRefPtr<CefBrowser> GetBrowser() override;
  CefRefPtr<CefV8Context> GetV8Context() override;
  void VisitDOM(CefRefPtr<CefDOMVisitor> visitor) override;
  CefRefPtr<CefURLRequest> CreateURLRequest(
      CefRefPtr<CefRequest> request,
      CefRefPtr<CefURLRequestClient> client) override;
  void SendProcessMessage(CefProcessId target_process,
                          CefRefPtr<CefProcessMessage> message) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_FRAME_CTOCPP_H_
