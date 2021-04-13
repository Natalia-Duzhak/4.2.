#include "pch.h"
#include "CppUnitTest.h"
#include "../Project4.2/Salary.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Salary a;
			bool k = a.GetDays();
			Assert::AreEqual(k, false);
		}
	};
}
