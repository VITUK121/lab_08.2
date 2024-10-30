#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#include "../lab_08.2/lab_08.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest082
{
	TEST_CLASS(UnitTest082)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string test = "one_a two_a_aa three_a_aaa";
			Assert::AreEqual(4,Count(test));
		}
	};
}
