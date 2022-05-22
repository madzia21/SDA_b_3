//Zad. 5.7
//Napisz funkcję, która przyjmie od użytkownika szerokość i wysokość, a
//następnie narysuje szachownice o podanych wymiarach.Pola muszą
//mieć naprzemiennie różne kolory, wykorzystaj w tym celu różne
//symbole(np.o i #).Wymiar pola powinien wynosić minimum 2x2 znaki.
//Standardowa szachownica posiada 8x8 pól.

#include <iostream>
void printohash(int j)
{
    if (j % 2)
    {
        std::cout << "o ";
    }
    else
        std::cout << "# ";
}
void printhasho(int j)
{
    if (j % 2)
    {
        std::cout << "# ";
    }
    else
        std::cout << "o ";
}
void print_o_hash_2By2(int x, int squareSideSize)
{
    for (int k = 0; k < squareSideSize; ++k)
    {
        for (int j = 0; j < x; ++j)
        {
            for (int s = 0; s < squareSideSize; ++s)
            {
                printohash(j);
            }
        }
        std::cout << std::endl;
    } 
}
void print_Hash_o_2By2(int x, int squareSideSize)
{
    for (int k = 0; k < squareSideSize; ++k)
    {
    for (int j = 0; j < x; ++j)
    {
        for (int s = 0; s < squareSideSize; ++s)
        {
            printhasho(j);
        }
        }
    std::cout << std::endl;
    }
}
void chessboard_2By2(int x, int y, int squareSideSize)
{
    for (int i = 0; i < y; ++i)
    {
        (i % 2) ? print_o_hash_2By2(x, squareSideSize) : print_Hash_o_2By2(x, squareSideSize);
        //if (i % 2)
        //{
        //    print_o_hash(x);
        //}
        //else
        //{
        //    print_Hash_o(x);
        //}
    }
}
void chessboard_2By2_(int x, int y, int squareSideSize)
{
    for (int i = 0; i < y; ++i)
    {
        if (i % 2)
        {
            for (int k = 0; k < squareSideSize; ++k)
            {
                for (int j = 0; j < x; ++j)
                {
                    for (int s = 0; s < squareSideSize; ++s)
                    {
                        if (j % 2)
                        {
                            std::cout << "o ";
                        }
                        else
                            std::cout << "# ";
                    }
                }
                std::cout << std::endl;
            }
        }
        else
        {
            for (int k = 0; k < squareSideSize; ++k)
            {
                for (int j = 0; j < x; ++j)
                {
                    for (int s = 0; s < squareSideSize; ++s)
                    {
                        if (j % 2)
                        {
                            std::cout << "# ";
                        }
                        else
                            std::cout << "o ";
                    }
                }
                std::cout << std::endl;
            }
        }
    }
}
void print_o_hash(int x)
{
    for (int j = 0; j < x; ++j)
    {
        printohash(j);
    }
    std::cout << std::endl;
}
void print_Hash_o(int x)
{
    for (int j = 0; j < x; ++j)
    {
        printhasho(j);
    }
    std::cout << std::endl;
}
void chessboard(int x, int y)
{
    for (int i = 0; i < y; ++i)
    {
        (i % 2) ? print_o_hash(6) : print_Hash_o(6);
        if (i % 2)
        {
            print_o_hash(6);
        }
        else
        {
            print_Hash_o(6);
        }
    }
}
void chessboard1by1(int x, int y)
{
    for (int i = 0; i < y; ++i)
    {
        if (i % 2)
        {
            for (int j = 0; j < x; ++j)
            {
                if (j % 2)
                {
                    std::cout << "o ";
                }
                else
                    std::cout << "# ";
            }
            std::cout << std::endl;
        }
        else
        {
            for (int j = 0; j < x; ++j)
            {
                if (j % 2)
                {
                    std::cout << "# ";
                }
                else
                    std::cout << "o ";
            }
            std::cout << std::endl;
        }
    }
}
void backslashPattern(int x, int y)
{
    for (int i = 0; i < y; ++i)
    {
        for (int j = 0; j < x; ++j)
        {
            if (i == j)
            {
                std::cout << '*';
            }
            else
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
}
void drawChessboardz_xorem(int size)
{
    for (unsigned y = 0; y < size; ++y) 
    {
        for (unsigned x = 0; x < size; ++x) 
        {
            if ((y % 2) ^ (x % 2)) {
                std::cout << "o";
            }
            else {
                std::cout << "#";
            }
        }
        std::cout << std::endl;
    }
}
void drawBoard(int a = 8)
{
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << "o";
            }
        }
        std::cout << std::endl;
    }
}
void drawBoard2By2(int a = 8, int side = 2)
{
    for (int i = 0; i < a; ++i) // rysowanie pól w pionie
    {
        for (int k = 0; k < side; ++k) // podwajanie wierszy
        {
            for (int j = 0; j < a; ++j)
            {
                for (int l = 0; l < side; ++l)
                {
                    if ((i + j) % 2 == 0)
                    {
                        std::cout << " # ";
                    }
                    else
                    {
                        std::cout << " o ";
                    }
                }
            }
            std::cout << std::endl;
        }
    }
}
int main()
{
    // moja
    chessboard_2By2(8, 8, 3);
    //inne
    drawBoard2By2(3, 2);
    drawChessboardz_xorem(3);
    chessboard1by1(3, 3);
    chessboard_2By2_(3, 3, 2);
    std::cout << std::endl;
    
}