#include "pch.h"
#include "CppUnitTest.h"
#include "..\Primality\main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PrimalityCheckTests
{
	TEST_CLASS(PrimalityCheckTests)
	{
	public:
		TEST_METHOD(PrimalityCheck_ActualPrimeNumbers_Prime)
		{
				Assert::AreEqual("Prime", isPrime(13));
				Assert::AreEqual("Prime", isPrime(2));
				Assert::AreEqual("Prime", isPrime(11));
				Assert::AreEqual("Prime", isPrime(3));
				Assert::AreEqual("Prime", isPrime(5));
				Assert::AreEqual("Prime", isPrime(1009));
				Assert::AreEqual("Prime", isPrime(2503));
		}
		TEST_METHOD(PrimalityCheck_CompoundNumbers_NotPrime)
		{
			Assert::AreEqual("Not Prime", isPrime(28));
			Assert::AreEqual("Not Prime", isPrime(160));
			Assert::AreEqual("Not Prime", isPrime(3640));
			Assert::AreEqual("Not Prime", isPrime(5704));
			Assert::AreEqual("Not Prime", isPrime(100));
			Assert::AreEqual("Not Prime", isPrime(25));
		}
		TEST_METHOD(PrimalityCheck_EdgeCases_NotPrime)
		{
			Assert::AreEqual("Not Prime", isPrime(1));
			Assert::AreEqual("Not Prime", isPrime(0));
		}
	};
}
