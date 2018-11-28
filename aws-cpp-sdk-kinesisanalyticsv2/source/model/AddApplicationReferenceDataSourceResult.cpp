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

#include <aws/kinesisanalyticsv2/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddApplicationReferenceDataSourceResult::AddApplicationReferenceDataSourceResult() : 
    m_applicationVersionId(0)
{
}

AddApplicationReferenceDataSourceResult::AddApplicationReferenceDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationVersionId(0)
{
  *this = result;
}

AddApplicationReferenceDataSourceResult& AddApplicationReferenceDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationARN"))
  {
    m_applicationARN = jsonValue.GetString("ApplicationARN");

  }

  if(jsonValue.ValueExists("ApplicationVersionId"))
  {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");

  }

  if(jsonValue.ValueExists("ReferenceDataSourceDescriptions"))
  {
    Array<JsonView> referenceDataSourceDescriptionsJsonList = jsonValue.GetArray("ReferenceDataSourceDescriptions");
    for(unsigned referenceDataSourceDescriptionsIndex = 0; referenceDataSourceDescriptionsIndex < referenceDataSourceDescriptionsJsonList.GetLength(); ++referenceDataSourceDescriptionsIndex)
    {
      m_referenceDataSourceDescriptions.push_back(referenceDataSourceDescriptionsJsonList[referenceDataSourceDescriptionsIndex].AsObject());
    }
  }



  return *this;
}
