// Zad.7.1

//Napisz funkcję do obliczania najmniejszej wspólnej wielokrotności.



#include <iostream>




int nwdFunction(int a, int b)
{
    if (a == b)
    {
        return a; //lub b nie ma znaczenia sa rowne 
    }


    if (a % b == 0)
    {
        return b;
    }

    if (b % a == a)
    {
        return a;
    }

    int nwd = 1;

    if (a > b)
    {
        //10/2=5
        //11/2=5
        for (int i = 2; i <= b / 2; i++)
        {
            if (a % i == 0 && b % i == 0) //tu sorawdzamy czy i idzieli a i b
            {
                nwd = i;
            }
        }
    }
    else
    {
        for (int i = 2; i <= a / 2; i++)
        {
            if (a % i == 0 && b % i == 0) //tu sorawdzamy czy i idzieli a i b
            {
                nwd = i;
            }
        }
    }
    return nwd;
}


int nwwFunction(int a, int b)
{
    int result = (a * b) / nwdFunction(a, b);
    return result;
}





int main()
{
    std::cout << nwdFunction(10, 24) << std::endl;
    std::cout << nwdFunction(12, 24) << std::endl;
    std::cout << nwdFunction(24, 24) << std::endl;
    std::cout << nwdFunction(56, 36) << std::endl;

    std::cout << nwwFunction(10, 24) << std::endl;
    std::cout << nwwFunction(12, 24) << std::endl;
    std::cout << nwwFunction(24, 24) << std::endl;
    std::cout << nwwFunction(56, 36) << std::endl;
}
