//1.1
//Zadeklaruj trzy zmienne liczbowe(całkowite) i przypisz im wartości.
//Następnie wypisz wartość największej z nich.
#include <iostream>
int compareThreeNumbersVersion1(int number_one, int number_two, int number_three)
{
    if (number_one > number_two)
    {
        if (number_one > number_three)
            return number_one;
        else
            return number_three;
    }
    else if (number_two > number_three)
        return number_two;
    else
        return number_three;
}
int compareThreeNumbersVersion2(int number_one, int number_two, int number_three)
{
    if (number_one > number_two && number_one > number_three)
    {
        return number_one;
    }
    else if (number_two > number_three)
        return number_two;
    else
        return number_three;
}


int main()
{
    std::cout << "Która liczba jest największa: 1,2,3? " << compareThreeNumbersVersion1(1, 2, 3);
    std::cout << std::endl;
    std::cout << "Która liczba jest największa: 2,3,1? " << compareThreeNumbersVersion1(2, 3, 1);
    std::cout << std::endl;
    std::cout << "Która liczba jest największa: 3,2,1? " << compareThreeNumbersVersion1(3, 2, 1);
    std::cout << std::endl;
    //
    std::cout << "Która liczba jest największa: 1,2,3? " << compareThreeNumbersVersion2(1, 2, 3);
    std::cout << std::endl;
    std::cout << "Która liczba jest największa: 2,3,1? " << compareThreeNumbersVersion2(2, 3, 1);
    std::cout << std::endl;
    std::cout << "Która liczba jest największa: 3,2,1? " << compareThreeNumbersVersion2(3, 2, 1);
    std::cout << std::endl;
}