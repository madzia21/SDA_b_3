//Zad. 1.6
//Napisz program, który poda w jaki sposób wypłacić daną kwotę
//korzystając z możliwie najmniejszej liczby banknotów i monet.Kwota
//ma być pobierana od użytkownika, zaś wynik wyświetlany na ekranie.
//Sprawdzaj czy użytkownik wprowadza poprawną kwotę(do grosza,
//    powyżej zera).

#include <iostream>
void howManyBanknotes(float amount)
{
    //float amount = amount1;
    std::cout << amount << std::endl;
    float tablica[15] = { 500.0f, 200.0f, 100.0f, 50.0f, 20.0f, 10.0f, 5.0f, 2.0f, 1.0f, 0.5f, 0.2f, 0.1f, 0.05f, 0.02f, 0.01f };
    float tablicaWynikow[15];
    for (int i = 0; i < 15; ++i)
    {
        tablicaWynikow[i] = 0;
    }
    for (int i = 0; i < 15; ++i)
    {
        int counter = 0;

        while (amount - tablica[i] >= 0)
        {
            amount = amount - tablica[i];
            counter++;
            amount = round(amount * 100) / 100;
        }
        tablicaWynikow[i] = counter;
    }
    for (int i = 0; i < 15; ++i)
    {
        std::cout << tablica[i] << ", " << tablicaWynikow[i] << std::endl;
    }
}
int main()
{
    float amount = 123.45f;
    howManyBanknotes(amount);
}
