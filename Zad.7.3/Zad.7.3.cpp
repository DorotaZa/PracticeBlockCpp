// Zad.7.3

//Napisz funkcję do sprawdzania czy liczba jest pierwszą.
//• Liczba pierwsza – liczba, która ma tylko dwa dzielniki(1 i siebie);
//• Wystarcza sprawdzać dzielniki z przedziału : [2…√𝑛]

#include <iostream>
#include <cmath>


bool IsprimeNumber(int n)
{
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
    std::cout << "Podaj liczbe : ";
    std::cin >> n;
    std::cout << "Czy podana liczba jest liczba pierwsza: " << std::boolalpha << IsprimeNumber(n);
}
