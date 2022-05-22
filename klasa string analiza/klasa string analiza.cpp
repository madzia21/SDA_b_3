#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream fin;
    fin.open("C:\\Users\\madaz\\Desktop\\plik.txt");
    std::string item;
    std::getline(fin, item);
    //fin >> item;
    fin.close();
    std::string temp;
    for (int i = 0; i < item.size(); ++i)
    {
        if (item[i] == ' ')
        {
            temp += item[i];
        }
    }
    //if (temp.size() > 10)
        std::cout << temp << std::endl;
    std::cout << item;
}
