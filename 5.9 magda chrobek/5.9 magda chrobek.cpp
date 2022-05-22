// Zadanie5.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void revertCharArray(char tab[][4])
{
    char findings[4][4];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            findings[i][j] = tab[4 - i - 1][4 - j - 1];
            std::cout << findings[i][j];
        }
        std::cout << std::endl;
    }

}

int main()
{
    const int size = 4;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'g', 'h', 'i'},
      {'j', 'k', 'l'}
    };

    revertCharArray(tab);
}