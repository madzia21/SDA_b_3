//Zad. 4.3
//Sprawdź czy nazwa kraju rozpoczyna się z wielkiej litery. (napisz
//    funkcję)
#include <iostream>
bool isCountryNameBeginWithCapitalLatter(std::string a)
{
    if (a[0] >= 65 && a[0] <= 90)
    {
        std::cout << "Nazwa kraju rozpoczyna się od wielkiej litery." << std::endl;
        return true;
    }
    if (a[0] > 90)
        std::cout << "Nazwa kraju NIE rozpoczyna się od wielkiej litery." << std::endl;
    return false;
}
bool checkFirstCountryChar(std::string countryName)
{
    char firstChar = '0';
    firstChar = countryName.front();

    if (isupper(firstChar))
    {
        return 1;
    }
    return 0;
}

int main()
{
    std::cout << checkFirstCountryChar("Polska") << std::endl;
    std::cout << checkFirstCountryChar("polska");

    std::cout << isCountryNameBeginWithCapitalLatter("Albania") << std::endl;
    std::cout << isCountryNameBeginWithCapitalLatter("albania") << std::endl;
    std::cout << isCountryNameBeginWithCapitalLatter("Zimbabwe") << std::endl;
    std::cout << isCountryNameBeginWithCapitalLatter("zimbabwe") << std::endl;
    
}
