//Zad. 5.3
//Napisz funkcję, która zamienia wiersze z kolumnami danej tablicy
//(transponuje) i wypisuje tak transponowaną nowoutworzoną tablicę.
#include <iostream>
void fillArrayWithRandomValuesFrom1To100(int ArrInt[][10], int x)
{
    int number = 1;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            ArrInt[i][j] = number;
            number++;
        }
    }
}
void displayArray(int ArrInt[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            std::cout << ArrInt[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}
void pivoting(int ArrInt[][10], int x)
{
    int temp[10][10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            temp[j][i] = ArrInt[i][j];
        }
    }
    displayArray(temp, 10);
}
int main()
{
    int ArrInt[10][10] = { 0 };
    std::cout << "Wypełnienie tablicy wartościami od 1 do 100: " << std::endl;
    fillArrayWithRandomValuesFrom1To100(ArrInt, 10);
    displayArray(ArrInt, 10);
    pivoting(ArrInt, 10);
}
