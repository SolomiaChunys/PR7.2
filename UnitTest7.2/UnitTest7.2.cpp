#include "pch.h"
#include "CppUnitTest.h"
#include "c:\Соломія Чунис\Політехніка\Алгоритмізація та програмування\lab№7.2\PR7.2\PR7.2\PR7.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
	TEST_CLASS(UnitTest72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int k = 4;
			const int n = 3;
			int** a = new int* [k];
			for (int i = 0; i < k; i++)
				a[i] = new int[n];
			int a[][3] = { {2, 9, 6},{7, 8, 10},{14, 14, 7},{6, 13, 14} };
			int t = MinMax(a, 4, 3);
			Assert::AreEqual(10, t);
		}
	};
}
