//Zad.1.5

//Napisz funkcję sprawdzającą czy podane ciągi znaków są palindromem. Na ekranie wyświetl odpowiedź.

#include <iostream>
#include <string>

bool palindrom(std::string str)
{
    int dl = str.size();
    for (int i = 0; i < dl / 2; i++)
    {
        if (str.at(i) == str.at(dl - i - 1))
        {
            return 0;
        }
        else
        {
            break;
            return 0;

        }
    }
    return 1; //true;
}

int main()
{
    std::string tekst = {};
    std::cout << "Podaj tekst: ";
    std::cin >> tekst;

    std::cout << palindrom(tekst);
}
