//Zad. 1.3
//Sprawdź, czy wartość zmiennej pobranej od użytkownika jest
//większa, mniejsza, czy równa zero(wypisz na ekranie odpowiedni
//    komunikat).
#include <iostream>
void isGreaterOrLesserThenZero(int x)
{
    if (x == 0)
        std::cout << "Równa zero";
    else if (x > 0)
        std::cout << "Większa od zera";
    else
        std::cout << "Mniejsza od zera";
}
int main()
{
    std::cout << "Podaj liczbę: " << std::endl;
    int x = 0;
    std::cin >> x;
    isGreaterOrLesserThenZero(x);
}