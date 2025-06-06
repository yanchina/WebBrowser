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
// $hash=486b77634fa6b992f73ad6c50059e3b485e799d8$
//

#ifndef CEF_INCLUDE_CAPI_CEF_RESOURCE_REQUEST_HANDLER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_RESOURCE_REQUEST_HANDLER_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_callback_capi.h"
#include "include/capi/cef_frame_capi.h"
#include "include/capi/cef_request_capi.h"
#include "include/capi/cef_resource_handler_capi.h"
#include "include/capi/cef_response_capi.h"
#include "include/capi/cef_response_filter_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

struct _cef_cookie_access_filter_t;

///
/// Implement this structure to handle events related to browser requests. The
/// functions of this structure will be called on the IO thread unless otherwise
/// indicated.
///
typedef struct _cef_resource_request_handler_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Called on the IO thread before a resource request is loaded. The |browser|
  /// and |frame| values represent the source of the request, and may be NULL
  /// for requests originating from service workers or cef_urlrequest_t. To
  /// optionally filter cookies for the request return a
  /// cef_cookie_access_filter_t object. The |request| object cannot not be
  /// modified in this callback.
  ///
  struct _cef_cookie_access_filter_t*(CEF_CALLBACK* get_cookie_access_filter)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request);

  ///
  /// Called on the IO thread before a resource request is loaded. The |browser|
  /// and |frame| values represent the source of the request, and may be NULL
  /// for requests originating from service workers or cef_urlrequest_t. To
  /// redirect or change the resource load optionally modify |request|.
  /// Modification of the request URL will be treated as a redirect. Return
  /// RV_CONTINUE to continue the request immediately. Return RV_CONTINUE_ASYNC
  /// and call cef_callback_t functions at a later time to continue or cancel
  /// the request asynchronously. Return RV_CANCEL to cancel the request
  /// immediately.
  ///
  cef_return_value_t(CEF_CALLBACK* on_before_resource_load)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_callback_t* callback);

  ///
  /// Called on the IO thread before a resource is loaded. The |browser| and
  /// |frame| values represent the source of the request, and may be NULL for
  /// requests originating from service workers or cef_urlrequest_t. To allow
  /// the resource to load using the default network loader return NULL. To
  /// specify a handler for the resource return a cef_resource_handler_t object.
  /// The |request| object cannot not be modified in this callback.
  ///
  struct _cef_resource_handler_t*(CEF_CALLBACK* get_resource_handler)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request);

  ///
  /// Called on the IO thread when a resource load is redirected. The |browser|
  /// and |frame| values represent the source of the request, and may be NULL
  /// for requests originating from service workers or cef_urlrequest_t. The
  /// |request| parameter will contain the old URL and other request-related
  /// information. The |response| parameter will contain the response that
  /// resulted in the redirect. The |new_url| parameter will contain the new URL
  /// and can be changed if desired. The |request| and |response| objects cannot
  /// be modified in this callback.
  ///
  void(CEF_CALLBACK* on_resource_redirect)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_response_t* response,
      cef_string_t* new_url);

  ///
  /// Called on the IO thread when a resource response is received. The
  /// |browser| and |frame| values represent the source of the request, and may
  /// be NULL for requests originating from service workers or cef_urlrequest_t.
  /// To allow the resource load to proceed without modification return false
  /// (0). To redirect or retry the resource load optionally modify |request|
  /// and return true (1). Modification of the request URL will be treated as a
  /// redirect. Requests handled using the default network loader cannot be
  /// redirected in this callback. The |response| object cannot be modified in
  /// this callback.
  ///
  /// WARNING: Redirecting using this function is deprecated. Use
  /// OnBeforeResourceLoad or GetResourceHandler to perform redirects.
  ///
  int(CEF_CALLBACK* on_resource_response)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_response_t* response);

  ///
  /// Called on the IO thread to optionally filter resource response content.
  /// The |browser| and |frame| values represent the source of the request, and
  /// may be NULL for requests originating from service workers or
  /// cef_urlrequest_t. |request| and |response| represent the request and
  /// response respectively and cannot be modified in this callback.
  ///
  struct _cef_response_filter_t*(CEF_CALLBACK* get_resource_response_filter)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_response_t* response);

  ///
  /// Called on the IO thread when a resource load has completed. The |browser|
  /// and |frame| values represent the source of the request, and may be NULL
  /// for requests originating from service workers or cef_urlrequest_t.
  /// |request| and |response| represent the request and response respectively
  /// and cannot be modified in this callback. |status| indicates the load
  /// completion status. |received_content_length| is the number of response
  /// bytes actually read. This function will be called for all requests,
  /// including requests that are aborted due to CEF shutdown or destruction of
  /// the associated browser. In cases where the associated browser is destroyed
  /// this callback may arrive after the cef_life_span_handler_t::OnBeforeClose
  /// callback for that browser. The cef_frame_t::IsValid function can be used
  /// to test for this situation, and care should be taken not to call |browser|
  /// or |frame| functions that modify state (like LoadURL, SendProcessMessage,
  /// etc.) if the frame is invalid.
  ///
  void(CEF_CALLBACK* on_resource_load_complete)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      struct _cef_response_t* response,
      cef_urlrequest_status_t status,
      int64_t received_content_length);

  ///
  /// Called on the IO thread to handle requests for URLs with an unknown
  /// protocol component. The |browser| and |frame| values represent the source
  /// of the request, and may be NULL for requests originating from service
  /// workers or cef_urlrequest_t. |request| cannot be modified in this
  /// callback. Set |allow_os_execution| to true (1) to attempt execution via
  /// the registered OS protocol handler, if any. SECURITY WARNING: YOU SHOULD
  /// USE THIS METHOD TO ENFORCE RESTRICTIONS BASED ON SCHEME, HOST OR OTHER URL
  /// ANALYSIS BEFORE ALLOWING OS EXECUTION.
  ///
  void(CEF_CALLBACK* on_protocol_execution)(
      struct _cef_resource_request_handler_t* self,
      struct _cef_browser_t* browser,
      struct _cef_frame_t* frame,
      struct _cef_request_t* request,
      int* allow_os_execution);
} cef_resource_request_handler_t;

///
/// Implement this structure to filter cookies that may be sent or received from
/// resource requests. The functions of this structure will be called on the IO
/// thread unless otherwise indicated.
///
typedef struct _cef_cookie_access_filter_t {
  ///
  /// Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  /// Called on the IO thread before a resource request is sent. The |browser|
  /// and |frame| values represent the source of the request, and may be NULL
  /// for requests originating from service workers or cef_urlrequest_t.
  /// |request| cannot be modified in this callback. Return true (1) if the
  /// specified cookie can be sent with the request or false (0) otherwise.
  ///
  int(CEF_CALLBACK* can_send_cookie)(struct _cef_cookie_access_filter_t* self,
                                     struct _cef_browser_t* browser,
                                     struct _cef_frame_t* frame,
                                     struct _cef_request_t* request,
                                     const struct _cef_cookie_t* cookie);

  ///
  /// Called on the IO thread after a resource response is received. The
  /// |browser| and |frame| values represent the source of the request, and may
  /// be NULL for requests originating from service workers or cef_urlrequest_t.
  /// |request| cannot be modified in this callback. Return true (1) if the
  /// specified cookie returned with the response can be saved or false (0)
  /// otherwise.
  ///
  int(CEF_CALLBACK* can_save_cookie)(struct _cef_cookie_access_filter_t* self,
                                     struct _cef_browser_t* browser,
                                     struct _cef_frame_t* frame,
                                     struct _cef_request_t* request,
                                     struct _cef_response_t* response,
                                     const struct _cef_cookie_t* cookie);
} cef_cookie_access_filter_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_RESOURCE_REQUEST_HANDLER_CAPI_H_
