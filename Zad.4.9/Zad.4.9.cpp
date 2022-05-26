// Zad.4.9

//Napisz funkcję, która będzie przyjmować tablicę stringów, oraz zwracać pojedynczy string(po scaleniu).
//Niech dodatkowym argumentem będzie znak umieszczany pomiędzy łączonymistringami.Zastosuj wartość domyslna znaku laczenia jako ’\n’.

#include <iostream>
#include <string>

std::string concatenateStrings(std::string s[], int size, char c = '\n')

{
    std::string str;

    for (int i = 0; i < size; ++i)
    {
        str += s[i] + c;
    }

    return str;
}


int main()
{
    std::string s1[2] = { "abcdef", "ghijkl" };
    std::string s2[3] = { "abcdef", "ghijkl", "mnoprs" };
    std::cout << concatenateStrings(s1, 2) << std::endl;;
    std::cout << concatenateStrings(s2, 3, '!') << std::endl;
}