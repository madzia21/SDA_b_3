#include <iostream>
void fillArray(char Arr[][6], int col)
{
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            Arr[i][j] = ' ';
        }
    }
}
void trianglePattern(char ArrChar[][6], int col)
{
    int temp = 1;
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (j < temp)
            {
                ArrChar[i][j] = '*';
                std::cout << ArrChar[i][j];
            }
        }
        temp++;
        std::cout << std::endl;
    }
}
void backslashPattern(char ArrCharB[][6], int col)
{
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == j)
            {
                ArrCharB[i][j] = '*';
            }
            std::cout << ArrCharB[i][j];
        }
        std::cout << std::endl;
    }
}
void circlePattern(char ArrCharC[][6], int col)
{
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == 0 || i == 6 - 1)
            {
                ArrCharC[i][j] = '*';
            }
            if (j == 0 || j == 6 - 1)
            {
                ArrCharC[i][j] = '*';
            }
            std::cout << ArrCharC[i][j];
        }
        std::cout << std::endl;
    }

}
void xPattern(char ArrCharD[][6], int col)
{
    int count = 1;
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (i == j)
            {
                ArrCharD[i][j] = '*';
            }
            if ((i == count - 1) && (j == 6 - count))
            {
                ArrCharD[i][j] = '*';
                count++;
            }
            std::cout << ArrCharD[i][j];
        }
        std::cout << std::endl;
    }
}
void triangle(int l)
{
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
void backSlash(int l)
{
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            if(i ==j)
            std::cout << '*';
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
}
void backSlashzajecia(int l)
{
    //for (int i = 0; i < l; ++i)
    //{
    //    for (int j = 0; j < i; ++j)
    //    {
    //        std::cout << ' ';
    //    }
    //    std::cout << '*' << std::endl;
    //}
    for (int i = 0; i < l; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            std::cout << ' ';
        }
        std::cout << '*' << std::endl;
    }
}
void circle(int l)
{
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            if (i == 0 || i == l-1 || j == 0 || j == l - 1)
                std::cout << '*';
            else
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
}
void iks(int l)
{
    int count = 1;
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            if (i == j)
            {
                std::cout << '*';
            }
            if ((i == count - 1) && (j == l - count))
            {
                std::cout << '*';
                count++;
            }
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
 
    // wersja 2 z czatu
        //for (int i = 0; i < l; i++) {
        //    for (int j = 0; j < l; j++) {
        //        if (j == i || j == l - i-1) {
        //            std::cout << '*';
        //        }
        //        else {
        //            std::cout << ' ';
        //        }
        //    }
        //    std::cout << std::endl;
        //}
}
int main()
{
    triangle(10);
    backSlash(5);
    circle(10);
    backSlashzajecia(10);
    iks(5);
    const int row = 6;
    const int col = 6;
    char ArrCharA[row][col] = { ' ' };
    trianglePattern(ArrCharA, col);
    std::cout << std::endl;
    char ArrCharB[row][col] = { ' '};
    fillArray(ArrCharB, col);
    backslashPattern(ArrCharB, col);
    std::cout << std::endl;
    char ArrCharC[row][col] = { ' ' };
    fillArray(ArrCharC, col);
    circlePattern(ArrCharC, col);
    std::cout << std::endl;
    char ArrCharD[row][col] = { ' ' };
    fillArray(ArrCharD, col);
    xPattern(ArrCharD, col);
}
