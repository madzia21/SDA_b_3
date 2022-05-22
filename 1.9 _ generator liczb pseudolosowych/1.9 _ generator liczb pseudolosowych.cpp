//Zad. 1.9
//Używając pętli while losuj liczby, aż do uzyskania liczby mniejszej niż
//0.03.Wszystkie liczby wyświetlaj.Wyświetl liczbę losowań.
#include <iostream>
#include <time.h>

int main()
{
    srand(time(NULL));
    float number = 0;
    do
    {
        number = rand()/static_cast<float>(1000);
        std::cout << number << std::endl;
    }
    while (number > 0.03);
    
}
