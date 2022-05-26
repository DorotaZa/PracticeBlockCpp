// Zad 5.3

//Napisz funkcję, która zamienia wiersze z kolumnami danej tablicy
//(transponuje) i wypisuje tak transponowaną nowoutworzoną tablicę.
//1 2 3
//4 5 6
//7 8 9
//V
//1 4 7
//2 5 8
//3 6 9

#include <iostream>

void transpose3x3Array(int tab[][3])
{
    int res[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = tab[j][i];//zamieniamy wiersze z kolumnami
            std::cout << res[i][j] << "; ";
        }
        std::cout << '\n';
    }
}
int main()
{
    int tab[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    transpose3x3Array(tab);
}