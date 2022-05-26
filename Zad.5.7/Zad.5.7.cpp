// Zad.5.7

//Napisz funkcję, która przyjmie od użytkownika szerokość i wysokość, a następnie narysuje
//szachownice o podanych wymiarach.Pola muszą mieć naprzemiennie różne „kolory”, wykorzystaj w
//tym celu różne symbole(np.o i #).Wymiar pola powinien wynosić minimum a) 1x1; b) 2x2 znaki.
//Standardowa szachownica posiada 8x8 pól. (Funkcja z argumentem domyślnym)
//o#o#
//#o#o(pole ma wymiar 1x1)
//o#o#
//#o#o
//oo##oo##
//oo##oo##
//##oo##oo(pole ma wymiar 2x2


#include <iostream>


//rysowanie szachownicy pola maja wymiar 1x1
void drawBoard(int a = 8)
{
    for (int i = 0; i < a; i++) { //przechodzimy po wszystkich wierszach
        for (int j = 0; j < a; j++) {//przechodzimy po wszystkich znakach
            if ((i + j) % 2 == 0) { //i+j bo kolejne znaki w kolejnych wierszach maja byc rysowane na przemian
                std::cout << "#";
            }
            else {
                std::cout << "o";
            }
        }
        std::cout << std::endl;
    }
}


//rysowanie szachownicy pola maja wymiar 1x1 v2
void drawChessboardv2(int size)
{
    //^ - XOR - alternatywa wykluczajaca
    // 00 -> 0
    // 01 -> 1
    // 10 -> 1
    // 11 -> 0
    for (unsigned y = 0; y < size; ++y) {
        for (unsigned x = 0; x < size; ++x) {
            if ((y % 2) ^ (x % 2)) {
                std::cout << "o";
            }
            else {
                std::cout << "#";
            }
        }
        std::cout << '\n';
    }
}


//rysowanie szachownicy pola maja wymiar 2x2
void drawBoard2x2(int a = 8) {
    for (int i = 0; i < a; i++) {//rysowanie pol w pionie
        for (int m = 0; m < 2; m++)//podwajanie wierszy, dzieki temu nasze pole zajmuje 2 miejsca w pionie
        {
            for (int j = 0; j < a; j++) {//rysowanie pol w poziomie
                for (int k = 0; k < 2; k++)//podwajanie znakow, dzieki temu nasze pole zajmuje 2 miejsca w poziomie
                {
                    if ((i + j) % 2 == 0) { //warunek zostaje taki sam, ale teraz analizuje pozycje pola a nie konkretnego
                        std::cout << "#";
                    }
                    else {
                        std::cout << "o";
                    }
                }
            }
            std::cout << std::endl;
        }
    }
}

int main()
{
    drawBoard();
    std::cout << std::endl;
    drawChessboardv2(8);
    std::cout << std::endl;
    drawChessboardv2(9);
    std::cout << std::endl;
    drawBoard2x2();
    std::cout << std::endl;
    drawBoard2x2(4);
    std::cout << std::endl;
}