// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Aspose" file="ApiBase.cs">
//   Copyright (c) 2020 Aspose.Slides for Cloud
// </copyright>
// <summary>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
// </summary>
// --------------------------------------------------------------------------------------------------------------------

/*
 * CaptionTrack.h
 *
 * Represents list of Links to Paragraphs resources
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_CaptionTrack_H_
#define ASPOSESLIDESCLOUD_MODEL_CaptionTrack_H_

#include "ResourceBase.h"

#include <cpprest/details/basic_types.h>
#include "../model/ResourceBase.h"
#include "../model/ResourceUri.h"
#include <vector>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Represents list of Links to Paragraphs resources
/// </summary>
class  CaptionTrack : public ResourceBase
{
public:
	ASPOSE_DLL_EXPORT CaptionTrack();
	ASPOSE_DLL_EXPORT virtual ~CaptionTrack();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Caption ID.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getCaptionId() const;
	ASPOSE_DLL_EXPORT void setCaptionId(utility::string_t value);
	/// <summary>
	/// Label.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getLabel() const;
	ASPOSE_DLL_EXPORT void setLabel(utility::string_t value);
	/// <summary>
	/// Caption track data as string.
	/// </summary>
	ASPOSE_DLL_EXPORT utility::string_t getDataAsString() const;
	ASPOSE_DLL_EXPORT void setDataAsString(utility::string_t value);

protected:
	utility::string_t m_CaptionId;
	utility::string_t m_Label;
	utility::string_t m_DataAsString;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_CaptionTrack_H_ */
