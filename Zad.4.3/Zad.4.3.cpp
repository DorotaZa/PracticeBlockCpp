// Zad.4.3

//Sprawdź czy nazwa kraju rozpoczyna się z wielkiej litery. (napisz funkcję)

#include <iostream>
#include <string>

bool ifCountryNameBeginsWithCapitalLatter(std::string a)
{
    if (a[0] >= 65 && a[0] <= 90)
    {
        std::cout << "Nazwa kraju rozpoczyna się od wielkiej litery." << std::endl;
        return true;
    }
    if (a[0] > 90)
        std::cout << "Nazwa kraju NIE rozpoczyna sie od wielkiej litery." << std::endl;
    return false;
}
int main()
{
    std::cout << ifCountryNameBeginsWithCapitalLatter("Albania") << std::endl;
    std::cout << ifCountryNameBeginsWithCapitalLatter("albania") << std::endl;
}