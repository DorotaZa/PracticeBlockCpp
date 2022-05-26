// Zad.5.1

//Dla 20 - to elementowej tablicy losowych liczb całkowitych(zakres 1 - 10), wypisz:
//a) Wszystkie od początku;
//b) Wszystkie od końca;
//c) Wszystkie na nieparzystych pozycjach;
//d) Co 3 liczbę;
//e) Sumę wszystkich;
//f) Sumę ostatnich 5 większych od 3;
//g) Ilość liczb z początku tablicy których suma przekracza 10;
//h) Co n - tą liczbę;
//i) Podzielne przez m;
//j)* Które liczby iterując od początku tablicy dadzą sumę równą 10 ? Wypisz te liczby i ich
//indeksy.Czy możliwe są różne kombinacje?

#include <iostream>
#include <time.h>
#include "Zad5_1solution.h"

int main()
{
    const int size = 20;
    int arr[size];

    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 10 + 1;
    }

    taskA(arr, size);
    taskB(arr, size);
    taskC(arr, size);
    taskD(arr, size);
    taskE(arr, size);
    taskF(arr, size);
    taskG(arr, size);
    taskH(arr, size);
    taskI(arr, size);
    //taskJ(arr, size);

}