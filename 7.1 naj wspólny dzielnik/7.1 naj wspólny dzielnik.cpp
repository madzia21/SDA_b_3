//Zad. 7.1
//Napisz funkcję do obliczania najmniejszej wspólnej wielokrotności.
#include <iostream>

int nwd(int a, int b)
{
    if (a == b)
        return a;
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    int nwd = 1;

    if (a > b)
    {
        //10/2 = 5
        //11/2 = 5
        for (int i = 2; i <= b / 2; ++i)
        {
            if (a % i == 0 && b % i == 0)
            {
                nwd = i;
            }
        }
    }
    else
    {
        for (int i = 2; i <= a / 2; ++i)
        {
            if (a % i == 0 && b % i == 0)
            {
                nwd = i;
            }
        }
    }
    return nwd;
}
int nww(int a, int b)
{
    int result = (a * b) / nwd(a, b);
    return result;
}
int main()
{
    std::cout << nwd(10,24) << std::endl;
    std::cout << nwd(12, 24) << std::endl;
    std::cout << nwd(24, 24) << std::endl;
    std::cout << nwd(56, 36) << std::endl;

    std::cout << nww(10, 24) << std::endl;
    std::cout << nww(12, 24) << std::endl;
    std::cout << nww(24, 24) << std::endl;
    std::cout << nww(56, 36) << std::endl;
}
