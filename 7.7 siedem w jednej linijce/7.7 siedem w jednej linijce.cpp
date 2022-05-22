//* Zad. 7.7
//Zapisz w jednej linijce instrukcję warunkową, która będzie zwracać 7
//gdy dana wielkość jest równa bądź większa niż 7, w przeciwnym wypadku zwraca 0

#include <iostream>

int main()
{
    int x = 0;
    std::cout << "Instrukcja ma zwracać 7 gdy x jest równe bądź większe niż 7,"
        << "w przeciwnym wypadku zwraca 0" << std::endl;
    std::cout << "test 1: dla x = 0" << std::endl;
    (x >= 7 ) ? (std::cout << "7\n") : (std::cout << "0\n");
    std::cout << "test2: dla x = 6" << std::endl;
    x = 6;
    (x >= 7) ? (std::cout << "7\n") : (std::cout << "0\n");
    std::cout << "test 3: dla x = 7" << std::endl;
    x = 7;
    (x >= 7) ? (std::cout << "7\n") : (std::cout << "0\n");
    std::cout << "test 4: dla x = 8" << std::endl;
    x = 8;
    (x >= 7) ? (std::cout << "7\n") : (std::cout << "0\n");
}