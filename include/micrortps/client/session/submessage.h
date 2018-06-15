// Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _MICRORTPS_CLIENT_SESSION_SUBMESSAGE_H_
#define _MICRORTPS_CLIENT_SESSION_SUBMESSAGE_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <micrortps/client/serialization/xrce_subheader.h>
#include <stdint.h>
#include <stdbool.h>

#define SUBHEADER_SIZE 4

typedef enum SubmessageId
{
    SUBMESSAGE_ID_CREATE_CLIENT = 0,
    SUBMESSAGE_ID_CREATE = 1,
    SUBMESSAGE_ID_GET_INFO = 2,
    SUBMESSAGE_ID_DELETE = 3,
    SUBMESSAGE_ID_STATUS = 4,
    SUBMESSAGE_ID_INFO = 5,
    SUBMESSAGE_ID_WRITE_DATA = 6,
    SUBMESSAGE_ID_READ_DATA = 7,
    SUBMESSAGE_ID_DATA = 8,
    SUBMESSAGE_ID_ACKNACK = 9,
    SUBMESSAGE_ID_HEARTBEAT = 10,
    SUBMESSAGE_ID_FRAGMENT = 12,
    SUBMESSAGE_ID_FRAGMENT_END = 13

} SubmessageId;

typedef enum SubmessageFlags
{
    FLAG_REUSE = 0x01 << 1,
    FLAG_REPLACE = 0x01 << 2,
    FLAG_LAST_FRAGMENT = 0x01 << 1,
    FLAG_FORMAT_DATA = 0x00,
    FLAG_FORMAT_SAMPLE = 0x02,
    FLAG_FORMAT_DATA_SEQ = 0x08,
    FLAG_FORMAT_SAMPLE_SEQ = 0x0A,
    FLAG_FORMAT_PACKED_SAMPLES = 0x0E

} SubmessageFlags;

void write_submessage_header(MicroBuffer* mb, SubmessageId submessage_id, uint16_t length, SubmessageFlags flags);
bool read_submessage_header(MicroBuffer* mb, SubmessageId* submessage_id, uint16_t* length, SubmessageFlags* flags);

#ifdef __cplusplus
}
#endif

#endif // _MICRORTPS_CLIENT_SUBMESSAGE_H_