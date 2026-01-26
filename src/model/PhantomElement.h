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
 * PhantomElement.h
 *
 * Specifies an instance of mathematical text that contained within a MathParagraph and starts on its own line.
 */

#ifndef ASPOSESLIDESCLOUD_MODEL_PhantomElement_H_
#define ASPOSESLIDESCLOUD_MODEL_PhantomElement_H_

#include "MathElement.h"

#include "../model/MathElement.h"
#include <cpprest/details/basic_types.h>

#include "../ClassRegistry.h"

namespace asposeslidescloud {
namespace model {

/// <summary>
/// Specifies an instance of mathematical text that contained within a MathParagraph and starts on its own line.
/// </summary>
class  PhantomElement : public MathElement
{
public:
	ASPOSE_DLL_EXPORT PhantomElement();
	ASPOSE_DLL_EXPORT virtual ~PhantomElement();

	ASPOSE_DLL_EXPORT web::json::value toJson() const override;
	ASPOSE_DLL_EXPORT void fromJson(web::json::value& json) override;

	/// <summary>
	/// Base element
	/// </summary>
	ASPOSE_DLL_EXPORT std::shared_ptr<MathElement> getBase() const;
	ASPOSE_DLL_EXPORT void setBase(std::shared_ptr<MathElement> value);
	/// <summary>
	/// true if the base element is displayed.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isShow() const;
	ASPOSE_DLL_EXPORT void setShow(bool value);
	ASPOSE_DLL_EXPORT bool showIsSet() const;
	ASPOSE_DLL_EXPORT void unsetShow();
	/// <summary>
	/// true if the the width of the base element should be treated as zero.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isZeroWidth() const;
	ASPOSE_DLL_EXPORT void setZeroWidth(bool value);
	ASPOSE_DLL_EXPORT bool zeroWidthIsSet() const;
	ASPOSE_DLL_EXPORT void unsetZeroWidth();
	/// <summary>
	/// true if the the ascent (height above baseline) of the base element should be treated as zero.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isZeroAsc() const;
	ASPOSE_DLL_EXPORT void setZeroAsc(bool value);
	ASPOSE_DLL_EXPORT bool zeroAscIsSet() const;
	ASPOSE_DLL_EXPORT void unsetZeroAsc();
	/// <summary>
	/// true if the the descent (depth below baseline) of the base element should be treated as zero.
	/// </summary>
	ASPOSE_DLL_EXPORT bool isZeroDesc() const;
	ASPOSE_DLL_EXPORT void setZeroDesc(bool value);
	ASPOSE_DLL_EXPORT bool zeroDescIsSet() const;
	ASPOSE_DLL_EXPORT void unsetZeroDesc();
	/// <summary>
	/// true if operators and symbols inside the phantom still affect mathematical spacing around the phantom (as if visible).
	/// </summary>
	ASPOSE_DLL_EXPORT bool isTransp() const;
	ASPOSE_DLL_EXPORT void setTransp(bool value);
	ASPOSE_DLL_EXPORT bool transpIsSet() const;
	ASPOSE_DLL_EXPORT void unsetTransp();

protected:
	std::shared_ptr<MathElement> m_Base;
	bool m_Show;
	bool m_ShowIsSet;
	bool m_ZeroWidth;
	bool m_ZeroWidthIsSet;
	bool m_ZeroAsc;
	bool m_ZeroAscIsSet;
	bool m_ZeroDesc;
	bool m_ZeroDescIsSet;
	bool m_Transp;
	bool m_TranspIsSet;
};

}
}

#endif /* ASPOSESLIDESCLOUD_MODEL_PhantomElement_H_ */
