#include "Zad5_1solution.h"
#include <iostream>

void taskA(int num[], int size)

{
	std::cout << "A: " << std::endl;

	for (int i = 0; i < size; i++)
	{
		//std::cout << num[i] << std::endl;
		std::cout << num[i] << "; "; //wersja w jednej linii
	}
	std::cout << std::endl;
}



void taskB(int num[], int size)

{
	std::cout << "B: " << std::endl;

	for (int i = size - 1; i >= 0; i--)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskC(int num[], int size)

{
	std::cout << "C: " << std::endl;

	for (int i = 1; i < size; i += 2)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;

}

//alternative using modulo
//
//void taskC(int num[], int size)
//{
//	std::cout << "C: " << std::endl;
//
//	for (int i = 0; i < size; ++i)
//	{
//		if (i % 2 != 0)
//		{
//			std::cout << num[i];
//		}
//	}
//	std::cout << std::endl;
//}


void taskD(int num[], int size)

{
	std::cout << "D: " << std::endl;

	for (int i = 0; i < size; i += 3)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}

void taskE(int num[], int size)
{

	std::cout << "E: " << std::endl;
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += num[i];
		//std::cout << sum << "; "; wyswietlanie sum  po kolei (1+2; 2+3...)
	}
	std::cout << sum << "; ";

	std::cout << std::endl;
}


void taskF(int num[], int size)
{
	std::cout << "F: " << std::endl;
	int sumFive = 0;
	for (int i = 15; i < size; ++i)
	{
		if (num[i] > 3)
		{
			sumFive += num[i];
		}
	}
	std::cout << sumFive << std::endl;
}


void taskG(int num[], int size)
{
	std::cout << "G; " << std::endl;
	int sum = 0;
	int i = 0;
	do
	{
		sum += num[i];
		i++;
	} while (sum <= 10);

	std::cout << i << std::endl;
}

void taskH(int num[], int size)
{
	int n = 0;
	std::cout << "Enter the number: " << std::endl;
	std::cin >> n;
	std::cout << "H: " << std::endl;

	for (int i = n - 1; i < size; i += n)
	{
		std::cout << num[i] << "; ";
	}
	std::cout << std::endl;
}


void taskI(int num[], int size)
{
	int m = 0;
	std::cout << "Enter the number: " << std::endl;
	std::cin >> m;
	std::cout << "I: " << std::endl;

	for (int i = 0; i < size; ++i)
	{
		if (num[i] % m == 0)
		{
			std::cout << num[i] << "; ";
		}
	}
	std::cout << std::endl;
	std::cout << std::endl;
}


//void taskJ(int num[], int size)
//{
//	std::cout << "J: " << std::endl;
//
//
//	int sum = 0;
//	int i = 0;
//	do
//	{
//		sum += num[i];
//		i++;
//		
//
//	} while (sum == 10);
//
//	std::cout << num[i] << std::endl;
//	std::cout << i << std::endl;
//}


//
//void taskJ(int num[], int size)
//{
//
//	std::cout << "J: " << std::endl;
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += num[i];
//		std::cout << sum << "; ";
//	}
//	std::cout << sum << "; ";
//
//	std::cout << std::endl;
//}