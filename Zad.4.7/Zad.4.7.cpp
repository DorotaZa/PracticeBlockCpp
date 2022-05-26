// Zad.4.7

//Napisz funkcję, która będzie zamieniać znaki od 3 do 6 w Stringu na „abcd”.

//string & replace(size_t pos, size_t len, const string & str);

#include <iostream>
#include <string>

std::string replaceChar(std::string str)
{
    str.replace(3, 4, "abcd");
    return str;
}

int main()
{
    std::cout << replaceChar("Anakonda") << std::endl;
}
