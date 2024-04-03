#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 3.3 G/Calculator.h"
#include "..//OOP Lab 3.3 G/Calculator.cpp"
#include "..//OOP Lab 3.3 G/Fraction.h"
#include "..//OOP Lab 3.3 G/Fraction.cpp"
#include "..//OOP Lab 3.3 G/Object.h"
#include "..//OOP Lab 3.3 G/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction fraction(2, 3);
			long x = 2;
			Assert::AreEqual(x, fraction.getNumerator());
		}
	};
}
