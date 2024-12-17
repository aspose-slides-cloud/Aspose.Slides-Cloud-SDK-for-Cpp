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
#include "DrawingGuide.h"

namespace asposeslidescloud {
namespace model {

DrawingGuide::DrawingGuide()
{
	setPosition(0.0);
}

DrawingGuide::~DrawingGuide()
{
}

utility::string_t DrawingGuide::getOrientation() const
{
	return m_Orientation;
}

void DrawingGuide::setOrientation(utility::string_t value)
{
	m_Orientation = value;
	
}

double DrawingGuide::getPosition() const
{
	return m_Position;
}

void DrawingGuide::setPosition(double value)
{
	m_Position = value;
	
}

web::json::value DrawingGuide::toJson() const
{
	web::json::value val = web::json::value::object();
	if (!m_Orientation.empty())
	{
		val[utility::conversions::to_string_t("Orientation")] = ModelBase::toJson(m_Orientation);
	}
	val[utility::conversions::to_string_t("Position")] = ModelBase::toJson(m_Position);
	return val;
}

void DrawingGuide::fromJson(web::json::value& val)
{
	web::json::value* jsonForOrientation = ModelBase::getField(val, "Orientation");
	if(jsonForOrientation != nullptr && !jsonForOrientation->is_null())
	{
		setOrientation(ModelBase::stringFromJson(*jsonForOrientation));
	}
	web::json::value* jsonForPosition = ModelBase::getField(val, "Position");
	if(jsonForPosition != nullptr && !jsonForPosition->is_null() && jsonForPosition->is_number())
	{
		setPosition(ModelBase::doubleFromJson(*jsonForPosition));
	}
}

}
}

