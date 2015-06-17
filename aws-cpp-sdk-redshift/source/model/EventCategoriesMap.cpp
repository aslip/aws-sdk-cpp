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
#include <aws/redshift/model/EventCategoriesMap.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

EventCategoriesMap::EventCategoriesMap() : 
    m_sourceTypeHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

EventCategoriesMap::EventCategoriesMap(const XmlNode& xmlNode) : 
    m_sourceTypeHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = xmlNode;
}

EventCategoriesMap& EventCategoriesMap::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = StringUtils::Trim(sourceTypeNode.GetText().c_str());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode eventInfoMapNodeParent = resultNode.FirstChild("EventInfoMap");
    XmlNode eventInfoMapNode = eventInfoMapNodeParent.FirstChild("member");
    if(!eventInfoMapNode.IsNull())
    {
      while(!eventInfoMapNode.IsNull())
      {
        m_events.push_back(eventInfoMapNode);
        eventInfoMapNode = eventInfoMapNode.NextNode("member");
      }

      m_eventsHasBeenSet = true;
    }
  }

  return *this;
}

void EventCategoriesMap::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_eventsHasBeenSet)
  {
      for(auto& item : m_events)
      {
        Aws::StringStream eventsSs;
        eventsSs << location << index << locationValue << ".EventInfoMap";
        item.OutputToStream(oStream, eventsSs.str().c_str());
      }
  }
}

void EventCategoriesMap::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }
  if(m_eventsHasBeenSet)
  {
      for(auto& item : m_events)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".EventInfoMap";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
