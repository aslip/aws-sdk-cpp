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
   * <p>Provides information that you can use to highlight a search result so that
   * your users can quickly identify terms in the response.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Highlight">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API Highlight
  {
  public:
    Highlight();
    Highlight(Aws::Utils::Json::JsonView jsonValue);
    Highlight& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline int GetBeginOffset() const{ return m_beginOffset; }

    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline bool BeginOffsetHasBeenSet() const { return m_beginOffsetHasBeenSet; }

    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline void SetBeginOffset(int value) { m_beginOffsetHasBeenSet = true; m_beginOffset = value; }

    /**
     * <p>The zero-based location in the response string where the highlight
     * starts.</p>
     */
    inline Highlight& WithBeginOffset(int value) { SetBeginOffset(value); return *this;}


    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline int GetEndOffset() const{ return m_endOffset; }

    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline bool EndOffsetHasBeenSet() const { return m_endOffsetHasBeenSet; }

    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline void SetEndOffset(int value) { m_endOffsetHasBeenSet = true; m_endOffset = value; }

    /**
     * <p>The zero-based location in the response string where the highlight ends.</p>
     */
    inline Highlight& WithEndOffset(int value) { SetEndOffset(value); return *this;}


    /**
     * <p>Indicates whether the response is the best response. True if this is the best
     * response; otherwise, false.</p>
     */
    inline bool GetTopAnswer() const{ return m_topAnswer; }

    /**
     * <p>Indicates whether the response is the best response. True if this is the best
     * response; otherwise, false.</p>
     */
    inline bool TopAnswerHasBeenSet() const { return m_topAnswerHasBeenSet; }

    /**
     * <p>Indicates whether the response is the best response. True if this is the best
     * response; otherwise, false.</p>
     */
    inline void SetTopAnswer(bool value) { m_topAnswerHasBeenSet = true; m_topAnswer = value; }

    /**
     * <p>Indicates whether the response is the best response. True if this is the best
     * response; otherwise, false.</p>
     */
    inline Highlight& WithTopAnswer(bool value) { SetTopAnswer(value); return *this;}

  private:

    int m_beginOffset;
    bool m_beginOffsetHasBeenSet;

    int m_endOffset;
    bool m_endOffsetHasBeenSet;

    bool m_topAnswer;
    bool m_topAnswerHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
