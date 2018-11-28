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

#include <aws/ecs/model/Scale.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Scale::Scale() : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_unit(ScaleUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Scale::Scale(JsonView jsonValue) : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_unit(ScaleUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

Scale& Scale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = ScaleUnitMapper::GetScaleUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue Scale::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", ScaleUnitMapper::GetNameForScaleUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
