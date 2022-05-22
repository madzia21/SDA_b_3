//Zad. 2.6
//Napisz funkcję do wyświetlania liczby typu double(samodzielnie
//    drukuj kolejne cyfry i separator dziesiętny).
#include <iostream>
void printDoubleNumber(double d) //123.456
{
    // sprawdzamy czy liczba jest ujemna
    if (d < 0.0)
    {
        std::cout << '-';
        d *= -1.0; // mnożymy przez -1 żeby mieć wartość dodatnią
    }
    //123
    int a = static_cast<int>(d); // część całkowita wycięta z double'a
    //.456
    double b = d - a; // część po przecinku
    int n1 = 1; // liczba cyfr części ułamkowej
    int n2 = 1; //liczba cyfr części po przecinku
    // 123
    
   // tuu zliczamy ile jest cyfr w części całkowitej, bo nie jesteśmy w stanie 
   //je wyświetliś od lewej do prawej
    while (a > 9)
    {
        a /= 10;
        n1++;
    }

    a = static_cast<int>(d);

    for (int i = 0; i < n1; ++i)
    {
        // tu wyciągamy kolejne liczny z części caałkowitej
        // od lewej do prawej
        // 123
        // 123/100 -> 1
        // 23/10 -> 2
        // 3/1 -> 3
        int p = static_cast<int>(pow(10, n1 - i - 1));
        int c = static_cast<int>(a) / p; // rzutujemy bo pow() zwraca double'a
        a -= c * p;
        std::cout << c;
    }

    std::cout << '.';

    // .0 *10 -> 0.0
    // .456 *10 = 4.56 -> 4
    // (4.56 - 4 ) *10 = 5.6 -> 5
    do
    {
        b *= 10;
        int c = static_cast<int>(b);
        std::cout << c;
        b -= c;
    } while (b > 0.0);
    std::cout << std::endl;

}
int main()
{
    // wyświetli więcej cyfr po przecinku, bo double jest niedokładny
    printDoubleNumber(123.456);
    printDoubleNumber(-123.456);
    printDoubleNumber(2.455);
}
