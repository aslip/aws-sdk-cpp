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

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/IndexStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>A summary of information about an index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/IndexConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API IndexConfigurationSummary
  {
  public:
    IndexConfigurationSummary();
    IndexConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    IndexConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the index.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the index.</p>
     */
    inline IndexConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline IndexConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the index.</p>
     */
    inline IndexConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline IndexConfigurationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline IndexConfigurationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the index. Use this to identify the index when you
     * are using operations such as <code>Query</code>, <code>DescribeIndex</code>,
     * <code>UpdateIndex</code>, and <code>DeleteIndex</code>.</p>
     */
    inline IndexConfigurationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline IndexConfigurationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the index was created.</p>
     */
    inline IndexConfigurationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp when the index was last updated by the
     * <code>UpdateIndex</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The Unix timestamp when the index was last updated by the
     * <code>UpdateIndex</code> operation.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp when the index was last updated by the
     * <code>UpdateIndex</code> operation.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The Unix timestamp when the index was last updated by the
     * <code>UpdateIndex</code> operation.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The Unix timestamp when the index was last updated by the
     * <code>UpdateIndex</code> operation.</p>
     */
    inline IndexConfigurationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp when the index was last updated by the
     * <code>UpdateIndex</code> operation.</p>
     */
    inline IndexConfigurationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline const IndexStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline void SetStatus(const IndexStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline void SetStatus(IndexStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline IndexConfigurationSummary& WithStatus(const IndexStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the index. When the status is <code>ACTIVE</code>, the
     * index is ready to search.</p>
     */
    inline IndexConfigurationSummary& WithStatus(IndexStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;

    IndexStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
