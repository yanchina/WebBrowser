// Copyright (c) 2025 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=0f59aa44781adb38aa03f6d12ff8faaca56b6c17$
//

#ifndef CEF_INCLUDE_CAPI_CEF_RESPONSE_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_RESPONSE_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
/// Structure used to represent a web response. The functions of this structure
/// may be called on any thread.
///
typedef struct _cef_response_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Returns true (1) if this object is read-only.
  ///
  int(CEF_CALLBACK* is_read_only)(struct _cef_response_t* self);

  ///
  /// Get the response error code. Returns ERR_NONE if there was no error.
  ///
  cef_errorcode_t(CEF_CALLBACK* get_error)(struct _cef_response_t* self);

  ///
  /// Set the response error code. This can be used by custom scheme handlers to
  /// return errors during initial request processing.
  ///
  void(CEF_CALLBACK* set_error)(struct _cef_response_t* self,
                                cef_errorcode_t error);

  ///
  /// Get the response status code.
  ///
  int(CEF_CALLBACK* get_status)(struct _cef_response_t* self);

  ///
  /// Set the response status code.
  ///
  void(CEF_CALLBACK* set_status)(struct _cef_response_t* self, int status);

  ///
  /// Get the response status text.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_status_text)(
      struct _cef_response_t* self);

  ///
  /// Set the response status text.
  ///
  void(CEF_CALLBACK* set_status_text)(struct _cef_response_t* self,
                                      const cef_string_t* statusText);

  ///
  /// Get the response mime type.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_mime_type)(
      struct _cef_response_t* self);

  ///
  /// Set the response mime type.
  ///
  void(CEF_CALLBACK* set_mime_type)(struct _cef_response_t* self,
                                    const cef_string_t* mimeType);

  ///
  /// Get the response charset.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_charset)(
      struct _cef_response_t* self);

  ///
  /// Set the response charset.
  ///
  void(CEF_CALLBACK* set_charset)(struct _cef_response_t* self,
                                  const cef_string_t* charset);

  ///
  /// Get the value for the specified response header field.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_header_by_name)(
      struct _cef_response_t* self,
      const cef_string_t* name);

  ///
  /// Set the header |name| to |value|. If |overwrite| is true (1) any existing
  /// values will be replaced with the new value. If |overwrite| is false (0)
  /// any existing values will not be overwritten.
  ///
  void(CEF_CALLBACK* set_header_by_name)(struct _cef_response_t* self,
                                         const cef_string_t* name,
                                         const cef_string_t* value,
                                         int overwrite);

  ///
  /// Get all response header fields.
  ///
  void(CEF_CALLBACK* get_header_map)(struct _cef_response_t* self,
                                     cef_string_multimap_t headerMap);

  ///
  /// Set all response header fields.
  ///
  void(CEF_CALLBACK* set_header_map)(struct _cef_response_t* self,
                                     cef_string_multimap_t headerMap);

  ///
  /// Get the resolved URL after redirects or changed as a result of HSTS.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_url)(struct _cef_response_t* self);

  ///
  /// Set the resolved URL after redirects or changed as a result of HSTS.
  ///
  void(CEF_CALLBACK* set_url)(struct _cef_response_t* self,
                              const cef_string_t* url);
} cef_response_t;

///
/// Create a new cef_response_t object.
///
CEF_EXPORT cef_response_t* cef_response_create(void);

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_RESPONSE_CAPI_H_
