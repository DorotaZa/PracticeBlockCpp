// Zad.3.1

//Zrealizuj zad. 2.6 w oparciu o podział kodu na plik nagłówkowy oraz plik źródłowy.

#include <iostream>
#include <iomanip>
#include <math.h>
#include "Functions.h"



int main()
{
    printDoubleNumber(-123.456); //wyswietli wiecej cyfr po przecinku bo jest double tez nie jest idealny
    std::cout << std::endl;
    std::cout << std::setprecision(35) << -1234444444.456 << std::endl;
}