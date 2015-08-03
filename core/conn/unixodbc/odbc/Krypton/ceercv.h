// @@@ START COPYRIGHT @@@
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// @@@ END COPYRIGHT @@@
#ifndef CEERCV_H_
#define CEERCV_H_
/*
 * Translation unit: CEERCV
 * Generated by CNPGEN(TANTAU CNPGEN TANTAU_AG_PC8 20001120.103031) on Fri Jun 18 12:53:25 2004
 * C++ constructs used
 * Header file for use with the CEE
 * Client functionality included
 * Server functionality included
 */
#include <stdarg.h>
#include <cee.h>
#if CEE_H_VERSION != 19991123
#error Version mismatch CEE_H_VERSION != 19991123
#endif
#include <idltype.h>
#if IDL_TYPE_H_VERSION != 19971225
#error Version mismatch IDL_TYPE_H_VERSION != 19971225
#endif

/**********************
 * Interface 'CEERCV' *
 **********************/
typedef IDL_Object CEERCV;
/* Exception CEERCV_decline has no members */
typedef IDL_short CEERCV_ReceiveInfoDef[17];
#define CEERCV_ReceiveInfoDef_cin_ ((char *) "a1+17+I")
#define CEERCV_ReceiveInfoDef_csz_ ((IDL_unsigned_long) 7)

/************************************
 * Operation 'CEERCV_SystemMessage' *
 ************************************/
struct CEERCV_SystemMessage_request_seq_ {
  IDL_unsigned_long _length;
  char pad_to_offset_8_[4];
  IDL_short *_buffer;
  IDL_PTR_PAD(_buffer, 1)
};
struct CEERCV_SystemMessage_reply_seq_ {
  IDL_unsigned_long _length;
  char pad_to_offset_8_[4];
  IDL_short *_buffer;
  IDL_PTR_PAD(_buffer, 1)
};

/*
 * Exception number constants for
 * operation 'CEERCV_SystemMessage'
 */
#define CEERCV_SystemMessage_decline_exn_ 1
/*
 * Exception union for
 * operation 'CEERCV_SystemMessage'
 */
struct CEERCV_SystemMessage_exc_ {
  IDL_long exception_nr;
  IDL_long exception_detail;
};
/*
 * Local index for operation 'CEERCV_SystemMessage'
 */
#define CEERCV_SystemMessage_ldx_ ((IDL_unsigned_long) 1)
/*
 * Operation synopsis for operation 'CEERCV_SystemMessage'
 */
#define CEERCV_SystemMessage_osy_ ((IDL_long) 631334868)
/*
 * Call Completion function pointer type for
 * operation 'CEERCV_SystemMessage'
 */
typedef void (*CEERCV_SystemMessage_cct_) (
    /* In    */ CEE_tag_def cmptag_
  , /* In    */ const CEERCV_SystemMessage_exc_ *exception_
  , /* In    */ IDL_short error
  , /* In    */ const CEERCV_SystemMessage_reply_seq_ *reply
  );
/*
 * Call Completion function prototype for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" void
CEERCV_SystemMessage_ccf_(
    /* In    */ CEE_tag_def cmptag_
  , /* In    */ const CEERCV_SystemMessage_exc_ *exception_
  , /* In    */ IDL_short error
  , /* In    */ const CEERCV_SystemMessage_reply_seq_ *reply
  );
/*
 * Asynchronous object call for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" CEE_status
CEERCV_SystemMessage_pst_(
    /* In    */ const CEE_handle_def *ph_
  , /* In    */ CEE_tag_def tag_
  , /* In    */ CEERCV_SystemMessage_cct_ rtn_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ const CEERCV_SystemMessage_request_seq_ *request
  );
/*
 * Synchronous object call for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" void
CEERCV_SystemMessage(
    /* In    */ const CEE_handle_def *ph_
  , /* Out   */ CEERCV_SystemMessage_exc_ *exception_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ const CEERCV_SystemMessage_request_seq_ *request
  , /* Out   */ IDL_short *error
  , /* Out   */ CEERCV_SystemMessage_reply_seq_ *reply
  );
/*
 * Asynchronous method function pointer type for
 * operation 'CEERCV_SystemMessage'
 */
typedef void (*CEERCV_SystemMessage_amt_) (
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ const CEERCV_SystemMessage_request_seq_ *request
  );
/*
 * Asynchronous method function prototype for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" void
CEERCV_SystemMessage_ame_(
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ const CEERCV_SystemMessage_request_seq_ *request
  );
/*
 * Set Asynchronous Method for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" CEE_status
CEERCV_SystemMessage_ams_(
    /* In    */ const CEE_handle_def *impl_
  , /* In    */ CEERCV_SystemMessage_amt_ method_
  );
/*
 * Asynchronous response for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" CEE_status
CEERCV_SystemMessage_res_(
    /* In    */ const CEE_handle_def *call_id_
  , /* In    */ const CEERCV_SystemMessage_exc_ *exception_
  , /* In    */ IDL_short error
  , /* In    */ const CEERCV_SystemMessage_reply_seq_ *reply
  );
/*
 * Synchronous method function pointer type for
 * operation'CEERCV_SystemMessage'
 */
typedef void (*CEERCV_SystemMessage_smt_) (
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* Out   */ CEERCV_SystemMessage_exc_ *exception_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ const CEERCV_SystemMessage_request_seq_ *request
  , /* Out   */ IDL_short *error
  , /* Out   */ CEERCV_SystemMessage_reply_seq_ *reply
  );
/*
 * Synchronous method function prototype for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" void
CEERCV_SystemMessage_sme_(
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* Out   */ CEERCV_SystemMessage_exc_ *exception_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ const CEERCV_SystemMessage_request_seq_ *request
  , /* Out   */ IDL_short *error
  , /* Out   */ CEERCV_SystemMessage_reply_seq_ *reply
  );
/*
 * Set Synchronous method for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" CEE_status
CEERCV_SystemMessage_sms_(
    /* In    */ const CEE_handle_def *impl_
  , /* In    */ CEERCV_SystemMessage_smt_ method_
  );
/*
 * Set Synchronous multithreaded method for
 * operation 'CEERCV_SystemMessage'
 */
extern "C" CEE_status
CEERCV_SystemMessage_msms_(
    /* In    */ const CEE_handle_def *impl_
  , /* In    */ CEERCV_SystemMessage_smt_ method_
  );

/********************************
 * Operation 'CEERCV_IOMessage' *
 ********************************/
struct CEERCV_IOMessage_request_seq_ {
  IDL_unsigned_long _length;
  char pad_to_offset_8_[4];
  IDL_octet *_buffer;
  IDL_PTR_PAD(_buffer, 1)
};
struct CEERCV_IOMessage_reply_seq_ {
  IDL_unsigned_long _length;
  char pad_to_offset_8_[4];
  IDL_octet *_buffer;
  IDL_PTR_PAD(_buffer, 1)
};

/*
 * Exception number constants for
 * operation 'CEERCV_IOMessage'
 */
#define CEERCV_IOMessage_decline_exn_ 1
/*
 * Exception union for
 * operation 'CEERCV_IOMessage'
 */
struct CEERCV_IOMessage_exc_ {
  IDL_long exception_nr;
  IDL_long exception_detail;
};
/*
 * Local index for operation 'CEERCV_IOMessage'
 */
#define CEERCV_IOMessage_ldx_ ((IDL_unsigned_long) 2)
/*
 * Operation synopsis for operation 'CEERCV_IOMessage'
 */
#define CEERCV_IOMessage_osy_ ((IDL_long) -1142393801)
/*
 * Call Completion function pointer type for
 * operation 'CEERCV_IOMessage'
 */
typedef void (*CEERCV_IOMessage_cct_) (
    /* In    */ CEE_tag_def cmptag_
  , /* In    */ const CEERCV_IOMessage_exc_ *exception_
  , /* In    */ IDL_short error
  , /* In    */ const CEERCV_IOMessage_reply_seq_ *reply
  );
/*
 * Call Completion function prototype for
 * operation 'CEERCV_IOMessage'
 */
extern "C" void
CEERCV_IOMessage_ccf_(
    /* In    */ CEE_tag_def cmptag_
  , /* In    */ const CEERCV_IOMessage_exc_ *exception_
  , /* In    */ IDL_short error
  , /* In    */ const CEERCV_IOMessage_reply_seq_ *reply
  );
/*
 * Asynchronous object call for
 * operation 'CEERCV_IOMessage'
 */
extern "C" CEE_status
CEERCV_IOMessage_pst_(
    /* In    */ const CEE_handle_def *ph_
  , /* In    */ CEE_tag_def tag_
  , /* In    */ CEERCV_IOMessage_cct_ rtn_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ IDL_short dialogInfo
  , /* In    */ const CEERCV_IOMessage_request_seq_ *request
  );
/*
 * Synchronous object call for
 * operation 'CEERCV_IOMessage'
 */
extern "C" void
CEERCV_IOMessage(
    /* In    */ const CEE_handle_def *ph_
  , /* Out   */ CEERCV_IOMessage_exc_ *exception_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ IDL_short dialogInfo
  , /* In    */ const CEERCV_IOMessage_request_seq_ *request
  , /* Out   */ IDL_short *error
  , /* Out   */ CEERCV_IOMessage_reply_seq_ *reply
  );
/*
 * Asynchronous method function pointer type for
 * operation 'CEERCV_IOMessage'
 */
typedef void (*CEERCV_IOMessage_amt_) (
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ IDL_short dialogInfo
  , /* In    */ const CEERCV_IOMessage_request_seq_ *request
  );
/*
 * Asynchronous method function prototype for
 * operation 'CEERCV_IOMessage'
 */
extern "C" void
CEERCV_IOMessage_ame_(
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ IDL_short dialogInfo
  , /* In    */ const CEERCV_IOMessage_request_seq_ *request
  );
/*
 * Set Asynchronous Method for
 * operation 'CEERCV_IOMessage'
 */
extern "C" CEE_status
CEERCV_IOMessage_ams_(
    /* In    */ const CEE_handle_def *impl_
  , /* In    */ CEERCV_IOMessage_amt_ method_
  );
/*
 * Asynchronous response for
 * operation 'CEERCV_IOMessage'
 */
extern "C" CEE_status
CEERCV_IOMessage_res_(
    /* In    */ const CEE_handle_def *call_id_
  , /* In    */ const CEERCV_IOMessage_exc_ *exception_
  , /* In    */ IDL_short error
  , /* In    */ const CEERCV_IOMessage_reply_seq_ *reply
  );
/*
 * Synchronous method function pointer type for
 * operation'CEERCV_IOMessage'
 */
typedef void (*CEERCV_IOMessage_smt_) (
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* Out   */ CEERCV_IOMessage_exc_ *exception_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ IDL_short dialogInfo
  , /* In    */ const CEERCV_IOMessage_request_seq_ *request
  , /* Out   */ IDL_short *error
  , /* Out   */ CEERCV_IOMessage_reply_seq_ *reply
  );
/*
 * Synchronous method function prototype for
 * operation 'CEERCV_IOMessage'
 */
extern "C" void
CEERCV_IOMessage_sme_(
    /* In    */ CEE_tag_def objtag_
  , /* In    */ const CEE_handle_def *call_id_
  , /* Out   */ CEERCV_IOMessage_exc_ *exception_
  , /* In    */ const IDL_short *receiveInfo
  , /* In    */ IDL_short dialogInfo
  , /* In    */ const CEERCV_IOMessage_request_seq_ *request
  , /* Out   */ IDL_short *error
  , /* Out   */ CEERCV_IOMessage_reply_seq_ *reply
  );
/*
 * Set Synchronous method for
 * operation 'CEERCV_IOMessage'
 */
extern "C" CEE_status
CEERCV_IOMessage_sms_(
    /* In    */ const CEE_handle_def *impl_
  , /* In    */ CEERCV_IOMessage_smt_ method_
  );
/*
 * Set Synchronous multithreaded method for
 * operation 'CEERCV_IOMessage'
 */
extern "C" CEE_status
CEERCV_IOMessage_msms_(
    /* In    */ const CEE_handle_def *impl_
  , /* In    */ CEERCV_IOMessage_smt_ method_
  );

/*
 * CIN description of interface 'CEERCV'
 */
static char CEERCV_ici_[]  = {
    '!','1','4','+','I','D','L',':','C','E','E','R','C','V',':','1',
    '.','0','2','+','6','3','1','3','3','4','8','6','8','+','1','3',
    '+','S','y','s','t','e','m','M','e','s','s','a','g','e','(','4',
    '+','1','1','+','r','e','c','e','i','v','e','I','n','f','o','>',
    'a','1','+','1','7','+','I','7','+','r','e','q','u','e','s','t',
    '>','c','0','+','I','5','+','e','r','r','o','r','<','I','5','+',
    'r','e','p','l','y','<','c','0','+','I','1','+','2','2','+','I',
    'D','L',':','C','E','E','R','C','V','/','d','e','c','l','i','n',
    'e',':','1','.','0','g','0','+','0','+','1','1','4','2','3','9',
    '3','8','0','1','-','9','+','I','O','M','e','s','s','a','g','e',
    '(','5','+','1','1','+','r','e','c','e','i','v','e','I','n','f',
    'o','>','a','1','+','1','7','+','I','1','0','+','d','i','a','l',
    'o','g','I','n','f','o','>','I','7','+','r','e','q','u','e','s',
    't','>','c','0','+','H','5','+','e','r','r','o','r','<','I','5',
    '+','r','e','p','l','y','<','c','0','+','H','1','+','2','2','+',
    'I','D','L',':','C','E','E','R','C','V','/','d','e','c','l','i',
    'n','e',':','1','.','0','g','0','+','0','+', 0};
#define CEERCV_ics_ ((IDL_unsigned_long) 267)

/*
 * Interface creation function for 'CEERCV'
 */
extern "C" CEE_status
CEERCV_ifc_(
  /* Out */ CEE_handle_def *interface_handle);

/*
 * Synchronous implementation creation function for interface 'CEERCV'
 * Should only be be called via the CEERCV_SIM_ macro.
 */
extern "C" CEE_status
CEERCV_sim_(
  /* Out */ CEE_handle_def *implementation_handle,
  /* In  */ ...);

/*
 * Synchronous implementation creation macro for interface 'CEERCV'
 */
#define CEERCV_SIM_(impl_) CEERCV_sim_((impl_) \
    , CEERCV_SystemMessage_sme_ \
    , CEERCV_IOMessage_sme_ )

/*
 * Asynchronous implementation creation function for interface 'CEERCV'
 * Should only be be called via the CEERCV_AIM_ macro.
 */
extern "C" CEE_status
CEERCV_aim_(
  /* Out */ CEE_handle_def *implementation_handle,
  /* In  */ ...);

/*
 * Asynchronous implementation creation macro for interface 'CEERCV'
 */
#define CEERCV_AIM_(impl_) CEERCV_aim_((impl_) \
    , CEERCV_SystemMessage_ame_ \
    , CEERCV_IOMessage_ame_ )

/*
 * Synchronous Multi Threaded implementation creation function for interface 'CEERCV'
 * Should only be be called via the CEERCV_MSIM_ macro.
 */
extern "C" CEE_status
CEERCV_msim_(
  /* Out */ CEE_handle_def *implementation_handle,
  /* In  */ ...);

/*
 * Synchronous Multi Threaded implementation creation macro for interface 'CEERCV'
 */
#define CEERCV_MSIM_(impl_) CEERCV_msim_((impl_) \
    , CEERCV_SystemMessage_sme_ \
    , CEERCV_IOMessage_sme_ )

/*
 * Configured Object initialization function
 * for interface 'CEERCV'
 */
extern "C" void
CEERCV_coi_(
  /* In  */ const CEE_handle_def  *object_handle,
  /* In  */ const char            *param,
  /* In  */ long                  param_len,
  /* Out */ CEE_status            *sts,
  /* Out */ CEE_tag_def           *obj_tag,
  /* Out */ CEE_handle_def        *implementation_handle);

/**************************
 * End interface 'CEERCV' *
 **************************/
/*
 * End translation unit: CEERCV
 */
#endif /* CEERCV_H_ */
