#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "..\Primality\main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PrimalityTestingTests
{
	TEST_CLASS(PrimalityTestingTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* response;
			int Number = 13;
			response = isPrime(Number);
			Assert::AreEqual("Prime", response);
		}
	};
}
