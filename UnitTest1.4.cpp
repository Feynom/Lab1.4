#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1.4/Lab1.4/Rectangle.h"
#include "../Lab1.4/Lab1.4/Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest14
{
	TEST_CLASS(UnitTest14)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Dot A;
			A.Init(5, 6);
			Assert::AreEqual(A.GetX(), 5.);
			Assert::AreEqual(A.GetY(), 6.);
		}
	};
}
