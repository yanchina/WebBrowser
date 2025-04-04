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
// $hash=583cc7339202497766178886fdf5cd73b621b7d4$
//

#include "libcef_dll/cpptoc/views/window_delegate_cpptoc.h"

#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/ctocpp/views/window_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/template_util.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
window_delegate_on_window_created(struct _cef_window_delegate_t* self,
                                  cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnWindowCreated(
      CefWindowCToCpp::Wrap(window));
}

void CEF_CALLBACK
window_delegate_on_window_closing(struct _cef_window_delegate_t* self,
                                  cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnWindowClosing(
      CefWindowCToCpp::Wrap(window));
}

void CEF_CALLBACK
window_delegate_on_window_destroyed(struct _cef_window_delegate_t* self,
                                    cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnWindowDestroyed(
      CefWindowCToCpp::Wrap(window));
}

void CEF_CALLBACK window_delegate_on_window_activation_changed(
    struct _cef_window_delegate_t* self,
    cef_window_t* window,
    int active) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnWindowActivationChanged(
      CefWindowCToCpp::Wrap(window), active ? true : false);
}

void CEF_CALLBACK
window_delegate_on_window_bounds_changed(struct _cef_window_delegate_t* self,
                                         cef_window_t* window,
                                         const cef_rect_t* new_bounds) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }
  // Verify param: new_bounds; type: simple_byref_const
  DCHECK(new_bounds);
  if (!new_bounds) {
    return;
  }

  // Translate param: new_bounds; type: simple_byref_const
  CefRect new_boundsVal = new_bounds ? *new_bounds : CefRect();

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnWindowBoundsChanged(
      CefWindowCToCpp::Wrap(window), new_boundsVal);
}

void CEF_CALLBACK window_delegate_on_window_fullscreen_transition(
    struct _cef_window_delegate_t* self,
    cef_window_t* window,
    int is_completed) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnWindowFullscreenTransition(
      CefWindowCToCpp::Wrap(window), is_completed ? true : false);
}

cef_window_t* CEF_CALLBACK
window_delegate_get_parent_window(struct _cef_window_delegate_t* self,
                                  cef_window_t* window,
                                  int* is_menu,
                                  int* can_activate_menu) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return NULL;
  }
  // Verify param: is_menu; type: bool_byaddr
  DCHECK(is_menu);
  if (!is_menu) {
    return NULL;
  }
  // Verify param: can_activate_menu; type: bool_byaddr
  DCHECK(can_activate_menu);
  if (!can_activate_menu) {
    return NULL;
  }

  // Translate param: is_menu; type: bool_byaddr
  bool is_menuBool = (is_menu && *is_menu) ? true : false;
  // Translate param: can_activate_menu; type: bool_byaddr
  bool can_activate_menuBool =
      (can_activate_menu && *can_activate_menu) ? true : false;

  // Execute
  CefRefPtr<CefWindow> _retval =
      CefWindowDelegateCppToC::Get(self)->GetParentWindow(
          CefWindowCToCpp::Wrap(window), &is_menuBool, &can_activate_menuBool);

  // Restore param: is_menu; type: bool_byaddr
  if (is_menu) {
    *is_menu = is_menuBool ? true : false;
  }
  // Restore param: can_activate_menu; type: bool_byaddr
  if (can_activate_menu) {
    *can_activate_menu = can_activate_menuBool ? true : false;
  }

  // Return type: refptr_diff
  return CefWindowCToCpp::Unwrap(_retval);
}

int CEF_CALLBACK
window_delegate_is_window_modal_dialog(struct _cef_window_delegate_t* self,
                                       cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->IsWindowModalDialog(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

cef_rect_t CEF_CALLBACK
window_delegate_get_initial_bounds(struct _cef_window_delegate_t* self,
                                   cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefRect();
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return CefRect();
  }

  // Execute
  cef_rect_t _retval = CefWindowDelegateCppToC::Get(self)->GetInitialBounds(
      CefWindowCToCpp::Wrap(window));

  // Return type: simple
  return _retval;
}

cef_show_state_t CEF_CALLBACK
window_delegate_get_initial_show_state(struct _cef_window_delegate_t* self,
                                       cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CEF_SHOW_STATE_NORMAL;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return CEF_SHOW_STATE_NORMAL;
  }

  // Execute
  cef_show_state_t _retval =
      CefWindowDelegateCppToC::Get(self)->GetInitialShowState(
          CefWindowCToCpp::Wrap(window));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
window_delegate_is_frameless(struct _cef_window_delegate_t* self,
                             cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->IsFrameless(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK window_delegate_with_standard_window_buttons(
    struct _cef_window_delegate_t* self,
    cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->WithStandardWindowButtons(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
window_delegate_get_titlebar_height(struct _cef_window_delegate_t* self,
                                    cef_window_t* window,
                                    float* titlebar_height) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }
  // Verify param: titlebar_height; type: simple_byaddr
  DCHECK(titlebar_height);
  if (!titlebar_height) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->GetTitlebarHeight(
      CefWindowCToCpp::Wrap(window), titlebar_height);

  // Return type: bool
  return _retval;
}

cef_state_t CEF_CALLBACK
window_delegate_accepts_first_mouse(struct _cef_window_delegate_t* self,
                                    cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return STATE_DEFAULT;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return STATE_DEFAULT;
  }

  // Execute
  cef_state_t _retval = CefWindowDelegateCppToC::Get(self)->AcceptsFirstMouse(
      CefWindowCToCpp::Wrap(window));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK window_delegate_can_resize(struct _cef_window_delegate_t* self,
                                            cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->CanResize(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
window_delegate_can_maximize(struct _cef_window_delegate_t* self,
                             cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->CanMaximize(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
window_delegate_can_minimize(struct _cef_window_delegate_t* self,
                             cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->CanMinimize(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK window_delegate_can_close(struct _cef_window_delegate_t* self,
                                           cef_window_t* window) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->CanClose(
      CefWindowCToCpp::Wrap(window));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
window_delegate_on_accelerator(struct _cef_window_delegate_t* self,
                               cef_window_t* window,
                               int command_id) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->OnAccelerator(
      CefWindowCToCpp::Wrap(window), command_id);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
window_delegate_on_key_event(struct _cef_window_delegate_t* self,
                             cef_window_t* window,
                             const cef_key_event_t* event) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }
  // Verify param: event; type: simple_byref_const
  DCHECK(event);
  if (!event) {
    return 0;
  }

  // Translate param: event; type: simple_byref_const
  CefKeyEvent eventVal = event ? *event : CefKeyEvent();

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->OnKeyEvent(
      CefWindowCToCpp::Wrap(window), eventVal);

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
window_delegate_on_theme_colors_changed(struct _cef_window_delegate_t* self,
                                        cef_window_t* window,
                                        int chrome_theme) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(self)->OnThemeColorsChanged(
      CefWindowCToCpp::Wrap(window), chrome_theme ? true : false);
}

cef_runtime_style_t CEF_CALLBACK
window_delegate_get_window_runtime_style(struct _cef_window_delegate_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CEF_RUNTIME_STYLE_DEFAULT;
  }

  // Execute
  cef_runtime_style_t _retval =
      CefWindowDelegateCppToC::Get(self)->GetWindowRuntimeStyle();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK window_delegate_get_linux_window_properties(
    struct _cef_window_delegate_t* self,
    cef_window_t* window,
    struct _cef_linux_window_properties_t* properties) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: window; type: refptr_diff
  DCHECK(window);
  if (!window) {
    return 0;
  }
  // Verify param: properties; type: struct_byref
  DCHECK(properties);
  if (!properties) {
    return 0;
  }
  if (!template_util::has_valid_size(properties)) {
    DCHECK(false) << "invalid properties->[base.]size";
    return 0;
  }

  // Translate param: properties; type: struct_byref
  CefLinuxWindowProperties propertiesObj;
  if (properties) {
    propertiesObj.AttachTo(*properties);
  }

  // Execute
  bool _retval = CefWindowDelegateCppToC::Get(self)->GetLinuxWindowProperties(
      CefWindowCToCpp::Wrap(window), propertiesObj);

  // Restore param: properties; type: struct_byref
  if (properties) {
    propertiesObj.DetachTo(*properties);
  }

  // Return type: bool
  return _retval;
}

cef_size_t CEF_CALLBACK
window_delegate_get_preferred_size(struct _cef_view_delegate_t* self,
                                   cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefWindowDelegateCppToC::Get(
                           reinterpret_cast<cef_window_delegate_t*>(self))
                           ->GetPreferredSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
window_delegate_get_minimum_size(struct _cef_view_delegate_t* self,
                                 cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefWindowDelegateCppToC::Get(
                           reinterpret_cast<cef_window_delegate_t*>(self))
                           ->GetMinimumSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

cef_size_t CEF_CALLBACK
window_delegate_get_maximum_size(struct _cef_view_delegate_t* self,
                                 cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return CefSize();
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval = CefWindowDelegateCppToC::Get(
                           reinterpret_cast<cef_window_delegate_t*>(self))
                           ->GetMaximumSize(CefViewCToCpp::Wrap(view));

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
window_delegate_get_height_for_width(struct _cef_view_delegate_t* self,
                                     cef_view_t* view,
                                     int width) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return 0;
  }

  // Execute
  int _retval = CefWindowDelegateCppToC::Get(
                    reinterpret_cast<cef_window_delegate_t*>(self))
                    ->GetHeightForWidth(CefViewCToCpp::Wrap(view), width);

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK
window_delegate_on_parent_view_changed(struct _cef_view_delegate_t* self,
                                       cef_view_t* view,
                                       int added,
                                       cef_view_t* parent) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }
  // Verify param: parent; type: refptr_diff
  DCHECK(parent);
  if (!parent) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnParentViewChanged(CefViewCToCpp::Wrap(view), added ? true : false,
                            CefViewCToCpp::Wrap(parent));
}

void CEF_CALLBACK
window_delegate_on_child_view_changed(struct _cef_view_delegate_t* self,
                                      cef_view_t* view,
                                      int added,
                                      cef_view_t* child) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }
  // Verify param: child; type: refptr_diff
  DCHECK(child);
  if (!child) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnChildViewChanged(CefViewCToCpp::Wrap(view), added ? true : false,
                           CefViewCToCpp::Wrap(child));
}

void CEF_CALLBACK
window_delegate_on_window_changed(struct _cef_view_delegate_t* self,
                                  cef_view_t* view,
                                  int added) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnWindowChanged(CefViewCToCpp::Wrap(view), added ? true : false);
}

void CEF_CALLBACK
window_delegate_on_layout_changed(struct _cef_view_delegate_t* self,
                                  cef_view_t* view,
                                  const cef_rect_t* new_bounds) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }
  // Verify param: new_bounds; type: simple_byref_const
  DCHECK(new_bounds);
  if (!new_bounds) {
    return;
  }

  // Translate param: new_bounds; type: simple_byref_const
  CefRect new_boundsVal = new_bounds ? *new_bounds : CefRect();

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnLayoutChanged(CefViewCToCpp::Wrap(view), new_boundsVal);
}

void CEF_CALLBACK window_delegate_on_focus(struct _cef_view_delegate_t* self,
                                           cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnFocus(CefViewCToCpp::Wrap(view));
}

void CEF_CALLBACK window_delegate_on_blur(struct _cef_view_delegate_t* self,
                                          cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnBlur(CefViewCToCpp::Wrap(view));
}

void CEF_CALLBACK
window_delegate_on_theme_changed(struct _cef_view_delegate_t* self,
                                 cef_view_t* view) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: view; type: refptr_diff
  DCHECK(view);
  if (!view) {
    return;
  }

  // Execute
  CefWindowDelegateCppToC::Get(reinterpret_cast<cef_window_delegate_t*>(self))
      ->OnThemeChanged(CefViewCToCpp::Wrap(view));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefWindowDelegateCppToC::CefWindowDelegateCppToC() {
  GetStruct()->on_window_created = window_delegate_on_window_created;
  GetStruct()->on_window_closing = window_delegate_on_window_closing;
  GetStruct()->on_window_destroyed = window_delegate_on_window_destroyed;
  GetStruct()->on_window_activation_changed =
      window_delegate_on_window_activation_changed;
  GetStruct()->on_window_bounds_changed =
      window_delegate_on_window_bounds_changed;
  GetStruct()->on_window_fullscreen_transition =
      window_delegate_on_window_fullscreen_transition;
  GetStruct()->get_parent_window = window_delegate_get_parent_window;
  GetStruct()->is_window_modal_dialog = window_delegate_is_window_modal_dialog;
  GetStruct()->get_initial_bounds = window_delegate_get_initial_bounds;
  GetStruct()->get_initial_show_state = window_delegate_get_initial_show_state;
  GetStruct()->is_frameless = window_delegate_is_frameless;
  GetStruct()->with_standard_window_buttons =
      window_delegate_with_standard_window_buttons;
  GetStruct()->get_titlebar_height = window_delegate_get_titlebar_height;
  GetStruct()->accepts_first_mouse = window_delegate_accepts_first_mouse;
  GetStruct()->can_resize = window_delegate_can_resize;
  GetStruct()->can_maximize = window_delegate_can_maximize;
  GetStruct()->can_minimize = window_delegate_can_minimize;
  GetStruct()->can_close = window_delegate_can_close;
  GetStruct()->on_accelerator = window_delegate_on_accelerator;
  GetStruct()->on_key_event = window_delegate_on_key_event;
  GetStruct()->on_theme_colors_changed =
      window_delegate_on_theme_colors_changed;
  GetStruct()->get_window_runtime_style =
      window_delegate_get_window_runtime_style;
  GetStruct()->get_linux_window_properties =
      window_delegate_get_linux_window_properties;
  GetStruct()->base.base.get_preferred_size =
      window_delegate_get_preferred_size;
  GetStruct()->base.base.get_minimum_size = window_delegate_get_minimum_size;
  GetStruct()->base.base.get_maximum_size = window_delegate_get_maximum_size;
  GetStruct()->base.base.get_height_for_width =
      window_delegate_get_height_for_width;
  GetStruct()->base.base.on_parent_view_changed =
      window_delegate_on_parent_view_changed;
  GetStruct()->base.base.on_child_view_changed =
      window_delegate_on_child_view_changed;
  GetStruct()->base.base.on_window_changed = window_delegate_on_window_changed;
  GetStruct()->base.base.on_layout_changed = window_delegate_on_layout_changed;
  GetStruct()->base.base.on_focus = window_delegate_on_focus;
  GetStruct()->base.base.on_blur = window_delegate_on_blur;
  GetStruct()->base.base.on_theme_changed = window_delegate_on_theme_changed;
}

// DESTRUCTOR - Do not edit by hand.

CefWindowDelegateCppToC::~CefWindowDelegateCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefWindowDelegate> CefCppToCRefCounted<
    CefWindowDelegateCppToC,
    CefWindowDelegate,
    cef_window_delegate_t>::UnwrapDerived(CefWrapperType type,
                                          cef_window_delegate_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefWindowDelegateCppToC,
                                   CefWindowDelegate,
                                   cef_window_delegate_t>::kWrapperType =
    WT_WINDOW_DELEGATE;
