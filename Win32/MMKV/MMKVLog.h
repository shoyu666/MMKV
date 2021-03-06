/*
 * Tencent is pleased to support the open source community by making
 * MMKV available.
 *
 * Copyright (C) 2018 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MMKV_MMKVLOG_H
#define MMKV_MMKVLOG_H

#include <cstdio>
#include <cstring>

// enable logging
#define ENABLE_MMKV_LOG

#ifdef ENABLE_MMKV_LOG

#define APPNAME "MMKV"

#define __NEW_LINE "\n"

#define MMKVError(format, ...) ::printf(format __NEW_LINE, ##__VA_ARGS__)
#define MMKVWarning(format, ...) ::printf(format __NEW_LINE, ##__VA_ARGS__)
#define MMKVInfo(format, ...) ::printf(format __NEW_LINE, ##__VA_ARGS__)

#ifndef NDEBUG
#define MMKVDebug(format, ...) ::printf(format __NEW_LINE, ##__VA_ARGS__)
#else
#define MMKVDebug(format, ...)                                                                     \
    {}
#endif

#else

#define MMKVError(format, ...)                                                                     \
    {}
#define MMKVWarning(format, ...)                                                                   \
    {}
#define MMKVInfo(format, ...)                                                                      \
    {}
#define MMKVDebug(format, ...)                                                                     \
    {}

#endif

#endif //MMKV_MMKVLOG_H
