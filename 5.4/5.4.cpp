//Zad. 5.4
//Utwórz tablicę dwuwymiarową 10x10 typu int, a następnie wypełnij ją
//wartościami losowanymi w przedziale 0 - 9. Napisz funkcję, która będzie
//wyszukiwać wszystkie pary takich samych liczb stojących obok siebie :
//a) w poziomie;
//b) w pionie;
//c) w poziomie i pionie;
//d)* w poziomie, pionie i po skosie.

#include <iostream>
void fillArrayWithRandomValuesFromZeroToNine(int ArrInt[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            ArrInt[i][j] = rand() % 10;
        }
    }
}
void displayArray(int ArrInt[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "[ " << i << " ] :  ";
        for (int j = 0; j < x; ++j)
        {
            std::cout << ArrInt[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}
void displayPairValusInRow(int ArrInt[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        bool mark = false;
        for (int j = 0; j < x; ++j)
        {
            if (ArrInt[i][j] == ArrInt[i][j + 1])
            {
                std::cout << "[ " << i << " ]" << ArrInt[i][j] << ", " << ArrInt[i][j + 1] << " || ";
                mark = true;
            }
        }
        if (mark)
            std::cout << std::endl;
    }
}
void displayPairValuesInCollumn(int ArrInt[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        bool mark = false;
        for (int j = 0; j < x; ++j)
        {
            if (ArrInt[j][i] == ArrInt[j + 1][i])
            {
                std::cout << "[ " << i << " ]" << ArrInt[j][i] << ", " << ArrInt[j + 1][i] << " || ";
                mark = true;
            }
        }
        if (mark)
            std::cout << std::endl;
    }
}
void displayPairValuesInRowAndCollumn(int ArrInt[][10], int x)
{
    displayPairValusInRow(ArrInt, 10);
    displayPairValuesInCollumn(ArrInt, 10);
}
void displayPairValuesDiagonally(int ArrInt[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        bool mark = false;
        for (int j = 0; j < x; ++j)
        {
            if (ArrInt[i][j] == ArrInt[i + 1][j + 1])
            {
                std::cout << "[ " << i << " ]" << ArrInt[i][j] << ", " << ArrInt[i + 1][j + 1] << " || ";
                mark = true;
            }
        }
        if (mark)
            std::cout << std::endl;
    }
}
int main()
{
    int ArrInt[10][10] = { 0 };
    srand(time(NULL));
    fillArrayWithRandomValuesFromZeroToNine(ArrInt, 10);
    displayArray(ArrInt, 10);

    std::cout << "wyswietlenie par takich samych liczb stojących w poziomie obok siebie:" << std::endl;
    displayPairValusInRow(ArrInt, 10);
    std::cout << "wyswietlenie par takich samych liczb stojących w pionie jedna nad drugą:" << std::endl;
    displayPairValuesInCollumn(ArrInt, 10);
    std::cout << "wyswietlenie par takich samych liczb stojących w pionie i poziomie obook siebie:" << std::endl;
    displayPairValuesInRowAndCollumn(ArrInt, 10);
    std::cout << "wyswietlenie par takich samych liczb stojących obok siebie po skosie:" << std::endl;
    displayPairValuesDiagonally(ArrInt, 10);

}