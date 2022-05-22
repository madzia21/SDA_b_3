//Zad. 2.8
//Stwórz program, który poprosi użytkownika o podanie wartości
//liczbowej.Następnie program wypisze wszystkie liczby naturalne, aż
//do zadanej.
#include <iostream>
void displayNaturalNumbers(double number)
{
    for (int i = 0; i <= static_cast<int>(number); ++i)
    {
        if (!(i % 10))
            std::cout << std::endl;
        std::cout << i << ", ";
    }
}
void displayNaturalNumbers(int number)
{
    for (int i = 0; i <= static_cast<int>(number); ++i)
    {
        if (!(i % 10))
            std::cout << std::endl;
        std::cout << i << ", ";
    }
}
int main()
{
    std::cout << "Enter number: ";
    double number = 0.0;
    std::cin >> number;
    displayNaturalNumbers(number);
}
