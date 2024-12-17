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
#include "Shape.h"

namespace asposeslidescloud {
namespace model {

Shape::Shape()
{
	setType(L"Shape");
}

Shape::~Shape()
{
}

utility::string_t Shape::getText() const
{
	return m_Text;
}

void Shape::setText(utility::string_t value)
{
	m_Text = value;
	
}

std::vector<std::shared_ptr<Paragraph>> Shape::getParagraphs() const
{
	return m_Paragraphs;
}

void Shape::setParagraphs(std::vector<std::shared_ptr<Paragraph>> value)
{
	m_Paragraphs = value;
	
}

std::shared_ptr<TextFrameFormat> Shape::getTextFrameFormat() const
{
	return m_TextFrameFormat;
}

void Shape::setTextFrameFormat(std::shared_ptr<TextFrameFormat> value)
{
	m_TextFrameFormat = value;
	
}

web::json::value Shape::toJson() const
{
	web::json::value val = this->GeometryShape::toJson();
	if (!m_Text.empty())
	{
		val[utility::conversions::to_string_t("Text")] = ModelBase::toJson(m_Text);
	}
	if (m_Paragraphs.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_Paragraphs)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("Paragraphs")] = web::json::value::array(jsonArray);
	}
	if (m_TextFrameFormat != nullptr)
	{
		val[utility::conversions::to_string_t("TextFrameFormat")] = ModelBase::toJson(m_TextFrameFormat);
	}
	return val;
}

void Shape::fromJson(web::json::value& val)
{
	this->GeometryShape::fromJson(val);
	web::json::value* jsonForText = ModelBase::getField(val, "Text");
	if(jsonForText != nullptr && !jsonForText->is_null())
	{
		setText(ModelBase::stringFromJson(*jsonForText));
	}
	web::json::value* jsonForParagraphs = ModelBase::getField(val, "Paragraphs");
	if(jsonForParagraphs != nullptr && !jsonForParagraphs->is_null())
	{
		{
			m_Paragraphs.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForParagraphs->as_array())
			{
				if(item.is_null())
				{
					m_Paragraphs.push_back(std::shared_ptr<Paragraph>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"Paragraph", item);
					m_Paragraphs.push_back(std::static_pointer_cast<Paragraph>(newItem));
				}
			}
        	}
	}
	web::json::value* jsonForTextFrameFormat = ModelBase::getField(val, "TextFrameFormat");
	if(jsonForTextFrameFormat != nullptr && !jsonForTextFrameFormat->is_null())
	{
		std::shared_ptr<void> instanceForTextFrameFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"TextFrameFormat", *jsonForTextFrameFormat);
		setTextFrameFormat(std::static_pointer_cast<TextFrameFormat>(instanceForTextFrameFormat));
	}
}

}
}

