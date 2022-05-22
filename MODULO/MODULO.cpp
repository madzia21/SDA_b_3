#include <iostream>

void displayRange(int od_x, int do_y, int num_of_displayed_num_from_range = 20)
{
    std::cout << "zakres od " << od_x << " do " << do_y << " :" << std::endl;
    for (int i = 0; i < num_of_displayed_num_from_range; i++)
    {
      //std::cout << i % 10 << std::endl; // cyfry od 0-9
      // zakres 0-9 możemy również określić tak, bardziej abstrakcyjnie
      // wyrażenie w nawiasie moze być dowolną kombinacją liczb, 
      // jednak wynik tego wyrażenia musi okreslać ile kolejnych liczb ma być wyświetlanych
        //std::cout << i % (8-0+2) + 0 << std::endl; // cyfry od 0-9
       // std::cout << i % 10+1 << std::endl; // cyfry od 1-10
        //std::cout << i % 10+2 << std::endl; // cyfry od 2-11
         // 
        // liczba, która jest w nawiasie określa liczbę liczb wyświetlanych,
        //a dopiero liczba za nawiasem wskazuje od której liczby ma zacząć się wyświetlanie
        //std::cout << i % (63-25+1)+25 << std::endl; // cyfry od 25-63
        // (+1 w nawiasie sprawi, ze zakres będzie do 63 włacznie)
        //std::cout << i % (63 - 25) + 25 << std::endl; // cyfry od 25-62

            std::cout << i % (do_y - od_x + 1) + od_x << "; "; 
    }
    std::cout << std::endl << std::endl;
}
void displayRangeDouble(double od_x, double do_y, int num_of_displayed_num_from_range = 20)
{
    std::cout << "zakres od " << od_x << " do " << do_y << " :" << std::endl;
    for (int i = 0; i < num_of_displayed_num_from_range; i++)
    {
        //std::cout << i % (3.5 - (-1.5) +1)-1.5 << std::endl; // cyfry od -1.5 - +3.5
        // tych liczb jest faktycznie sześć, bo nie uwzględniamy zera
        //std::cout << i % (5 +1)-1.5 << "; "; // cyfry od -1.5 do +3.5

        double temp = do_y - od_x;
        int tempKonwersja = static_cast<int>(temp);
        

        std::cout << i % (tempKonwersja + 1) + od_x << "; ";
    }
    std::cout << std::endl << std::endl;
}

int main()
{
    displayRange(0, 9);
    displayRange(1, 10);
    displayRange(2, 11);
    displayRange(0, 100);
    displayRange(1, 100);
    displayRange(12, 18, 30);
    displayRange(25, 63, 50);      
    displayRangeDouble(-1.5, 3.5);
    displayRangeDouble(-1, 1);
    displayRangeDouble(0.5, 2.5);
    displayRange(-1, 1);
}
