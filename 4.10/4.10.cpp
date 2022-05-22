//Zad. 4.10
//Napisz funkcję, która będzie przyjmować pojedynczy string, oraz
//znak rozdzielający.Jej zadaniem będzie rozdzielenie otrzymanego
//stringu względem zadanego znaku oraz wyświetlenie odpowiedzi na ekranie

#include <iostream>
void extractStringsFromString(std::string str, char separator)
{
    int counter = 0;
    std::string temp;
    for (int i = 0; i < str.size(); ++i)
    {
        temp += str[i];

        if (str[i] == separator)
        {
            counter++;
            std::cout << counter << " wydzielony string to: " << temp << std::endl;
            temp.clear();
        }
        if (i == (str.size() - 1)) // (i == (str.size() - 1) && str[str.size()-1] != separator)
        {
            counter++;
            std::cout << counter << " wydzielony string to: " << temp << std::endl;
        }
    }
}
int main()
{
    std::string sentence = "Nic dwa razy się nie zdarza";
    std::cout << "Test:" << std::endl;
    extractStringsFromString(sentence, ' ');
    std::cout << "Test:" << std::endl;
    extractStringsFromString("Jamniczek, który się zaplątał w ręczniczek", ' ');
    std::cout << "Test:" << std::endl;
    extractStringsFromString("ideał sięgnął bruku", 'u');

}