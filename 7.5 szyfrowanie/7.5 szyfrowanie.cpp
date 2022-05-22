//Zad. 7.5
//Wykonaj proste szyfrowanie(przesunięcie o 20).Stwórz funkcję do
//szyfrowania oraz deszyfrowania Stringów

#include <iostream>
#include <string>

std::string szyfrowanie(std::string a)
{
    std::string b;
    std::cout << a << std::endl;
    std::cout << a.size() << std::endl;
    for (int i = 0; i < a.size(); ++i)
    {
        b += (a[i] - 'DC4');
    }
    std::cout << b << std::endl;
    return b;
}
void deszyfrowanie(std::string a)
{
    for (int i = 0; i < a.size(); ++i)
    {
        std::cout << static_cast<char>(a[i]+'DC4');
    }
}
int main()
{

    std::string c =  szyfrowanie("kot");
    deszyfrowanie(c);
}