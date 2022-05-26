// Zad.2.8

//Stwórz program, który poprosi użytkownika o podanie wartości liczbowej.
//Następnie program wypisze wszystkie liczby naturalne, aż do zadanej.

#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter the number: " <<std::endl;
    std::cin >> num;

    if (num > 0)
    {
        for (int i = 0; i <= num; ++i)
        {
            std::cout << i << std::endl;
        }
    }
    else
    {
        std::cout << "You entered negative number." << std::endl;
    }
   

}
