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
#include "PhantomElement.h"

namespace asposeslidescloud {
namespace model {

PhantomElement::PhantomElement()
{
	m_ShowIsSet = false;
	m_ZeroWidthIsSet = false;
	m_ZeroAscIsSet = false;
	m_ZeroDescIsSet = false;
	m_TranspIsSet = false;
	setType(L"Phantom");
}

PhantomElement::~PhantomElement()
{
}

std::shared_ptr<MathElement> PhantomElement::getBase() const
{
	return m_Base;
}

void PhantomElement::setBase(std::shared_ptr<MathElement> value)
{
	m_Base = value;
	
}

bool PhantomElement::isShow() const
{
	return m_Show;
}

void PhantomElement::setShow(bool value)
{
	m_Show = value;
	m_ShowIsSet = true;
}

bool PhantomElement::showIsSet() const
{
	return m_ShowIsSet;
}

void PhantomElement::unsetShow()
{
	m_ShowIsSet = false;
}

bool PhantomElement::isZeroWidth() const
{
	return m_ZeroWidth;
}

void PhantomElement::setZeroWidth(bool value)
{
	m_ZeroWidth = value;
	m_ZeroWidthIsSet = true;
}

bool PhantomElement::zeroWidthIsSet() const
{
	return m_ZeroWidthIsSet;
}

void PhantomElement::unsetZeroWidth()
{
	m_ZeroWidthIsSet = false;
}

bool PhantomElement::isZeroAsc() const
{
	return m_ZeroAsc;
}

void PhantomElement::setZeroAsc(bool value)
{
	m_ZeroAsc = value;
	m_ZeroAscIsSet = true;
}

bool PhantomElement::zeroAscIsSet() const
{
	return m_ZeroAscIsSet;
}

void PhantomElement::unsetZeroAsc()
{
	m_ZeroAscIsSet = false;
}

bool PhantomElement::isZeroDesc() const
{
	return m_ZeroDesc;
}

void PhantomElement::setZeroDesc(bool value)
{
	m_ZeroDesc = value;
	m_ZeroDescIsSet = true;
}

bool PhantomElement::zeroDescIsSet() const
{
	return m_ZeroDescIsSet;
}

void PhantomElement::unsetZeroDesc()
{
	m_ZeroDescIsSet = false;
}

bool PhantomElement::isTransp() const
{
	return m_Transp;
}

void PhantomElement::setTransp(bool value)
{
	m_Transp = value;
	m_TranspIsSet = true;
}

bool PhantomElement::transpIsSet() const
{
	return m_TranspIsSet;
}

void PhantomElement::unsetTransp()
{
	m_TranspIsSet = false;
}

web::json::value PhantomElement::toJson() const
{
	web::json::value val = this->MathElement::toJson();
	if (m_Base != nullptr)
	{
		val[utility::conversions::to_string_t("Base")] = ModelBase::toJson(m_Base);
	}
	if(m_ShowIsSet)
	{
		val[utility::conversions::to_string_t("Show")] = ModelBase::toJson(m_Show);
	}
	if(m_ZeroWidthIsSet)
	{
		val[utility::conversions::to_string_t("ZeroWidth")] = ModelBase::toJson(m_ZeroWidth);
	}
	if(m_ZeroAscIsSet)
	{
		val[utility::conversions::to_string_t("ZeroAsc")] = ModelBase::toJson(m_ZeroAsc);
	}
	if(m_ZeroDescIsSet)
	{
		val[utility::conversions::to_string_t("ZeroDesc")] = ModelBase::toJson(m_ZeroDesc);
	}
	if(m_TranspIsSet)
	{
		val[utility::conversions::to_string_t("Transp")] = ModelBase::toJson(m_Transp);
	}
	return val;
}

void PhantomElement::fromJson(web::json::value& val)
{
	this->MathElement::fromJson(val);
	web::json::value* jsonForBase = ModelBase::getField(val, "Base");
	if(jsonForBase != nullptr && !jsonForBase->is_null())
	{
		std::shared_ptr<void> instanceForBase = asposeslidescloud::api::ClassRegistry::deserialize(L"MathElement", *jsonForBase);
		setBase(std::static_pointer_cast<MathElement>(instanceForBase));
	}
	web::json::value* jsonForShow = ModelBase::getField(val, "Show");
	if(jsonForShow != nullptr && !jsonForShow->is_null())
	{
		setShow(ModelBase::boolFromJson(*jsonForShow));
	}
	web::json::value* jsonForZeroWidth = ModelBase::getField(val, "ZeroWidth");
	if(jsonForZeroWidth != nullptr && !jsonForZeroWidth->is_null())
	{
		setZeroWidth(ModelBase::boolFromJson(*jsonForZeroWidth));
	}
	web::json::value* jsonForZeroAsc = ModelBase::getField(val, "ZeroAsc");
	if(jsonForZeroAsc != nullptr && !jsonForZeroAsc->is_null())
	{
		setZeroAsc(ModelBase::boolFromJson(*jsonForZeroAsc));
	}
	web::json::value* jsonForZeroDesc = ModelBase::getField(val, "ZeroDesc");
	if(jsonForZeroDesc != nullptr && !jsonForZeroDesc->is_null())
	{
		setZeroDesc(ModelBase::boolFromJson(*jsonForZeroDesc));
	}
	web::json::value* jsonForTransp = ModelBase::getField(val, "Transp");
	if(jsonForTransp != nullptr && !jsonForTransp->is_null())
	{
		setTransp(ModelBase::boolFromJson(*jsonForTransp));
	}
}

}
}

