//Zad. 4.7
//Napisz funkcję, która będzie zamieniać znaki od 3 do 6 w Stringu na
//„abcd”.
//string & replace(size_t pos, size_t len, const string & str);
#include <iostream>
std::string funName(std::string word)
{
    if (word.size() >= 6)
        return word.replace(2, 4, "ABCD");
    else
        return "Ciąg jest zbyt mały";
}

int main()
{
    std::string word = "xxxxxxxxxxxxxxxxxxxx";
    std::cout << word << std::endl;
    std::cout << funName(word);
    std::cout << std::endl;
    std::cout << funName("Maja");
}
