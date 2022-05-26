//* Zad.7.7-ternary

//Zapisz w jednej linijce instrukcję warunkową, która będzie zwracać 7
//gdy dana wielkość jest równa bądź większa niż 7, w przeciwnym
//przypadku zwraca 0.

#include <iostream>

int main()
{
    double n = 0;
    std::cout << "Enter the number: " << std::endl;
    std::cin >> n;

    std::string result = (n >= 7) ? "You entered the number greater or equal 7." : "You entered the number smaller than 7.";
    //std::string result = (n >= 7) ? "7" : "0";
    std::cout << result;

}

