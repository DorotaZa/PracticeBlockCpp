//Zad.1.1

//Zadeklaruj trzy zmienne liczbowe (całkowite) i przypisz im wartości.
//stępnie wypisz wartość największej z nich.

#include <iostream>

int main()
{
    int num1 = 13;
    int num2 = 7;
    int num3 = 3;

    if ((num1 > num2) && (num1 > num3))
    {
        std::cout << "max = " << num1 << std::endl;
    }
    else if ((num2) > (num3))
    {
        std::cout << "max = " << num2 << std::endl;
    }
    else
    {
        std::cout << "max = " << num3 << std::endl;
    }

}

    //MAX using array

//int main()
//{
//    const int size = 3;
//    int numbers[size] = { -2,-15,-5 };
//    int max = 0;
//
//    for (int i = 1; i < size; ++i)
//    {
//        if (numbers[i] > numbers[max])
//        {
//            max = i;
//        }
//
//    }
//    std::cout << "Max number is: " << numbers[max];
//}
//
