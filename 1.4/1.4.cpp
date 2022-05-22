//Zad. 1.4
//Utwórz tablicę dwuwymiarową 5x5 typu int, inicjalizując ją
//wartościami.
#include <iostream>

int main()
{
    const int SizeArr = 5;
    int tablicaLiczb[SizeArr][SizeArr] = { 0 };
    int x = 2;
        for (int i = 0; i < SizeArr; i++)
        {
            for (int j = 0; j < SizeArr; j++)
                tablicaLiczb[i][j] = x++;
        }
        for (int i = 0; i < SizeArr; i++)
        {
            for (int j = 0; j < SizeArr; j++)
                std::cout << tablicaLiczb[i][j] << " | ";
            std::cout << std::endl;
        }
}
