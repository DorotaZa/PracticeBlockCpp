// Zad.2.7

//Napisz metodę power, która przyjmie dwa parametry typu int, a która zwróci wynik potęgowania o podstawie i wykładniku takich, jak przekazano.

#include <iostream>
#include <math.h>

//funkcja do potegowanialiczb naturalnych (uproszczona)
int power(int a, int b)
{
	if (b < 0) //nie obslugujemy, gdy wykladnik ujemny
	{
		return -1;
	}
	if (b == 0)
	{
		return 1;
	}
	if (b == 1)
	{
		return a;
	}

	int r = 1;

	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}

int main()
{
	std::cout << power(1, -3) << std::endl;
	std::cout << power(1, 0) << std::endl;
	std::cout << power(18, 1) << std::endl;
	std::cout << power(2, 3) << std::endl;
}