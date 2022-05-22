//Zad. 4.9
//Napisz funkcję, która będzie przyjmować tablicę stringów, oraz
//zwracać pojedynczy string(po scaleniu).Niech dodatkowym
//argumentem będzie znak umieszczany pomiędzy łączonymi
//stringami.Zastosuj wartość domyslna znaku laczenia jako ’\n’.

#include <iostream>
#include <string>

// nie działa
//std::string concatStringArrayVersion3(std::string stringArray[], char sign = ' ')
//{
//    std::string oneString;
//    for (int i = 0; i < sizeof(stringArray) / sizeof(stringArray[0]); ++i)
//    {
//        oneString += stringArray[i];
//        oneString += sign;
//    }
//    return oneString;
//}

// łączy 3 pierwsze stringi, bo wyrażenie: stringArray[0].size() - zlicza długośc pierwszego elementu z tablicy: C++
std::string concatStringArrayVersion1(std::string stringArray[], char sign = '\n')
{
    std::string oneString;
    for (int i = 0; i < stringArray[0].size(); ++i)
    {
        oneString += stringArray[i];
        oneString += sign;
    }
    return oneString;
}
std::string concatStringArray(std::string stringArray[], int arrSize, char sign = '\n')
{
    std::string oneString;
    for (int i = 0; i < arrSize; ++i)
    {
        oneString += stringArray[i];
        oneString += sign;
    }
    return oneString;
}
// sizeof(stringArray)/ sizeof(s[0])
int main()
{
    const int arrSize = 5;
    std::string stringArray[arrSize] = { "C++", "Obiektowe", "Programowanie", "- kurs" , "SDA" };
    std::cout << "Test: bez domyślnego znaku łączenia: " << std::endl;
    std::cout << concatStringArray(stringArray, arrSize, ' ');
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Test: z domyślnym znakiem łączenia: " << std::endl;
    std::cout << concatStringArray(stringArray, arrSize);
    std::cout << std::endl;
    //std::cout << "Test: z sizeof: " << std::endl;
    //std::cout << concatStringArrayVersion3(stringArray);
    std::cout << "Test: z stringArray[0].size():" << std::endl;
    std::cout << concatStringArrayVersion1(stringArray);
    std::cout << std::endl;
}
