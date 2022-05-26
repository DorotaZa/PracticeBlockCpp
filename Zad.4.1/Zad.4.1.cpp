// Zad.4.1

//Znajdź w internecie stronę zawierającą deskrypcję podstawowych
//funkcji, oraz klas c++, a następnie otwórz opis klasy string.Czy
//rozumiesz opis poszczególnych metod(większości) ? Czy wiesz jak
//wywoływać poszczególne metody ? Czym różni się metoda od
//funkcji ? Przetestuj metodę size().

#include <iostream>
#include <string>

int main()
{
    std::string str = {"Kurs SDA"};
    std::cout << str.size() << std::endl;
    std::cout << str.length() << std::endl;
}

