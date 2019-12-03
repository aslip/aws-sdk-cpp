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

#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessPointResult::GetAccessPointResult() : 
    m_networkOrigin(NetworkOrigin::NOT_SET)
{
}

GetAccessPointResult::GetAccessPointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_networkOrigin(NetworkOrigin::NOT_SET)
{
  *this = result;
}

GetAccessPointResult& GetAccessPointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
    }
    XmlNode networkOriginNode = resultNode.FirstChild("NetworkOrigin");
    if(!networkOriginNode.IsNull())
    {
      m_networkOrigin = NetworkOriginMapper::GetNetworkOriginForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkOriginNode.GetText()).c_str()).c_str());
    }
    XmlNode vpcConfigurationNode = resultNode.FirstChild("VpcConfiguration");
    if(!vpcConfigurationNode.IsNull())
    {
      m_vpcConfiguration = vpcConfigurationNode;
    }
    XmlNode publicAccessBlockConfigurationNode = resultNode.FirstChild("PublicAccessBlockConfiguration");
    if(!publicAccessBlockConfigurationNode.IsNull())
    {
      m_publicAccessBlockConfiguration = publicAccessBlockConfigurationNode;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), DateFormat::ISO_8601);
    }
  }

  return *this;
}
