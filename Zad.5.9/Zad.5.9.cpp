// Zad 5.9


//Napisz funkcję, która dla tablic dwuwymiarowych(wymiary z góry
//założone) typu char, będzie odwracać ich kolejność(element[0, 0]
//zamienia się z elementem ostatnim, element[0, 1] zamienia się z
//przedostatnim itd.)

#include <iostream>

void  reverseArr(char arr[][3])
{

    char resArr[3][3];

    for (int i = 2; i >= 0; --i)
    {
        for (int j = 2; j >= 0; --j)
        {
            resArr[i][j] = arr[i][j];
            std::cout << resArr[i][j];
        }
        std::cout << std::endl;
    }
}



int main()
{
    char arr[3][3] = { {'A','B','C'}, {'D','E', 'F'}, {'G','H','I'} };
    reverseArr(arr);

}
