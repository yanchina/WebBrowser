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
// $hash=7a7a34ed8861f059e0dfe9712b44a134411dd0f2$
//

#ifndef CEF_INCLUDE_CAPI_VIEWS_CEF_BROWSER_VIEW_CAPI_H_
#define CEF_INCLUDE_CAPI_VIEWS_CEF_BROWSER_VIEW_CAPI_H_
#pragma once

#include "include/capi/cef_browser_capi.h"
#include "include/capi/views/cef_browser_view_delegate_capi.h"
#include "include/capi/views/cef_view_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
/// A View hosting a cef_browser_t instance. Methods must be called on the
/// browser process UI thread unless otherwise indicated.
///
typedef struct _cef_browser_view_t {
  ///
  /// Base structure.
  ///
  cef_view_t base;

  ///
  /// Returns the cef_browser_t hosted by this BrowserView. Will return NULL if
  /// the browser has not yet been created or has already been destroyed.
  ///
  struct _cef_browser_t*(CEF_CALLBACK* get_browser)(
      struct _cef_browser_view_t* self);

  ///
  /// Returns the Chrome toolbar associated with this BrowserView. Only
  /// supported when using Chrome style. The cef_browser_view_delegate_t::
  /// get_chrome_toolbar_type() function must return a value other than
  /// CEF_CTT_NONE and the toolbar will not be available until after this
  /// BrowserView is added to a cef_window_t and
  /// cef_view_delegate_t::on_window_changed() has been called.
  ///
  struct _cef_view_t*(CEF_CALLBACK* get_chrome_toolbar)(
      struct _cef_browser_view_t* self);

  ///
  /// Sets whether normal priority accelerators are first forwarded to the web
  /// content (`keydown` event handler) or cef_keyboard_handler_t. Normal
  /// priority accelerators can be registered via cef_window_t::SetAccelerator
  /// (with |high_priority|=false (0)) or internally for standard accelerators
  /// supported by Chrome style. If |prefer_accelerators| is true (1) then the
  /// matching accelerator will be triggered immediately (calling
  /// cef_window_delegate_t::OnAccelerator or
  /// cef_command_handler_t::OnChromeCommand respectively) and the event will
  /// not be forwarded to the web content or cef_keyboard_handler_t first. If
  /// |prefer_accelerators| is false (0) then the matching accelerator will only
  /// be triggered if the event is not handled by web content (`keydown` event
  /// handler that calls `event.preventDefault()`) or by cef_keyboard_handler_t.
  /// The default value is false (0).
  ///
  void(CEF_CALLBACK* set_prefer_accelerators)(struct _cef_browser_view_t* self,
                                              int prefer_accelerators);

  ///
  /// Returns the runtime style for this BrowserView (ALLOY or CHROME). See
  /// cef_runtime_style_t documentation for details.
  ///
  cef_runtime_style_t(CEF_CALLBACK* get_runtime_style)(
      struct _cef_browser_view_t* self);
} cef_browser_view_t;

///
/// Create a new BrowserView. The underlying cef_browser_t will not be created
/// until this view is added to the views hierarchy. The optional |extra_info|
/// parameter provides an opportunity to specify extra information specific to
/// the created browser that will be passed to
/// cef_render_process_handler_t::on_browser_created() in the render process.
///
CEF_EXPORT cef_browser_view_t* cef_browser_view_create(
    struct _cef_client_t* client,
    const cef_string_t* url,
    const struct _cef_browser_settings_t* settings,
    struct _cef_dictionary_value_t* extra_info,
    struct _cef_request_context_t* request_context,
    struct _cef_browser_view_delegate_t* delegate);

///
/// Returns the BrowserView associated with |browser|.
///
CEF_EXPORT cef_browser_view_t* cef_browser_view_get_for_browser(
    struct _cef_browser_t* browser);

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_VIEWS_CEF_BROWSER_VIEW_CAPI_H_
