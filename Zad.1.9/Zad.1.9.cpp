// Zad.1.9

//Używając pętli while losuj liczby, aż do uzyskania liczby mniejszej niż 0.03. Wszystkie liczby wyświetlaj. Wyświetl liczbę losowań.


#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL)); // funkcja srand() zmienia ziarno losowania
    float n = 0.0f;

    int i = 0;
    do
    {
        n = rand() / 10000.0f;
        std::cout << n << std::endl;
        i++;

    } while (n > 0.03f);

    std::cout << "Draw lots: " << i << std::endl;
}
