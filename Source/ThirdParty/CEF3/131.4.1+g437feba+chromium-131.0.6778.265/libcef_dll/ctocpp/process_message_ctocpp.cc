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
// $hash=28c69f549285ac36535ca4fef26c8af04ec469c7$
//

#include "libcef_dll/ctocpp/process_message_ctocpp.h"

#include "libcef_dll/ctocpp/list_value_ctocpp.h"
#include "libcef_dll/ctocpp/shared_memory_region_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefProcessMessage> CefProcessMessage::Create(const CefString& name) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty()) {
    return nullptr;
  }

  // Execute
  cef_process_message_t* _retval = cef_process_message_create(name.GetStruct());

  // Return type: refptr_same
  return CefProcessMessageCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") bool CefProcessMessageCToCpp::IsValid() {
  shutdown_checker::AssertNotShutdown();

  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefProcessMessageCToCpp::IsReadOnly() {
  shutdown_checker::AssertNotShutdown();

  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefProcessMessage> CefProcessMessageCToCpp::Copy() {
  shutdown_checker::AssertNotShutdown();

  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, copy)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_process_message_t* _retval = _struct->copy(_struct);

  // Return type: refptr_same
  return CefProcessMessageCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefString CefProcessMessageCToCpp::GetName() {
  shutdown_checker::AssertNotShutdown();

  cef_process_message_t* _struct = GetStruct();
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

NO_SANITIZE("cfi-icall")
CefRefPtr<CefListValue> CefProcessMessageCToCpp::GetArgumentList() {
  shutdown_checker::AssertNotShutdown();

  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_argument_list)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_list_value_t* _retval = _struct->get_argument_list(_struct);

  // Return type: refptr_same
  return CefListValueCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefSharedMemoryRegion>
CefProcessMessageCToCpp::GetSharedMemoryRegion() {
  shutdown_checker::AssertNotShutdown();

  cef_process_message_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_shared_memory_region)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_shared_memory_region_t* _retval =
      _struct->get_shared_memory_region(_struct);

  // Return type: refptr_same
  return CefSharedMemoryRegionCToCpp::Wrap(_retval);
}

// CONSTRUCTOR - Do not edit by hand.

CefProcessMessageCToCpp::CefProcessMessageCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefProcessMessageCToCpp::~CefProcessMessageCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_process_message_t* CefCToCppRefCounted<
    CefProcessMessageCToCpp,
    CefProcessMessage,
    cef_process_message_t>::UnwrapDerived(CefWrapperType type,
                                          CefProcessMessage* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefProcessMessageCToCpp,
                                   CefProcessMessage,
                                   cef_process_message_t>::kWrapperType =
    WT_PROCESS_MESSAGE;
