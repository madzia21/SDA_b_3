#include <iostream>
void displayArrDouble(double p[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            std::cout << p[i][j] << ", ";
        }
        std::cout << std::endl;
    }
}
void fillArrayfrom1To100(double ArrDouble[][10], int x)
{
    double value = 1.0;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            ArrDouble[i][j] = value;
            ++value;
        }
    }
}
void fillArrayRandomValues(double ArrDouble[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            ArrDouble[i][j] = rand();
        }
    }
}
void fillArraySumColumnAndRowDivideBy100(double ArrDouble[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            ArrDouble[i][j] = (static_cast<double>(i) + static_cast<double>(j)) / static_cast<double>(100);
        }
    }
}
void fillArrayWithRandomValuesFromMinus1pointFiveToplus3pointSix(double ArrDouble[][10], int x)
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            ArrDouble[i][j] = rand()%6 -1.5;
        }
    }
}

int main()
{
    srand(time(NULL));
    double ArrDouble[10][10] = { 0 };

    std::cout << "wypełnienie wartościami od 1 do 100: " << std::endl;
    fillArrayfrom1To100(ArrDouble, 10);
    displayArrDouble(ArrDouble, 10);
   
    std::cout << std::endl << "wypełnienie losowymi wartościami: " << std::endl;
    fillArrayRandomValues(ArrDouble, 10);
    displayArrDouble(ArrDouble, 10);
   
    std::cout << std::endl << "wypełnienie sumą numeru wiersza i kolumny podzielonymi przez 100: " << std::endl;
    fillArraySumColumnAndRowDivideBy100(ArrDouble, 10);
    displayArrDouble(ArrDouble, 10);

    std::cout << std::endl << "wypełnienie losowymi wartościami od -1.5 do 3.5: " << std::endl;
    fillArrayWithRandomValuesFromMinus1pointFiveToplus3pointSix(ArrDouble, 10);
    displayArrDouble(ArrDouble, 10);
}
