#include <iostream>
#include <time.h>
int * createArray()
{
    const int ArrSize = 20;
    int NumberTable[ArrSize] = { 0 };
    for (int i = 0; i < ArrSize; ++i)
    {
        NumberTable[i] = rand() % 10 + 1;
    }
    return NumberTable;
}
void displayArrItemsFromBegining(int* p, int ArrSize)
{
    std::cout << "Wszystkie od początku: " << std::endl;
    for (int i = 0; i < ArrSize; ++i)
    {
        std::cout << p[i] << "; ";
    }
    std::cout << std::endl;
}
void TdisplayArrItemsFromBegining(int arr[], int ArrSize)
{
    std::cout << "Wszystkie od początku: " << std::endl;
    for (int i = 0; i < ArrSize; ++i)
    {
        std::cout << arr[i] << ",  ";
    }
    std::cout << std::endl;
}
void displayArrItemsFromEnd(int* p, int ArrSize)
{
    std::cout << "Wszystkie od końca: " << std::endl;
    for (int i = ArrSize-1; i >= 0; --i)
    {
        std::cout << p[i] << ",  ";
    }
    std::cout << std::endl;
}
void evenNumbers(int* p, int ArrSize)
{
    std::cout << "Wszystkie na nieparzystych pozycjach: " << std::endl;
    for (int i = 0; i < ArrSize; ++i)
    {
        if (i%2)
        std::cout << "[ " << i << " ]" << p[i] << ",  ";
    }
    std::cout << std::endl;
}
void displayEvery3Number(int* p, int ArrSize)
{
    std::cout << "Co 3 liczbę: " << std::endl;
    for (int i = 0; i < ArrSize;)
    {
        std::cout << p[i] << ",  ";
        i = i + 3;
    }
    std::cout << std::endl;
}
void displaySumItems(int* p, int ArrSize)
{
    std::cout << "Sumę wszystkich: " << std::endl;
    int sum = 0;
    for (int i = 0; i < ArrSize; ++i)
    {
        sum += p[i];
    }
    std::cout << sum << std::endl;
}
void displaySumofItems(int* arr, int ArrSize)
{
    std::cout << "Sumę wszystkich: " << std::endl;
    int sum = 0;
    for (int i = 0; i < ArrSize; ++i)
    {
        sum += arr[i];
    }
    std::cout << sum << std::endl;
}
void displaySumLast5GreaterThan3(int* p, int ArrSize)
{
    std::cout << "Sumę ostatnich 5 większych od 3: " << std::endl;
    int sum = 0;
    int counter = 0;
    for (int i = ArrSize - 1; i >= 0; --i)
    {
        if (p[i] > 3 && counter < 5)
        {
            sum += p[i];
            counter++;
        }
    }
    std::cout << sum << std::endl;
}
void displaySumLast5GreaterThan3zZajec(int* p, int ArrSize)
{
    std::cout << "Sumę ostatnich 5 większych od 3: " << std::endl;
    int sum = 0;
    int counter = 0;
    for (int i = ArrSize - 5; i >= 0; --i)
    {
        //if (p[i] > 3 && counter < 5)
        //{
        //    sum += p[i];
        //    counter++;
        //}
    }
    std::cout << sum << std::endl;
}
void displayEvery_n_Number(int* p, int ArrSize, int n)
{
    std::cout << "Co 3 liczbę: " << std::endl;
    for (int i = 0; i < ArrSize;)
    {
        std::cout << p[i] << ",  ";
        i = i + n;
    }
    std::cout << std::endl;
}
void displayDividedBy_n(int* p, int ArrSize, int n)
{
    std::cout << "Podzielne przez  " << n << ": " << std::endl;
    for (int i = 0; i < ArrSize; ++i)
    {
        if (!(p[i]%n))
        std::cout << "[ " << i << " ]" << p[i] << ",  ";
    }
    std::cout << std::endl;
}
void displayArrItemsFromBeginingSumGreaterThan10(int* p, int ArrSize)
{
    std::cout << "Ilość liczb z początku tablicy których suma przekracza 10: " << std::endl;
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < ArrSize; ++i)
    {
            sum = p[i] + p[i+1];
            if (sum >= 10)
            {
                std::cout << p[i] << " + " << p[i + 1] << " = " << sum;
                counter += 2;
                std::cout << " {" << counter << " liczby)" << std::endl;
            }
    }
    std::cout << std::endl;
}
void taskG(int arr[], int ArrSize)
{
    std::cout << "Ilość liczb z początku tablicy których suma przekracza 10: " << std::endl;
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < ArrSize; ++i)
    {
        sum += arr[i];
        counter++;
        if (sum >= 10)
        {
            std::cout << counter;
            break;
        }
    }
    std::cout << std::endl;
}
void displayArrItemsFromBeginingSumEquals10(int* p, int ArrSize)
{
    std::cout << "Liczby, które dadzą sumę 10: " << std::endl;
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < ArrSize; ++i)
    {
        for (int j = 1; j < ArrSize; ++j)
        {
            sum = p[i] + p[j];
            if (sum == 10)
       {
           std::cout << p[i] << "[ " << i << " ] + " << p[j] << " [" << j << "] = " << sum << std::endl;
       }
        }
    }
    std::cout << std::endl;
}

int main()
{
    // g) i j) nie zrobiłam
    srand(time(NULL));
    const int ArrSize = 20;
    int NumberTable[ArrSize] = { 0 };
    for (int i = 0; i < ArrSize; ++i)
    {
        NumberTable[i] = rand() % 10 + 1;
    }
    taskG(NumberTable, 20);
    displayArrItemsFromBeginingSumGreaterThan10(NumberTable, 20);
    displayArrItemsFromBeginingSumEquals10(NumberTable, 20);
    displayArrItemsFromBegining(NumberTable, 20);  
    displayArrItemsFromEnd(NumberTable, 20);
    evenNumbers(NumberTable, 20);
    displayEvery3Number(NumberTable, 20);
    displaySumItems(NumberTable, 20);
    displaySumofItems(NumberTable, 20);
    displaySumLast5GreaterThan3(NumberTable, 20);
    displayEvery_n_Number(NumberTable, 20, 5);
    displayDividedBy_n(NumberTable, 20, 5);
}
