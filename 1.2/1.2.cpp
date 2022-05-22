//Zad. 1.2
//Sprawdź, czy wartość przypisana zmiennej jest parzysta, czy nie
//(wypisz na ekranie odpowiedni komunikat).
#include <iostream>
void jestParzystaCzyNieparzysta(int x)
{
    if (x % 2)
    {
        std::cout << "Niepaczysta";
    }
    else
        std::cout << "Parzysta";
    std::cout << std::endl;
}
void jestParzystaCzyNieparzysta1(int x)
{
    (x % 2) ? (std::cout << "Niepaczysta") : (std::cout << "Parzysta");
    std::cout << std::endl;
}
int main()
{
    std::cout << "Podaj liczbę: " << std::endl;
    int x = 0;
    std::cin >> x;
    jestParzystaCzyNieparzysta(x);
    jestParzystaCzyNieparzysta1(x);
}
