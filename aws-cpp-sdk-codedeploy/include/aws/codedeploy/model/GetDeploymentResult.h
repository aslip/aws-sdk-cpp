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
#include <aws/codedeploy/model/DeploymentInfo.h>

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
  class AWS_CODEDEPLOY_API GetDeploymentResult
  {
  public:
    GetDeploymentResult();
    GetDeploymentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const DeploymentInfo& GetDeploymentInfo() const{ return m_deploymentInfo; }
    
    inline void SetDeploymentInfo(const DeploymentInfo& value) { m_deploymentInfo = value; }

    
    inline GetDeploymentResult&  WithDeploymentInfo(const DeploymentInfo& value) { SetDeploymentInfo(value); return *this;}

  private:
    DeploymentInfo m_deploymentInfo;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
