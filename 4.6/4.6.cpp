//Zad. 4.6
//Napisz funkcję, która zamienia litery w Stringu na małe, zwraca
//String.
#include <iostream>


std::string toLowerCase(std::string str) {
    for (int i = 0; i < str.size(); i++) {
        str.at(i) = std::tolower(str.at(i));
    }
    return str;
}

int main()
{
    std::string b = toLowerCase("WORD");
    std::cout << b;
}
