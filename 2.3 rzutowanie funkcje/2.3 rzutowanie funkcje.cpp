//Zad. 2.3
//Utwórz funkcje dodawania przyjmującą jako argument short int, oraz
//zwracającą short int, int, long long int, double.Przetestuj jej działanie
//podając różne typy parametrów.Jak zachowuje się kompilator ? Jak
//wygląda kwestia rzutowania ?
#include <iostream>
short int additionShortInt(short int number1)
{
    std::cout << std::endl;
    return number1;
}
int additionInt(short int number1)
{
    std::cout << std::endl;
    return number1;
}
long long int additionLongLongInt(short int number1)
{
    std::cout << std::endl;
    return number1;
}
double additionDouble(short int number1)
{
    std::cout << std::endl;
    return number1;
}
int main()
{
    //utrata nastepuje przy wejściu do short inta
    // short int ma tylko 65 535 , taką pojemność, jeśli wprowadzimy liczbę wielokrotnie większą to zegar będzie się kręcił od zera do 65 000
    // np.: 459 245 (7 * 65 535 + 500)
    //std::cout << "Podaj dwie liczby: ";
    //short int a, b = 0;
    //std::cin >> a >> b;
    std::cout <<"additionShortInt(30000):" << additionShortInt(30000);
    std::cout << "additionInt(32768.89):" <<additionInt(32768.99);
    std::cout << "additionLongLongInt(459 245):" << additionLongLongInt(459245);
    std::cout << "additionDouble(555555555.999999999999999999999):" << additionDouble(555555555.999999999999999999999);

}
