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
// $hash=f8843a543a55008f2e9fd9a1e881a93fe79f88ff$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_X509CERTIFICATE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_X509CERTIFICATE_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_x509_certificate_capi.h"
#include "include/cef_x509_certificate.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefX509CertificateCToCpp
    : public CefCToCppRefCounted<CefX509CertificateCToCpp,
                                 CefX509Certificate,
                                 cef_x509certificate_t> {
 public:
  CefX509CertificateCToCpp();
  virtual ~CefX509CertificateCToCpp();

  // CefX509Certificate methods.
  CefRefPtr<CefX509CertPrincipal> GetSubject() override;
  CefRefPtr<CefX509CertPrincipal> GetIssuer() override;
  CefRefPtr<CefBinaryValue> GetSerialNumber() override;
  CefBaseTime GetValidStart() override;
  CefBaseTime GetValidExpiry() override;
  CefRefPtr<CefBinaryValue> GetDEREncoded() override;
  CefRefPtr<CefBinaryValue> GetPEMEncoded() override;
  size_t GetIssuerChainSize() override;
  void GetDEREncodedIssuerChain(IssuerChainBinaryList& chain) override;
  void GetPEMEncodedIssuerChain(IssuerChainBinaryList& chain) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_X509CERTIFICATE_CTOCPP_H_
