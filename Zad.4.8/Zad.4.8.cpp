// Zad.4.8

//Napisz funkcję, która będzie zamieniać ostatni znak z pierwszym w Stringu.

#include <iostream>
#include <string>

std::string swapFirstWithLastChar2(std::string str)
{
    char c = str.back(); //zapamietujemy na chwile ostatni znak zanim go nadpiszemy
    str.back() = str.front();
    str.front() = c;
    return str;
}

std::string swapFirstAndLast(std::string str)
{
    std::swap(str.front(), str.back());
    return str;
}

int main()
{
    std::cout << swapFirstAndLast("BarbakaN") << std::endl;
    std::cout << swapFirstWithLastChar2("SwappinG") << std::endl;
}
