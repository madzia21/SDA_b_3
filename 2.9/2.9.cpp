//Zad. 2.9
//Stwórz zmienną typu float, przypisz jej jakąś wartość, a następnie
//zrzutuj tą wartość na zmienną typu int.Postąp analogicznie z typami
//double / float.
#include <iostream>

int main()
{
    float a = 1.1;
    int b = static_cast<int>(a);
    std::cout << a << "   po zrzutowaniu na int:  " << b;
    std::cout << std::endl;
    double c = 1.1;
    float d = static_cast<float>(c);
    std::cout << c << "   po zrzutowaniu na float:  " << d;
}
