// Zad.2.9

//Stwórz zmienną typu float, przypisz jej jakąś wartość, a następnie
//zrzutuj tą wartość na zmienną typu int. Postąp analogicznie z typami
//double / float.

#include <iostream>

int main()
{
    float a = 3.145678;

    std::cout << static_cast<int>(a) << std::endl;
    std::cout << static_cast<double>(a) << std::endl;
 
}
