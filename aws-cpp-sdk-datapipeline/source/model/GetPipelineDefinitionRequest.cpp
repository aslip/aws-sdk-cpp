/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/model/GetPipelineDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPipelineDefinitionRequest::GetPipelineDefinitionRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

Aws::String GetPipelineDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetPipelineDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.GetPipelineDefinition"));
  return std::move(headers);

}



