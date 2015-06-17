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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/LifecycleExpiration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ExpirationStatus.h>
#include <aws/s3/model/Transition.h>
#include <aws/s3/model/NoncurrentVersionTransition.h>
#include <aws/s3/model/NoncurrentVersionExpiration.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_S3_API Rule
  {
  public:
    Rule();
    Rule(const Aws::Utils::Xml::XmlNode& xmlNode);
    Rule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    
    inline const LifecycleExpiration& GetExpiration() const{ return m_expiration; }
    
    inline void SetExpiration(const LifecycleExpiration& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    
    inline Rule&  WithExpiration(const LifecycleExpiration& value) { SetExpiration(value); return *this;}

    /*
     Unique identifier for the rule. The value cannot be longer than 255 characters.
    */
    inline const Aws::String& GetID() const{ return m_iD; }
    /*
     Unique identifier for the rule. The value cannot be longer than 255 characters.
    */
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }

    /*
     Unique identifier for the rule. The value cannot be longer than 255 characters.
    */
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }

    /*
     Unique identifier for the rule. The value cannot be longer than 255 characters.
    */
    inline Rule&  WithID(const Aws::String& value) { SetID(value); return *this;}

    /*
     Unique identifier for the rule. The value cannot be longer than 255 characters.
    */
    inline Rule& WithID(const char* value) { SetID(value); return *this;}

    /*
     Prefix identifying one or more objects to which the rule applies.
    */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    /*
     Prefix identifying one or more objects to which the rule applies.
    */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /*
     Prefix identifying one or more objects to which the rule applies.
    */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /*
     Prefix identifying one or more objects to which the rule applies.
    */
    inline Rule&  WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /*
     Prefix identifying one or more objects to which the rule applies.
    */
    inline Rule& WithPrefix(const char* value) { SetPrefix(value); return *this;}

    /*
     If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is not currently being applied.
    */
    inline const ExpirationStatus& GetStatus() const{ return m_status; }
    /*
     If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is not currently being applied.
    */
    inline void SetStatus(const ExpirationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     If 'Enabled', the rule is currently being applied. If 'Disabled', the rule is not currently being applied.
    */
    inline Rule&  WithStatus(const ExpirationStatus& value) { SetStatus(value); return *this;}

    
    inline const Transition& GetTransition() const{ return m_transition; }
    
    inline void SetTransition(const Transition& value) { m_transitionHasBeenSet = true; m_transition = value; }

    
    inline Rule&  WithTransition(const Transition& value) { SetTransition(value); return *this;}

    
    inline const NoncurrentVersionTransition& GetNoncurrentVersionTransition() const{ return m_noncurrentVersionTransition; }
    
    inline void SetNoncurrentVersionTransition(const NoncurrentVersionTransition& value) { m_noncurrentVersionTransitionHasBeenSet = true; m_noncurrentVersionTransition = value; }

    
    inline Rule&  WithNoncurrentVersionTransition(const NoncurrentVersionTransition& value) { SetNoncurrentVersionTransition(value); return *this;}

    
    inline const NoncurrentVersionExpiration& GetNoncurrentVersionExpiration() const{ return m_noncurrentVersionExpiration; }
    
    inline void SetNoncurrentVersionExpiration(const NoncurrentVersionExpiration& value) { m_noncurrentVersionExpirationHasBeenSet = true; m_noncurrentVersionExpiration = value; }

    
    inline Rule&  WithNoncurrentVersionExpiration(const NoncurrentVersionExpiration& value) { SetNoncurrentVersionExpiration(value); return *this;}

  private:
    LifecycleExpiration m_expiration;
    bool m_expirationHasBeenSet;
    Aws::String m_iD;
    bool m_iDHasBeenSet;
    Aws::String m_prefix;
    bool m_prefixHasBeenSet;
    ExpirationStatus m_status;
    bool m_statusHasBeenSet;
    Transition m_transition;
    bool m_transitionHasBeenSet;
    NoncurrentVersionTransition m_noncurrentVersionTransition;
    bool m_noncurrentVersionTransitionHasBeenSet;
    NoncurrentVersionExpiration m_noncurrentVersionExpiration;
    bool m_noncurrentVersionExpirationHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
