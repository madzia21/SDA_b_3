//Zad. 4.2
//Napisz funkcję, która będzie składać tablicę 5x5 typu char w Stringa
//(wiersz po wierszu).
#include <iostream>
//std::string charToString(char * p)
//{
//    std::string result = " ";
//    for (int i = 0; i < sizeof(p) / sizeof(*p); ++i)
//    {
//        result[i] = p[i];
//    }
//    return result;
//}
std::string convertCharArrayToString(char cTab[], int a)
{
    std::string result = " ";
    for (int i = 0; i < a; ++i)
    {
         
        result += cTab[i];
    }
    return result;
}
// gdy przekazujemy tab dwuwymiarowa musimy podac drugi wymmiar
std::string convertCharArrayToStringTwoDimensions(char cTab[][5], int a, int b)
{
    std::string result = " ";
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            result += cTab[i][j];
        }
        result += '\n';
    }
    return result;
}
//std::string convertCharArrayToStringPointer(char * p)
//{
//    std::string result = " ";
//    for (int i = 0; i < 5; ++i)
//    {
//        for (int j = 0; j < 5, ++j)
//        {
//            result += p[i][j];
//        }
//        result += '\n';
//    }
//    return result;
//}
    
int main()
{
    char tab2[5][5] = { "lalk", "kaja", "auto", "wore", "loka" };
    char tab[5] = { "lala" };
    std::string x = convertCharArrayToString(tab, 5);
    std::cout << x << std::endl;
    std::string y = convertCharArrayToStringTwoDimensions(tab2, 5, 5);
    std::cout << y << std::endl;

}
