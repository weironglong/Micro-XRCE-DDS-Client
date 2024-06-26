// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file student_info.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _student_info_H_
#define _student_info_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdbool.h>

typedef struct university_StudentInfo
{
    char name[255];

    char pinyin[255];

    int32_t student_id;
    int32_t birthdate;
} university_StudentInfo;

struct ucdrBuffer;

bool university_StudentInfo_serialize_topic(struct ucdrBuffer* writer, const university_StudentInfo* topic);
bool university_StudentInfo_deserialize_topic(struct ucdrBuffer* reader, university_StudentInfo* topic);
uint32_t university_StudentInfo_size_of_topic(const university_StudentInfo* topic, uint32_t size);


#ifdef __cplusplus
}
#endif

#endif // _student_info_H_