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
// $hash=d849f2334e597b6396172576bfcfadbb0fa4bd80$
//

#include "libcef_dll/cpptoc/dialog_handler_cpptoc.h"

#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/file_dialog_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
dialog_handler_on_file_dialog(struct _cef_dialog_handler_t* self,
                              cef_browser_t* browser,
                              cef_file_dialog_mode_t mode,
                              const cef_string_t* title,
                              const cef_string_t* default_file_path,
                              cef_string_list_t accept_filters,
                              cef_string_list_t accept_extensions,
                              cef_string_list_t accept_descriptions,
                              cef_file_dialog_callback_t* callback) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser) {
    return 0;
  }
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback) {
    return 0;
  }
  // Unverified params: title, default_file_path, accept_filters,
  // accept_extensions, accept_descriptions

  // Translate param: accept_filters; type: string_vec_byref_const
  std::vector<CefString> accept_filtersList;
  transfer_string_list_contents(accept_filters, accept_filtersList);
  // Translate param: accept_extensions; type: string_vec_byref_const
  std::vector<CefString> accept_extensionsList;
  transfer_string_list_contents(accept_extensions, accept_extensionsList);
  // Translate param: accept_descriptions; type: string_vec_byref_const
  std::vector<CefString> accept_descriptionsList;
  transfer_string_list_contents(accept_descriptions, accept_descriptionsList);

  // Execute
  bool _retval = CefDialogHandlerCppToC::Get(self)->OnFileDialog(
      CefBrowserCToCpp::Wrap(browser), mode, CefString(title),
      CefString(default_file_path), accept_filtersList, accept_extensionsList,
      accept_descriptionsList, CefFileDialogCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefDialogHandlerCppToC::CefDialogHandlerCppToC() {
  GetStruct()->on_file_dialog = dialog_handler_on_file_dialog;
}

// DESTRUCTOR - Do not edit by hand.

CefDialogHandlerCppToC::~CefDialogHandlerCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefDialogHandler> CefCppToCRefCounted<
    CefDialogHandlerCppToC,
    CefDialogHandler,
    cef_dialog_handler_t>::UnwrapDerived(CefWrapperType type,
                                         cef_dialog_handler_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefDialogHandlerCppToC,
                                   CefDialogHandler,
                                   cef_dialog_handler_t>::kWrapperType =
    WT_DIALOG_HANDLER;
