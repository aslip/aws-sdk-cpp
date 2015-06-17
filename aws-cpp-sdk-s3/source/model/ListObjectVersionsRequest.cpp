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
#include <aws/s3/model/ListObjectVersionsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListObjectVersionsRequest::ListObjectVersionsRequest() : 
    m_bucketHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_encodingTypeHasBeenSet(false),
    m_keyMarkerHasBeenSet(false),
    m_maxKeys(0),
    m_maxKeysHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_versionIdMarkerHasBeenSet(false)
{
}

Aws::String ListObjectVersionsRequest::SerializePayload() const
{
  return "";
}

void ListObjectVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_delimiterHasBeenSet)
    {
     ss << m_delimiter;
     uri.AddQueryStringParameter("delimiter", ss.str());
     ss.str("");
    }

    if(m_encodingTypeHasBeenSet)
    {
     ss << EncodingTypeMapper::GetNameForEncodingType(m_encodingType);
     uri.AddQueryStringParameter("encoding-type", ss.str());
     ss.str("");
    }

    if(m_keyMarkerHasBeenSet)
    {
     ss << m_keyMarker;
     uri.AddQueryStringParameter("key-marker", ss.str());
     ss.str("");
    }

    if(m_maxKeysHasBeenSet)
    {
     ss << m_maxKeys;
     uri.AddQueryStringParameter("max-keys", ss.str());
     ss.str("");
    }

    if(m_prefixHasBeenSet)
    {
     ss << m_prefix;
     uri.AddQueryStringParameter("prefix", ss.str());
     ss.str("");
    }

    if(m_versionIdMarkerHasBeenSet)
    {
     ss << m_versionIdMarker;
     uri.AddQueryStringParameter("version-id-marker", ss.str());
     ss.str("");
    }

}

