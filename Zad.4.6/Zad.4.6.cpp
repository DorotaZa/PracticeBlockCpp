// Zad.4.6

//Napisz funkcję, która zamienia litery w Stringu na małe, zwraca String.

#include <iostream>
#include <string>

std::string toLowerCase(std::string str) {
    for (int i = 0; i < str.size(); i++)
    {
        str.at(i) = std::tolower(str.at(i));
    }
    return str;
}
int main()
{
    std::cout << toLowerCase("ABcDeF");
}