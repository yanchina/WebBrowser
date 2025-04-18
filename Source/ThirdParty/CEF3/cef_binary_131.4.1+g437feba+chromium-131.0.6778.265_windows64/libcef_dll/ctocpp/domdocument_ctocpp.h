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
// $hash=82ed8817a33c52a8440113a7dfe5145d10930dd6$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_DOMDOCUMENT_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DOMDOCUMENT_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_dom_capi.h"
#include "include/cef_dom.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDOMDocumentCToCpp : public CefCToCppRefCounted<CefDOMDocumentCToCpp,
                                                        CefDOMDocument,
                                                        cef_domdocument_t> {
 public:
  CefDOMDocumentCToCpp();
  virtual ~CefDOMDocumentCToCpp();

  // CefDOMDocument methods.
  Type GetType() override;
  CefRefPtr<CefDOMNode> GetDocument() override;
  CefRefPtr<CefDOMNode> GetBody() override;
  CefRefPtr<CefDOMNode> GetHead() override;
  CefString GetTitle() override;
  CefRefPtr<CefDOMNode> GetElementById(const CefString& id) override;
  CefRefPtr<CefDOMNode> GetFocusedNode() override;
  bool HasSelection() override;
  int GetSelectionStartOffset() override;
  int GetSelectionEndOffset() override;
  CefString GetSelectionAsMarkup() override;
  CefString GetSelectionAsText() override;
  CefString GetBaseURL() override;
  CefString GetCompleteURL(const CefString& partialURL) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_DOMDOCUMENT_CTOCPP_H_
