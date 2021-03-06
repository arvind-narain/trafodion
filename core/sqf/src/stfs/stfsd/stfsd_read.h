#ifndef STFSD_READ_H
#define STFSD_READ_H
///////////////////////////////////////////////////////////////////////////////
// 
/// \file    stfsd_read.cpp
/// \brief  
///   
/// This file contains the declaration of the STFSd_read() 
/// function.
//                                                                                 
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2008-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
///////////////////////////////////////////////////////////////////////////////

namespace STFS{

ssize_t
STFSd_read(STFS_OpenIdentifier *pp_OpenId,
           void                *pp_Buf,
           size_t               pv_Count);

} //namespace STFS
#endif // STFSD_READ_H
