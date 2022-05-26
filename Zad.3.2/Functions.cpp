#include "Functions.h"
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


//funkcja do potegowania z math.h nazywa sie pow
// nasza funkcja nazywa sie power i to sa inne funkcje
// tutaj prezciazamy funkcje power, odbywa sie w taki sposob ze mammy ta sama nazwe funkcji ale inne elementy

float power(float a, float b)
{
	return static_cast<float>(pow(a, b)); //rzutowanie sgratne robimy jawnie
}

double power(double a, double b)
{
	return static_cast<float>(pow(a, b)); //rzutowanie sgratne robimy jawnie
}
