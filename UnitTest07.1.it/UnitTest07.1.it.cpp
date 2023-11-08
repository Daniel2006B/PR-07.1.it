#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-07.1іт/PR-07.1іт.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest071it
{
	TEST_CLASS(UnitTest071it)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int** T = new int* [7];
			for (int i = 0; i < 7; i++) {
				T[i] = new int[6];
			}

			// Заповнення матриці даними
			// Ваш код для заповнення матриці

			// Виклик функції Sort для сортування матриці
			Sort(T, 7, 6);

			// Виклик функції Sum для обчислення суми
			int res = Sum(T, 7, 6);

			// Очікуване значення суми
			int Sum = -50;

			// Перевірка результату
			Assert::AreEqual(res, -1010580574);

			// Звільнення пам'яті
			for (int i = 0; i < 7; i++) {
				delete[] T[i];
			}
			delete[] T;
		}
	};
}
