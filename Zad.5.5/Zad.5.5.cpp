// Zad 5.5 


#include <iostream>

// HALF PYRAMID
void figureHalfPyramid(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


// VERTICALLY INVERTED HALF PYRAMID
void figureHalfPyramidVI(int size)
{
    for (int i = 0; i <= size; ++i)
    {
        for (int j = i; j < size ; ++j)
        {
            std::cout << " ";
        }
        for (int j = 0; j < i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


// HORIZONTALLY INVERTED HALF PYRAMID
void figureHalfPyramidHI(int size)
{
    for (int i = size; i >= 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// VERTICALLY HORIZONTALLY INVERTED HALF PYRAMID
//void figureHalfPyramidVhi(int size)
//{
//    for (int i = size; i >= 0; --i)
//    {
//        for (int j = 0; j < i; ++j)
//        {
//            std::cout << " ";
//        }
//        for ( int j = )
//        std::cout << std::endl;
//    }
//    std::cout << std::endl;
//}

// DIAGONAL
void figureDiagonal(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }
    std::cout << std::endl;
}

//EMPTY SQUARE

void figureHollowSquare(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

//X

void figureX(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (j == i || j == size - i - 1)
            {
                std::cout << "*";
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

//PYRAMID

//void figurePyramid(int size)
//{
//    for (int i = 0; i < size; ++i)
//    {
//        for (int j = 0; j < size; ++j)
//        {
//            if (j <= (2 * i - 1))
//            {
//                std::cout << " ";
//            }
//        }
//        std::cout << "*" << std::endl;
//    }
//    std::cout << std::endl;
//}

// PYRAMID - my way (2x half)

void figurePyramid(int size)
{
    for (int i = 0; i <= size; ++i)
    {
        for (int j = i; j < size; ++j)
        {
            std::cout << " ";
        }
        for (int j = 0; j < i; ++j)
        {
            std::cout << "*";
        }

        for (int j = 0; j <= i; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    figureHalfPyramid(10);
    figureHalfPyramidVI(10);
    figureHalfPyramidHI(10);
    //figureHalfPyramidVhi(10);
    figureDiagonal(10);
    figureHollowSquare(10);
    figureX(10);
    figurePyramid(10);
}
