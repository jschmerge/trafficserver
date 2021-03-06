/** @file

  A brief file description

  @section license License

  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 */

/*****************************************************************************
 *
 * I_SplitDNS.h - Interface to DNS server selection
 *
 *
 ****************************************************************************/

#ifndef _I_SPLIT_DNS_H_
#define _I_SPLIT_DNS_H_

#include "I_SplitDNSProcessor.h"

#define SPLITDNS_MODULE_MAJOR_VERSION 1
#define SPLITDNS_MODULE_MINOR_VERSION 0
#define SPLITDNS_MODULE_VERSION \
  makeModuleVersion(SPLITDNS_MODULE_MAJOR_VERSION, SPLITDNS_MODULE_MINOR_VERSION, PUBLIC_MODULE_HEADER)

#endif //_I_SPLIT_DNS_H_
