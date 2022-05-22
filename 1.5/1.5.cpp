//Zad. 1.5
//Napisz funkcję sprawdzającą czy podany ciąg znaków(podany
//    przez użytkownika) są palindromem.Na ekranie wyświetl
//    odpowiedź.
//    Np.
//    KAJAK
//    ADA
//    ANNA
#include <iostream>
bool isPalindrom(std::string word)
{
    int i = 0;
    int j = word.size() - 1;
    // dry rule = do not repeat yourself
    for (; i<j; i++, j--)
    {
        if (word[i] != word[j])
            return false;
    }
    return true;
}
int main()
{
    std::string word = "anna";
    std::cout << word << std::endl;
    std::cout << "czy to palindrom? " << std::boolalpha << isPalindrom(word);
}
