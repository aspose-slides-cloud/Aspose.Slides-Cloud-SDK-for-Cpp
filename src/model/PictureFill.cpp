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
#include "PictureFill.h"

namespace asposeslidescloud {
namespace model {

PictureFill::PictureFill()
{
	m_TileOffsetXIsSet = false;
	m_TileOffsetYIsSet = false;
	m_TileScaleXIsSet = false;
	m_TileScaleYIsSet = false;
	setType(L"Picture");
	setCropBottom(0.0);
	setCropLeft(0.0);
	setCropRight(0.0);
	setCropTop(0.0);
	setDpi(0);
}

PictureFill::~PictureFill()
{
}

double PictureFill::getCropBottom() const
{
	return m_CropBottom;
}

void PictureFill::setCropBottom(double value)
{
	m_CropBottom = value;
	
}

double PictureFill::getCropLeft() const
{
	return m_CropLeft;
}

void PictureFill::setCropLeft(double value)
{
	m_CropLeft = value;
	
}

double PictureFill::getCropRight() const
{
	return m_CropRight;
}

void PictureFill::setCropRight(double value)
{
	m_CropRight = value;
	
}

double PictureFill::getCropTop() const
{
	return m_CropTop;
}

void PictureFill::setCropTop(double value)
{
	m_CropTop = value;
	
}

int32_t PictureFill::getDpi() const
{
	return m_Dpi;
}

void PictureFill::setDpi(int32_t value)
{
	m_Dpi = value;
	
}

double PictureFill::getTileOffsetX() const
{
	return m_TileOffsetX;
}

void PictureFill::setTileOffsetX(double value)
{
	m_TileOffsetX = value;
	m_TileOffsetXIsSet = true;
}

bool PictureFill::tileOffsetXIsSet() const
{
	return m_TileOffsetXIsSet;
}

void PictureFill::unsetTileOffsetX()
{
	m_TileOffsetXIsSet = false;
}

double PictureFill::getTileOffsetY() const
{
	return m_TileOffsetY;
}

void PictureFill::setTileOffsetY(double value)
{
	m_TileOffsetY = value;
	m_TileOffsetYIsSet = true;
}

bool PictureFill::tileOffsetYIsSet() const
{
	return m_TileOffsetYIsSet;
}

void PictureFill::unsetTileOffsetY()
{
	m_TileOffsetYIsSet = false;
}

double PictureFill::getTileScaleX() const
{
	return m_TileScaleX;
}

void PictureFill::setTileScaleX(double value)
{
	m_TileScaleX = value;
	m_TileScaleXIsSet = true;
}

bool PictureFill::tileScaleXIsSet() const
{
	return m_TileScaleXIsSet;
}

void PictureFill::unsetTileScaleX()
{
	m_TileScaleXIsSet = false;
}

double PictureFill::getTileScaleY() const
{
	return m_TileScaleY;
}

void PictureFill::setTileScaleY(double value)
{
	m_TileScaleY = value;
	m_TileScaleYIsSet = true;
}

bool PictureFill::tileScaleYIsSet() const
{
	return m_TileScaleYIsSet;
}

void PictureFill::unsetTileScaleY()
{
	m_TileScaleYIsSet = false;
}

utility::string_t PictureFill::getTileAlignment() const
{
	return m_TileAlignment;
}

void PictureFill::setTileAlignment(utility::string_t value)
{
	m_TileAlignment = value;
	
}

utility::string_t PictureFill::getTileFlip() const
{
	return m_TileFlip;
}

void PictureFill::setTileFlip(utility::string_t value)
{
	m_TileFlip = value;
	
}

std::shared_ptr<ResourceUri> PictureFill::getImage() const
{
	return m_Image;
}

void PictureFill::setImage(std::shared_ptr<ResourceUri> value)
{
	m_Image = value;
	
}

utility::string_t PictureFill::getBase64Data() const
{
	return m_Base64Data;
}

void PictureFill::setBase64Data(utility::string_t value)
{
	m_Base64Data = value;
	
}

utility::string_t PictureFill::getSvgData() const
{
	return m_SvgData;
}

void PictureFill::setSvgData(utility::string_t value)
{
	m_SvgData = value;
	
}

utility::string_t PictureFill::getPictureFillMode() const
{
	return m_PictureFillMode;
}

void PictureFill::setPictureFillMode(utility::string_t value)
{
	m_PictureFillMode = value;
	
}

std::vector<std::shared_ptr<ImageTransformEffect>> PictureFill::getImageTransformList() const
{
	return m_ImageTransformList;
}

void PictureFill::setImageTransformList(std::vector<std::shared_ptr<ImageTransformEffect>> value)
{
	m_ImageTransformList = value;
	
}

web::json::value PictureFill::toJson() const
{
	web::json::value val = this->FillFormat::toJson();
	val[utility::conversions::to_string_t("CropBottom")] = ModelBase::toJson(m_CropBottom);
	val[utility::conversions::to_string_t("CropLeft")] = ModelBase::toJson(m_CropLeft);
	val[utility::conversions::to_string_t("CropRight")] = ModelBase::toJson(m_CropRight);
	val[utility::conversions::to_string_t("CropTop")] = ModelBase::toJson(m_CropTop);
	val[utility::conversions::to_string_t("Dpi")] = ModelBase::toJson(m_Dpi);
	if(m_TileOffsetXIsSet)
	{
		val[utility::conversions::to_string_t("TileOffsetX")] = ModelBase::toJson(m_TileOffsetX);
	}
	if(m_TileOffsetYIsSet)
	{
		val[utility::conversions::to_string_t("TileOffsetY")] = ModelBase::toJson(m_TileOffsetY);
	}
	if(m_TileScaleXIsSet)
	{
		val[utility::conversions::to_string_t("TileScaleX")] = ModelBase::toJson(m_TileScaleX);
	}
	if(m_TileScaleYIsSet)
	{
		val[utility::conversions::to_string_t("TileScaleY")] = ModelBase::toJson(m_TileScaleY);
	}
	if (!m_TileAlignment.empty())
	{
		val[utility::conversions::to_string_t("TileAlignment")] = ModelBase::toJson(m_TileAlignment);
	}
	if (!m_TileFlip.empty())
	{
		val[utility::conversions::to_string_t("TileFlip")] = ModelBase::toJson(m_TileFlip);
	}
	if (m_Image != nullptr)
	{
		val[utility::conversions::to_string_t("Image")] = ModelBase::toJson(m_Image);
	}
	if (!m_Base64Data.empty())
	{
		val[utility::conversions::to_string_t("Base64Data")] = ModelBase::toJson(m_Base64Data);
	}
	if (!m_SvgData.empty())
	{
		val[utility::conversions::to_string_t("SvgData")] = ModelBase::toJson(m_SvgData);
	}
	if (!m_PictureFillMode.empty())
	{
		val[utility::conversions::to_string_t("PictureFillMode")] = ModelBase::toJson(m_PictureFillMode);
	}
	if (m_ImageTransformList.size() > 0)
	{
		std::vector<web::json::value> jsonArray;
		for (auto& item : m_ImageTransformList)
		{
			jsonArray.push_back(ModelBase::toJson(item));
		}
		val[utility::conversions::to_string_t("ImageTransformList")] = web::json::value::array(jsonArray);
	}
	return val;
}

void PictureFill::fromJson(web::json::value& val)
{
	this->FillFormat::fromJson(val);
	web::json::value* jsonForCropBottom = ModelBase::getField(val, "CropBottom");
	if(jsonForCropBottom != nullptr && !jsonForCropBottom->is_null() && jsonForCropBottom->is_number())
	{
		setCropBottom(ModelBase::doubleFromJson(*jsonForCropBottom));
	}
	web::json::value* jsonForCropLeft = ModelBase::getField(val, "CropLeft");
	if(jsonForCropLeft != nullptr && !jsonForCropLeft->is_null() && jsonForCropLeft->is_number())
	{
		setCropLeft(ModelBase::doubleFromJson(*jsonForCropLeft));
	}
	web::json::value* jsonForCropRight = ModelBase::getField(val, "CropRight");
	if(jsonForCropRight != nullptr && !jsonForCropRight->is_null() && jsonForCropRight->is_number())
	{
		setCropRight(ModelBase::doubleFromJson(*jsonForCropRight));
	}
	web::json::value* jsonForCropTop = ModelBase::getField(val, "CropTop");
	if(jsonForCropTop != nullptr && !jsonForCropTop->is_null() && jsonForCropTop->is_number())
	{
		setCropTop(ModelBase::doubleFromJson(*jsonForCropTop));
	}
	web::json::value* jsonForDpi = ModelBase::getField(val, "Dpi");
	if(jsonForDpi != nullptr && !jsonForDpi->is_null() && jsonForDpi->is_number())
	{
		setDpi(ModelBase::int32_tFromJson(*jsonForDpi));
	}
	web::json::value* jsonForTileOffsetX = ModelBase::getField(val, "TileOffsetX");
	if(jsonForTileOffsetX != nullptr && !jsonForTileOffsetX->is_null() && jsonForTileOffsetX->is_number())
	{
		setTileOffsetX(ModelBase::doubleFromJson(*jsonForTileOffsetX));
	}
	web::json::value* jsonForTileOffsetY = ModelBase::getField(val, "TileOffsetY");
	if(jsonForTileOffsetY != nullptr && !jsonForTileOffsetY->is_null() && jsonForTileOffsetY->is_number())
	{
		setTileOffsetY(ModelBase::doubleFromJson(*jsonForTileOffsetY));
	}
	web::json::value* jsonForTileScaleX = ModelBase::getField(val, "TileScaleX");
	if(jsonForTileScaleX != nullptr && !jsonForTileScaleX->is_null() && jsonForTileScaleX->is_number())
	{
		setTileScaleX(ModelBase::doubleFromJson(*jsonForTileScaleX));
	}
	web::json::value* jsonForTileScaleY = ModelBase::getField(val, "TileScaleY");
	if(jsonForTileScaleY != nullptr && !jsonForTileScaleY->is_null() && jsonForTileScaleY->is_number())
	{
		setTileScaleY(ModelBase::doubleFromJson(*jsonForTileScaleY));
	}
	web::json::value* jsonForTileAlignment = ModelBase::getField(val, "TileAlignment");
	if(jsonForTileAlignment != nullptr && !jsonForTileAlignment->is_null())
	{
		setTileAlignment(ModelBase::stringFromJson(*jsonForTileAlignment));
	}
	web::json::value* jsonForTileFlip = ModelBase::getField(val, "TileFlip");
	if(jsonForTileFlip != nullptr && !jsonForTileFlip->is_null())
	{
		setTileFlip(ModelBase::stringFromJson(*jsonForTileFlip));
	}
	web::json::value* jsonForImage = ModelBase::getField(val, "Image");
	if(jsonForImage != nullptr && !jsonForImage->is_null())
	{
		std::shared_ptr<void> instanceForImage = asposeslidescloud::api::ClassRegistry::deserialize(L"ResourceUri", *jsonForImage);
		setImage(std::static_pointer_cast<ResourceUri>(instanceForImage));
	}
	web::json::value* jsonForBase64Data = ModelBase::getField(val, "Base64Data");
	if(jsonForBase64Data != nullptr && !jsonForBase64Data->is_null())
	{
		setBase64Data(ModelBase::stringFromJson(*jsonForBase64Data));
	}
	web::json::value* jsonForSvgData = ModelBase::getField(val, "SvgData");
	if(jsonForSvgData != nullptr && !jsonForSvgData->is_null())
	{
		setSvgData(ModelBase::stringFromJson(*jsonForSvgData));
	}
	web::json::value* jsonForPictureFillMode = ModelBase::getField(val, "PictureFillMode");
	if(jsonForPictureFillMode != nullptr && !jsonForPictureFillMode->is_null())
	{
		setPictureFillMode(ModelBase::stringFromJson(*jsonForPictureFillMode));
	}
	web::json::value* jsonForImageTransformList = ModelBase::getField(val, "ImageTransformList");
	if(jsonForImageTransformList != nullptr && !jsonForImageTransformList->is_null())
	{
		{
			m_ImageTransformList.clear();
			std::vector<web::json::value> jsonArray;
			for(auto& item : jsonForImageTransformList->as_array())
			{
				if(item.is_null())
				{
					m_ImageTransformList.push_back(std::shared_ptr<ImageTransformEffect>(nullptr));
				}
				else
				{
					std::shared_ptr<void> newItem = asposeslidescloud::api::ClassRegistry::deserialize(L"ImageTransformEffect", item);
					m_ImageTransformList.push_back(std::static_pointer_cast<ImageTransformEffect>(newItem));
				}
			}
        	}
	}
}

}
}

