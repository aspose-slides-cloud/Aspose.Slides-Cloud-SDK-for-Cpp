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



#include "../ClassRegistry.h"
#include "CaptionTrack.h"

namespace asposeslidescloud {
namespace model {

CaptionTrack::CaptionTrack()
{
}

CaptionTrack::~CaptionTrack()
{
}

utility::string_t CaptionTrack::getCaptionId() const
{
	return m_CaptionId;
}

void CaptionTrack::setCaptionId(utility::string_t value)
{
	m_CaptionId = value;
	
}

utility::string_t CaptionTrack::getLabel() const
{
	return m_Label;
}

void CaptionTrack::setLabel(utility::string_t value)
{
	m_Label = value;
	
}

utility::string_t CaptionTrack::getDataAsString() const
{
	return m_DataAsString;
}

void CaptionTrack::setDataAsString(utility::string_t value)
{
	m_DataAsString = value;
	
}

web::json::value CaptionTrack::toJson() const
{
	web::json::value val = this->ResourceBase::toJson();
	if (!m_CaptionId.empty())
	{
		val[utility::conversions::to_string_t("CaptionId")] = ModelBase::toJson(m_CaptionId);
	}
	if (!m_Label.empty())
	{
		val[utility::conversions::to_string_t("Label")] = ModelBase::toJson(m_Label);
	}
	if (!m_DataAsString.empty())
	{
		val[utility::conversions::to_string_t("DataAsString")] = ModelBase::toJson(m_DataAsString);
	}
	return val;
}

void CaptionTrack::fromJson(web::json::value& val)
{
	this->ResourceBase::fromJson(val);
	web::json::value* jsonForCaptionId = ModelBase::getField(val, "CaptionId");
	if(jsonForCaptionId != nullptr && !jsonForCaptionId->is_null())
	{
		setCaptionId(ModelBase::stringFromJson(*jsonForCaptionId));
	}
	web::json::value* jsonForLabel = ModelBase::getField(val, "Label");
	if(jsonForLabel != nullptr && !jsonForLabel->is_null())
	{
		setLabel(ModelBase::stringFromJson(*jsonForLabel));
	}
	web::json::value* jsonForDataAsString = ModelBase::getField(val, "DataAsString");
	if(jsonForDataAsString != nullptr && !jsonForDataAsString->is_null())
	{
		setDataAsString(ModelBase::stringFromJson(*jsonForDataAsString));
	}
}

}
}

