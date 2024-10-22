#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna6.3r.ec/Laboratorna6.3.rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:


		TEST_METHOD(TestFindMaxEven)
		{
			int maxEvenResult;
			int testArray[] = { 5, 6, 7, 8 };
			Assert::IsTrue(findMaxEven(testArray, 4, maxEvenResult));
			Assert::AreEqual(8, maxEvenResult);
		}
	};
}

