﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/medialive/model/ScheduleActionStartSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ScheduleActionStartSettings::ScheduleActionStartSettings() : 
    m_fixedModeScheduleActionStartSettingsHasBeenSet(false)
{
}

ScheduleActionStartSettings::ScheduleActionStartSettings(JsonView jsonValue) : 
    m_fixedModeScheduleActionStartSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleActionStartSettings& ScheduleActionStartSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fixedModeScheduleActionStartSettings"))
  {
    m_fixedModeScheduleActionStartSettings = jsonValue.GetObject("fixedModeScheduleActionStartSettings");

    m_fixedModeScheduleActionStartSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleActionStartSettings::Jsonize() const
{
  JsonValue payload;

  if(m_fixedModeScheduleActionStartSettingsHasBeenSet)
  {
   payload.WithObject("fixedModeScheduleActionStartSettings", m_fixedModeScheduleActionStartSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
