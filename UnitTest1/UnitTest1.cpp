#include "pch.h"
#include "CppUnitTest.h"
#include"../s2lab1.1/main.cpp"
#include"../s2lab1.1/number.h"
#include"../s2lab1.1/number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number num;
			num.setFirst(2.0);
			num.setSecond(3.0);
			num.multiply(3.0);
			Assert::AreEqual(6.0, num.getFirst()); 
			Assert::AreEqual(9.0, num.getSecond());
		}
	};
}
