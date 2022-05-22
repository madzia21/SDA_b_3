//Zad. 2.2
//Utwórz 3 zmienne typu int, a następnie przypisz im wartości
//wylosowane z zakresu 1 - 10. Napisz funkcję do losowania w takim
//zakresie.Wszystkie wartości wyświetl.
#include <iostream>

int randomNumbers()
{
    return rand() % 10 + 1;
}
int main()
{
    //srand(time(NULL));
    int a, b, c = 0;
    a = randomNumbers();
    std::cout << a << std::endl;
    b = randomNumbers();
    std::cout << b << std::endl;
    c = randomNumbers();
    std::cout << c << std::endl;
}
