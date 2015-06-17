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
#include <aws/elasticmapreduce/model/JobFlowExecutionStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

JobFlowExecutionStatusDetail::JobFlowExecutionStatusDetail() : 
    m_stateHasBeenSet(false),
    m_creationDateTime(0.0),
    m_creationDateTimeHasBeenSet(false),
    m_startDateTime(0.0),
    m_startDateTimeHasBeenSet(false),
    m_readyDateTime(0.0),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTime(0.0),
    m_endDateTimeHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false)
{
}

JobFlowExecutionStatusDetail::JobFlowExecutionStatusDetail(const JsonValue& jsonValue) : 
    m_stateHasBeenSet(false),
    m_creationDateTime(0.0),
    m_creationDateTimeHasBeenSet(false),
    m_startDateTime(0.0),
    m_startDateTimeHasBeenSet(false),
    m_readyDateTime(0.0),
    m_readyDateTimeHasBeenSet(false),
    m_endDateTime(0.0),
    m_endDateTimeHasBeenSet(false),
    m_lastStateChangeReasonHasBeenSet(false)
{
  *this = jsonValue;
}

JobFlowExecutionStatusDetail& JobFlowExecutionStatusDetail::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = JobFlowExecutionStateMapper::GetJobFlowExecutionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("CreationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetDouble("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadyDateTime"))
  {
    m_readyDateTime = jsonValue.GetDouble("ReadyDateTime");

    m_readyDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStateChangeReason"))
  {
    m_lastStateChangeReason = jsonValue.GetString("LastStateChangeReason");

    m_lastStateChangeReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue JobFlowExecutionStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", JobFlowExecutionStateMapper::GetNameForJobFlowExecutionState(m_state));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("CreationDateTime", m_creationDateTime);

  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("StartDateTime", m_startDateTime);

  }

  if(m_readyDateTimeHasBeenSet)
  {
   payload.WithDouble("ReadyDateTime", m_readyDateTime);

  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime);

  }

  if(m_lastStateChangeReasonHasBeenSet)
  {
   payload.WithString("LastStateChangeReason", m_lastStateChangeReason);

  }

  return std::move(payload);
}