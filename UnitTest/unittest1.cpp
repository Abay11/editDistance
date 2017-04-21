#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ITV_LAB4/EditDistance.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(0, editDistance("OK", "OK"));
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(1, editDistance("gateway", "gatewy"));
		}

		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(7, editDistance("", "gateway"));
		}

		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(7, editDistance("gateway", ""));
		}

	};
}