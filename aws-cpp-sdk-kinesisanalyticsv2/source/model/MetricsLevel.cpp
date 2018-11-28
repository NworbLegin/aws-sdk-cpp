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

#include <aws/kinesisanalyticsv2/model/MetricsLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisAnalyticsV2
  {
    namespace Model
    {
      namespace MetricsLevelMapper
      {

        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");
        static const int TASK_HASH = HashingUtils::HashString("TASK");
        static const int OPERATOR_HASH = HashingUtils::HashString("OPERATOR");
        static const int PARALLELISM_HASH = HashingUtils::HashString("PARALLELISM");


        MetricsLevel GetMetricsLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_HASH)
          {
            return MetricsLevel::APPLICATION;
          }
          else if (hashCode == TASK_HASH)
          {
            return MetricsLevel::TASK;
          }
          else if (hashCode == OPERATOR_HASH)
          {
            return MetricsLevel::OPERATOR;
          }
          else if (hashCode == PARALLELISM_HASH)
          {
            return MetricsLevel::PARALLELISM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricsLevel>(hashCode);
          }

          return MetricsLevel::NOT_SET;
        }

        Aws::String GetNameForMetricsLevel(MetricsLevel enumValue)
        {
          switch(enumValue)
          {
          case MetricsLevel::APPLICATION:
            return "APPLICATION";
          case MetricsLevel::TASK:
            return "TASK";
          case MetricsLevel::OPERATOR:
            return "OPERATOR";
          case MetricsLevel::PARALLELISM:
            return "PARALLELISM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MetricsLevelMapper
    } // namespace Model
  } // namespace KinesisAnalyticsV2
} // namespace Aws
