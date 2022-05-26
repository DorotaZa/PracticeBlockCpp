// Zad.5.2

//Utwórz tablicę dwuwymiarową 10x10 typu double, a następnie:
//a) Wypełnij ją wartościami od 1.0 do 100.0 (po kolei);
//b) Wypełnij ją losowymi wartościami;
//c) Wypełnij ją losowymi wartościami z przedziału - 1.5 do 3.5;
//d) Wypełnij ją w taki sposób, ażeby każdy element tej tablicy stanowił sumę numeru wiersza i numeru kolumny, w których się znajduje, podzielony przez 100;


#include <iostream>

//version a)

int main()
{
	double n = 1.0;
	const int size = 10;
	double arr[size][size] = {};

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			arr[i][j] = n;
			n++;
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

}

//version b)

//int main()
//{
//	double n = 1.0;
//	const int size = 10;
//	double arr[size][size] = {};
//
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 0; j < size; ++j)
//		{
//			arr[i][j] = rand();
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//
//}

//version c)

//int main()
//{
//	double n = 1.0;
//	const int size = 10;
//	double arr[size][size] = {};
//
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 0; j < size; ++j)
//		{
//			arr[i][j] = rand() % 6 - 1.5;
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//
//}


//version d

//int main()
//{
//	double n = 1.0;
//	const int size = 10;
//	double arr[size][size] = {};
//
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 0; j < size; ++j)
//		{
//			arr[i][j] = (i+j)/100.0;
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//	std::cout << std::endl;
//
//}
