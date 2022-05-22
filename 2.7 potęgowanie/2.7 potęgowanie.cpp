//Zad. 2.7
//Napisz metodę power, która przyjmie dwa parametry typu int, a która
//zwróci wynik potęgowania o podstawie i wykładniku takich, jak
//przekazano.
#include <iostream>
int power(int x, int n)
{
    if (n == 1)
        return x;
    if (n == 0)
        return 0;
    int result = x;
    int i = 1;
    do
    {
        result *= x;
        ++i;
    } while (i<n);

    return result;
}
int main()
{
    std::cout << "Enter two numbers greater than zero:";
    unsigned int a, b = 0;
    std::cin >> a;
    std::cin >> b;
    int result = power(a, b);
    std::cout << "Result: " << result << std::endl;
}
