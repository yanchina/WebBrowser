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
// $hash=e18dfa6be839c6effa6ec538dfbcfcdd7e791136$
//

#ifndef CEF_INCLUDE_CAPI_VIEWS_CEF_PANEL_CAPI_H_
#define CEF_INCLUDE_CAPI_VIEWS_CEF_PANEL_CAPI_H_
#pragma once

#include "include/capi/views/cef_panel_delegate_capi.h"
#include "include/capi/views/cef_view_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

struct _cef_box_layout_t;
struct _cef_fill_layout_t;
struct _cef_layout_t;
struct _cef_window_t;

///
/// A Panel is a container in the views hierarchy that can contain other Views
/// as children. Methods must be called on the browser process UI thread unless
/// otherwise indicated.
///
typedef struct _cef_panel_t {
  ///
  /// Base structure.
  ///
  cef_view_t base;

  ///
  /// Returns this Panel as a Window or NULL if this is not a Window.
  ///
  struct _cef_window_t*(CEF_CALLBACK* as_window)(struct _cef_panel_t* self);

  ///
  /// Set this Panel's Layout to FillLayout and return the FillLayout object.
  ///
  struct _cef_fill_layout_t*(CEF_CALLBACK* set_to_fill_layout)(
      struct _cef_panel_t* self);

  ///
  /// Set this Panel's Layout to BoxLayout and return the BoxLayout object.
  ///
  struct _cef_box_layout_t*(CEF_CALLBACK* set_to_box_layout)(
      struct _cef_panel_t* self,
      const cef_box_layout_settings_t* settings);

  ///
  /// Get the Layout.
  ///
  struct _cef_layout_t*(CEF_CALLBACK* get_layout)(struct _cef_panel_t* self);

  ///
  /// Lay out the child Views (set their bounds based on sizing heuristics
  /// specific to the current Layout).
  ///
  void(CEF_CALLBACK* layout)(struct _cef_panel_t* self);

  ///
  /// Add a child View.
  ///
  void(CEF_CALLBACK* add_child_view)(struct _cef_panel_t* self,
                                     struct _cef_view_t* view);

  ///
  /// Add a child View at the specified |index|. If |index| matches the result
  /// of GetChildCount() then the View will be added at the end.
  ///
  void(CEF_CALLBACK* add_child_view_at)(struct _cef_panel_t* self,
                                        struct _cef_view_t* view,
                                        int index);

  ///
  /// Move the child View to the specified |index|. A negative value for |index|
  /// will move the View to the end.
  ///
  void(CEF_CALLBACK* reorder_child_view)(struct _cef_panel_t* self,
                                         struct _cef_view_t* view,
                                         int index);

  ///
  /// Remove a child View. The View can then be added to another Panel.
  ///
  void(CEF_CALLBACK* remove_child_view)(struct _cef_panel_t* self,
                                        struct _cef_view_t* view);

  ///
  /// Remove all child Views. The removed Views will be deleted if the client
  /// holds no references to them.
  ///
  void(CEF_CALLBACK* remove_all_child_views)(struct _cef_panel_t* self);

  ///
  /// Returns the number of child Views.
  ///
  size_t(CEF_CALLBACK* get_child_view_count)(struct _cef_panel_t* self);

  ///
  /// Returns the child View at the specified |index|.
  ///
  struct _cef_view_t*(
      CEF_CALLBACK* get_child_view_at)(struct _cef_panel_t* self, int index);
} cef_panel_t;

///
/// Create a new Panel.
///
CEF_EXPORT cef_panel_t* cef_panel_create(
    struct _cef_panel_delegate_t* delegate);

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_VIEWS_CEF_PANEL_CAPI_H_
