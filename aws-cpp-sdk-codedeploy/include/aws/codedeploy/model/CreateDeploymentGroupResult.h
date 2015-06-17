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
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API CreateDeploymentGroupResult
  {
  public:
    CreateDeploymentGroupResult();
    CreateDeploymentGroupResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetDeploymentGroupId() const{ return m_deploymentGroupId; }
    
    inline void SetDeploymentGroupId(const Aws::String& value) { m_deploymentGroupId = value; }

    
    inline void SetDeploymentGroupId(const char* value) { m_deploymentGroupId.assign(value); }

    
    inline CreateDeploymentGroupResult&  WithDeploymentGroupId(const Aws::String& value) { SetDeploymentGroupId(value); return *this;}

    
    inline CreateDeploymentGroupResult& WithDeploymentGroupId(const char* value) { SetDeploymentGroupId(value); return *this;}

  private:
    Aws::String m_deploymentGroupId;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
