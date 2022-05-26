// Zad.2.4

//Sprawdź czy podany numer telefonu użytkownika jest prawidłowy
//(musi zawierać 8 cyfr i nie może zaczynać się na 0).

#include <iostream>
#include <string>

bool checkString (std::string number) //sprawdzanie czy podany znak jest cyfra
{
    //bool result = true;
    for (int i = 0; i < number.length(); ++i)
    {
        if (!(number[i] >= '0' && number[i] <= '9'))
        {
            //result = false;
            return 0;
        }
    }
    //return result;
    return 1;
}

int main()
{
    std::string number;
    std::cout << "Enter your phone number: " << std::endl;
    std::cin >> number;

    int numOfFigures = number.length();
    bool checkNum = checkString(number);

    if (numOfFigures == 8 && number[0] != '0' && checkNum == true)
    {
        std::cout << "Your number is correct." << std::endl;
    }
    else
    {
        std::cout << "Your number is incorrect." << std::endl;
    }
}