﻿// Zad.1.6

//Napisz program, który poda w jaki sposób wypłacić daną kwotę
//korzystając z możliwie najmniejszej liczby banknotów i monet.Kwota
//ma być pobierana od użytkownika, zaś wynik wyświetlany na ekranie.
//Sprawdzaj czy użytkownik wprowadza poprawną kwotę(do grosza,powyżej zera).

#include <iostream>
#include <math.h>

void howMany(float value)
{
    //wartosc dostepnych nominaly; dopisanie f oznacza ze podajemy liczbe typu float
    float data[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01 };
    int amount[15]; //liczba poszczegolnych nominalow
    int n = 0; //iterator po nominalach
    for (int i = 0; i < 15; i++) //inicjalizowanie tablicy zerami
    {
        amount[i] = 0;
    }
    while (value > 0.001) //troche inny warunek ze wzgledu na niedokladnosc obliczen na liczbach zmiennoprzecinkowych
    {
        if (round(value - data[n]) >= 0)
        {
            amount[n] = std::floor(value / data[n]); //floor -> zaokraglanie w dol
            value -= amount[n] * data[n]; //zdejmujemy wartosc uzyskana jako (liczba nominalow * wartosc nominalu)
            //std::cout << value << " "<< value / data[n] << std::endl;
        }
        n++;
    }
    for (int i = 0; i < 15; i++)
    {
        std::cout << data[i] << " : " << amount[i] << std::endl;
    }
}
int main()
{
    howMany(123.45f);
}