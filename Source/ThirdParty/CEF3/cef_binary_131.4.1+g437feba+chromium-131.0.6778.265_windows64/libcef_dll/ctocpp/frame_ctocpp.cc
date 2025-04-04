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
// $hash=0390bc228b60e22f264626b87220b4e02542063c$
//

#include "libcef_dll/ctocpp/frame_ctocpp.h"

#include "libcef_dll/cpptoc/domvisitor_cpptoc.h"
#include "libcef_dll/cpptoc/string_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/urlrequest_client_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/process_message_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/urlrequest_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") bool CefFrameCToCpp::IsValid() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::Undo() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, undo)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->undo(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::Redo() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, redo)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->redo(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::Cut() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cut)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cut(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::Copy() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, copy)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->copy(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::Paste() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, paste)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->paste(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::PasteAndMatchStyle() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, paste_and_match_style)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->paste_and_match_style(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::Delete() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, del)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->del(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::SelectAll() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, select_all)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->select_all(_struct);
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::ViewSource() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, view_source)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->view_source(_struct);
}

NO_SANITIZE("cfi-icall")
void CefFrameCToCpp::GetSource(CefRefPtr<CefStringVisitor> visitor) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_source)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor.get());
  if (!visitor.get()) {
    return;
  }

  // Execute
  _struct->get_source(_struct, CefStringVisitorCppToC::Wrap(visitor));
}

NO_SANITIZE("cfi-icall")
void CefFrameCToCpp::GetText(CefRefPtr<CefStringVisitor> visitor) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_text)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor.get());
  if (!visitor.get()) {
    return;
  }

  // Execute
  _struct->get_text(_struct, CefStringVisitorCppToC::Wrap(visitor));
}

NO_SANITIZE("cfi-icall")
void CefFrameCToCpp::LoadRequest(CefRefPtr<CefRequest> request) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, load_request)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_same
  DCHECK(request.get());
  if (!request.get()) {
    return;
  }

  // Execute
  _struct->load_request(_struct, CefRequestCToCpp::Unwrap(request));
}

NO_SANITIZE("cfi-icall") void CefFrameCToCpp::LoadURL(const CefString& url) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, load_url)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(!url.empty());
  if (url.empty()) {
    return;
  }

  // Execute
  _struct->load_url(_struct, url.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefFrameCToCpp::ExecuteJavaScript(const CefString& code,
                                       const CefString& script_url,
                                       int start_line) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, execute_java_script)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: code; type: string_byref_const
  DCHECK(!code.empty());
  if (code.empty()) {
    return;
  }
  // Unverified params: script_url

  // Execute
  _struct->execute_java_script(_struct, code.GetStruct(),
                               script_url.GetStruct(), start_line);
}

NO_SANITIZE("cfi-icall") bool CefFrameCToCpp::IsMain() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_main)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_main(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefFrameCToCpp::IsFocused() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_focused)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_focused(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefFrameCToCpp::GetName() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_name)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefFrameCToCpp::GetIdentifier() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_identifier)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_identifier(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefFrame> CefFrameCToCpp::GetParent() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_parent)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = _struct->get_parent(_struct);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefString CefFrameCToCpp::GetURL() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_url)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefBrowser> CefFrameCToCpp::GetBrowser() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_browser)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_t* _retval = _struct->get_browser(_struct);

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefV8Context> CefFrameCToCpp::GetV8Context() {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_v8context)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8context_t* _retval = _struct->get_v8context(_struct);

  // Return type: refptr_same
  return CefV8ContextCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefFrameCToCpp::VisitDOM(CefRefPtr<CefDOMVisitor> visitor) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, visit_dom)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor.get());
  if (!visitor.get()) {
    return;
  }

  // Execute
  _struct->visit_dom(_struct, CefDOMVisitorCppToC::Wrap(visitor));
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefURLRequest> CefFrameCToCpp::CreateURLRequest(
    CefRefPtr<CefRequest> request,
    CefRefPtr<CefURLRequestClient> client) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, create_urlrequest)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_same
  DCHECK(request.get());
  if (!request.get()) {
    return nullptr;
  }
  // Verify param: client; type: refptr_diff
  DCHECK(client.get());
  if (!client.get()) {
    return nullptr;
  }

  // Execute
  cef_urlrequest_t* _retval =
      _struct->create_urlrequest(_struct, CefRequestCToCpp::Unwrap(request),
                                 CefURLRequestClientCppToC::Wrap(client));

  // Return type: refptr_same
  return CefURLRequestCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefFrameCToCpp::SendProcessMessage(CefProcessId target_process,
                                        CefRefPtr<CefProcessMessage> message) {
  shutdown_checker::AssertNotShutdown();

  cef_frame_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, send_process_message)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: message; type: refptr_same
  DCHECK(message.get());
  if (!message.get()) {
    return;
  }

  // Execute
  _struct->send_process_message(_struct, target_process,
                                CefProcessMessageCToCpp::Unwrap(message));
}

// CONSTRUCTOR - Do not edit by hand.

CefFrameCToCpp::CefFrameCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefFrameCToCpp::~CefFrameCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_frame_t*
CefCToCppRefCounted<CefFrameCToCpp, CefFrame, cef_frame_t>::UnwrapDerived(
    CefWrapperType type,
    CefFrame* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefFrameCToCpp, CefFrame, cef_frame_t>::kWrapperType =
        WT_FRAME;
