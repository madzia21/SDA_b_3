//Zad. 1.1
//Zadeklaruj trzy zmienne liczbowe(całkowite) i przypisz im wartości.
//Następnie wypisz wartość największej z nich.
#include <iostream>

int main()
{
    int a(5), b(11), c(2);
    if (a > b)
    {
        if (a > c)
            std::cout << a;
        else
            std::cout << c;
    }
    else if (b > c)
        std::cout << b;
    else
        std::cout << c;
}
