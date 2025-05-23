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
// $hash=b68077d68d43cdcaebc763633de40ec807556459$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_SSLINFO_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_SSLINFO_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_ssl_info_capi.h"
#include "include/cef_ssl_info.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefSSLInfoCToCpp
    : public CefCToCppRefCounted<CefSSLInfoCToCpp, CefSSLInfo, cef_sslinfo_t> {
 public:
  CefSSLInfoCToCpp();
  virtual ~CefSSLInfoCToCpp();

  // CefSSLInfo methods.
  cef_cert_status_t GetCertStatus() override;
  CefRefPtr<CefX509Certificate> GetX509Certificate() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_SSLINFO_CTOCPP_H_
