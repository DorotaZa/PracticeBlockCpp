﻿// Zad.1.2

//Sprawdź, czy wartość przypisana zmiennej jest parzysta, czy nie
//(wypisz na ekranie odpowiedni komunikat).

#include <iostream>

int main()
{
	int num = 0;
	std::cout << "Enter the number: ";
	std::cin >> num;

	if (num % 2)
	{
		std::cout << "Odd number." << std::endl;
	}
	else
	{
		std::cout << "Even number." << std::endl;
	}
}
