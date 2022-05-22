//Zad. 5.10
//Napisz funkcję, która dodaje dwie macierze(takiej samej wielkości), nic
//nie zwraca, a wynik pokazuje na ekranie.

#include <iostream>
void fillArrayWithRandomValuesFrom1T010(int arr[][3], int x)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            arr[i][j] = rand() % 10 + 1;
        }
    }
}
void displayArray(int arr[][3], int x)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            std::cout << arr[i][j] << ", \t";
        }
        std::cout << std::endl;
    }
}
void sumTwoArr(int arr1[][3], int arr2[][3], int x)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            std::cout << arr1[i][j] + arr2[i][j] << ",\t ";
        }
        std::cout << std::endl;
    }
}
void multiplyTwoArr(int arr1[][3], int arr2[][3], int x)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            std::cout << arr1[i][j] * arr2[i][j] << ",\t ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    srand(time(NULL));
    const int size = 3;
    int arr1[size][size] = { 0 };
    int arr2[size][size] = { 0 };
    std::cout << "Tablica 1:" << std::endl;
    fillArrayWithRandomValuesFrom1T010(arr1, size);
    displayArray(arr1, size);
    std::cout << "Tablica 2:" << std::endl;
    fillArrayWithRandomValuesFrom1T010(arr2, size);
    displayArray(arr2, size);
    std::cout << "Suma poszczególnych pól obu tablic:" << std::endl;
    sumTwoArr(arr1, arr2, size);
    std::cout << "Iloczyn wartości z poszczególnych pól obu tablic:" << std::endl;
    multiplyTwoArr(arr1, arr2, size);
}
