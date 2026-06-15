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


#include "gtest/gtest.h"

#include <fstream>
#include "TestUtils.h"

class TableTest : public ::testing::Test
{
public:
	static TestUtils* utils;

protected:
	void SetUp()
	{
		if (utils == nullptr)
		{
			utils = new TestUtils();
		}
	}
};

TableTest* TableTest::utils = nullptr;

TEST_F(TableTest, importTableFromWorkbook) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/oleObject.xlsx", std::ios::binary));
	std::shared_ptr<ShapeBase> shape = utils->getSlidesApi()->importTableFromWorkbook(
		L"test.pptx", 9, L"Sheet1", L"A1:B5", data,
		boost::none, boost::none, L"", L"", L"password", L"TempSlidesSDK").get();
	EXPECT_FALSE(shape == nullptr);
	EXPECT_EQ(L"Table", shape->getType());
}

TEST_F(TableTest, importTableFromWorkbookByPath) {
	utils->initialize("", "", "");
	std::shared_ptr<HttpContent> data = std::make_shared<HttpContent>();
	data->setData(std::make_shared<std::ifstream>(L"TestData/oleObject.xlsx", std::ios::binary));
	utils->getSlidesApi()->uploadFile(L"TempSlidesSDK/oleObject.xlsx", data).get();
	std::shared_ptr<ShapeBase> shape = utils->getSlidesApi()->importTableFromWorkbook(
		L"test.pptx", 9, L"Sheet1", L"A1:B5", nullptr,
		boost::none, boost::none, L"TempSlidesSDK/oleObject.xlsx", L"", L"password", L"TempSlidesSDK").get();
	EXPECT_FALSE(shape == nullptr);
	EXPECT_EQ(L"Table", shape->getType());
}
