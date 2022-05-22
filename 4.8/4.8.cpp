//Zad. 4.8
//Napisz funkcję, która będzie zamieniać ostatni znak z pierwszym w
//Stringu.
#include <iostream>
std::string changeLetters(std::string str)
{
    //str[0] = str.back();
    // źle bo tylko przypisuje ostatni znak do pierwszego, ale nie przypisuje pierwszego do ostatniego
    std::swap(str.front(), str.back());
    return str;
}


int main()
{
    std::string test = "abcd";
    //std::cout << test.back();
    std::cout << changeLetters(test);
}
