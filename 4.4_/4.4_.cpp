//Zad. 4.4
//Sprawdź czy słowo ma więcej niż 5 liter i kończy się literą „r”. (napisz
//    funkcję)
#include <iostream>
void er(std::string a)
{
    int length = a.length();
    if (length > 5)
    {
        std::cout << "słowo " << a <<" ma więcej niż 5 liter i ";
        if (a[length - 1] == 'r')
            std::cout << "kończy się na literę 'r'";
        else
            std::cout << "NIE kończy się na literę 'r'";
    }
    else
        std::cout << "Słowo " << a << " ma dokładnie 5 liter lub mniej.";
}
bool checkWord(std::string word)
{
    char lastChar = '0';
    lastChar = word.back();
    if (word.size() > 5)
    {
        if (lastChar == 'r')
        {
            return 1;
        }
        else
        {
            std::cout << "nie konczy sie na r" << std::endl;
            return 0;
        }
    }
    std::cout << "za malo liter" << std::endl;
    return 0;
}
int main()
{
    std::string word1 = "Majorka";
    std::string word2 = "Major";
    std::string word3 = "Madagaskar";
    std::cout << word1 << std::endl;
    er(word1);
    std::cout << std::endl;
    std::cout << word2 << std::endl;
    er(word2);
    std::cout << std::endl;
    std::cout << word3 << std::endl;
    er(word3);
    std::cout << std::endl;
}
