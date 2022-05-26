// Zad.3.3

//Zrealizuj wielokrotne przeciążenie funkcji multiply, w taki sposób, ażeby umożliwiała przyjmowanie 2, 3, 4 argumentów. Załóżmy typ double.

//Dokonaj przeciążenia funkcji power z zad. 3.1 w taki sposób, ażeby obsługiwane były różne typy danych(int,float, double).

#include <iostream>


double multiply(double a, double b)
{
    return a * b;
}
double multiply(double a, double b, double c)
{
    return a * b * c;
}
double multiply(double a, double b, double c, double d)
{
    return a * b * c * d;
}

int main()
{
    std::cout << multiply(2, 3) << std::endl;;
    std::cout << multiply(2, 3,4) <<std::endl;
    std::cout << multiply(2, 3, 4, 5)<< std::endl;
}