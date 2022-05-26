﻿// Zad.7.4

//Znajdź n liczb pierwszych. (napisz funkcję)

#include <iostream>
#include <cmath>


bool isPrimeNumber(int n)
{
    if (n < 2) //uwzgledniamy 0, 1 i wszystkie ujemne
        return false;
    for (int d = 2; d <= sqrt(n); d++)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 0;
    std::cout << "Enter the number of prime numbers: " << std::endl;
    std::cin >> n;


    int l = 0; //ta zmienna przechowuje kolejne wartosci sprawdzanych liczb naturalnych
    for (int i = 0; i < n;)// ta petla bedzie dzialac az znajdzie n liczb pierwszych
    {
        if (isPrimeNumber(l))
        {
            
            i++;
            std::cout << "Prime number : " << l << std::endl;
            
        }
        l++;
    }
 
}