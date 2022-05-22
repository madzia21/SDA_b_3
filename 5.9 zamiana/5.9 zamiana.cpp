#include <iostream>
void displayArr_5_(char arr[][5], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void fillArray_5_(char arr1[][5], int size, char sign)
{
    char value = sign;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            arr1[i][j] = value;
            value++;
        }
    }   
}
void displayArr_4_(char arr[][4], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void fillArray_4_(char arr1[][4], int size, char sign)
{
    char value = sign;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            arr1[i][j] = value;
            value++;
        }
    }
}

void swapC(char arr[][5], int size)
{
    char temp;
    int a = 0;
   
        for (int i = 0; i < size / 2; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                temp = arr[i][j];
                arr[i][j] = arr[size - i - 1][size - j - 1];
                arr[size - i - 1][size - j - 1] = temp;
            }
            a++;
            if (a == (size / 2) && (size%2))
            {
                for (int j = 0; j < size / 2; ++j)
                {
                    temp = arr[a][j];
                    arr[a][j] = arr[size - a - 1][size - j - 1];
                    arr[size - a - 1][size - j - 1] = temp;
                }
            }
        }  
}
void swapD(char arr[][4], int size)
{
    char temp;
    int a = 0;

    for (int i = 0; i < size / 2; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            temp = arr[i][j];
            arr[i][j] = arr[size - i - 1][size - j - 1];
            arr[size - i - 1][size - j - 1] = temp;
        }
        a++;
        if (a == (size / 2)&& (size%2))
        {
            for (int j = 0; j < size / 2; ++j)
            {
                temp = arr[a][j];
                arr[a][j] = arr[size - a - 1][size - j - 1];
                arr[size - a - 1][size - j - 1] = temp;
            }
        }
    }
}

int main()
{
    const int as = 5;
    char arr1[as][as] = { 0 };
    fillArray_5_(arr1, as, 'a');
    std::cout << "Wyświetl tablicę 5- elementową przed zamianą:" << std::endl;
    displayArr_5_(arr1, as);
    swapC(arr1, as);
    std::cout << "Wyświetl tablicę 5- elementową po zamianie:" << std::endl;
    displayArr_5_(arr1, as);
    // 
    const int as_4 = 4;
    char arr2[as_4][as_4] = { 0 };
    fillArray_4_(arr2, as_4, 'a');
    std::cout << "Wyświetl tablicę 4- elementową przed zamianą:" << std::endl;
    displayArr_4_(arr2, as_4);
    swapD(arr2, as_4);
    std::cout << "Wyświetl tablicę 4- elementową po zamianie:" << std::endl;
    displayArr_4_(arr2, as_4);

    
}


//
//void swapA(char arr[][4], int size)
//{
//    char temp;
//    int a = 0;
//    if (size % 2)
//    {
//        for (int i = 0; i < size / 2; ++i)
//        {
//            for (int j = 0; j < size; ++j)
//            {
//                temp = arr[i][j];
//                arr[i][j] = arr[size - i - 1][size - j - 1];
//                arr[size - i - 1][size - j - 1] = temp;
//            }
//            a++;
//            if (a == (size / 2))
//            {
//                for (int j = 0; j < size / 2; ++j)
//                {
//                    temp = arr[a][j];
//                    arr[a][j] = arr[size - a - 1][size - j - 1];
//                    arr[size - a - 1][size - j - 1] = temp;
//                }
//            }
//        }
//    }
//    else
//    {
//        for (int i = 0; i < size / 2; ++i)
//        {
//            for (int j = 0; j < size; ++j)
//            {
//                temp = arr[i][j];
//                arr[i][j] = arr[size - i - 1][size - j - 1];
//                arr[size - i - 1][size - j - 1] = temp;
//            }
//        }
//    }
//
//}
//void swapB(char arr[][5], int size)
//{
//    char temp;
//    int a = 0;
//    if (size % 2)
//    {
//        for (int i = 0; i < size / 2; ++i)
//        {
//            for (int j = 0; j < size; ++j)
//            {
//                temp = arr[i][j];
//                arr[i][j] = arr[size - i - 1][size - j - 1];
//                arr[size - i - 1][size - j - 1] = temp;
//            }
//            a++;
//            if (a == (size / 2))
//            {
//                for (int j = 0; j < size / 2; ++j)
//                {
//                    temp = arr[a][j];
//                    arr[a][j] = arr[size - a - 1][size - j - 1];
//                    arr[size - a - 1][size - j - 1] = temp;
//                }
//            }
//        }
//    }
//    else
//    {
//        for (int i = 0; i < size / 2; ++i)
//        {
//            for (int j = 0; j < size; ++j)
//            {
//                temp = arr[i][j];
//                arr[i][j] = arr[size - i - 1][size - j - 1];
//                arr[size - i - 1][size - j - 1] = temp;
//            }
//        }
//    }
//
//}

