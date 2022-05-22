#include <iostream>
#include "Functions.h"

int main()
{
    std::cout << "dwa argumenty" << std::endl;
    std::cout << "multiply(3, -1): " << multiply(3.0, -1.0) << std::endl;
    std::cout << "multiply(3, 0): " << multiply(3.0, 0.0) << std::endl;
    std::cout << "multiply(3, 1): " << multiply(3.0, 1.0) << std::endl;
    std::cout << "multiply(3, 2): " << multiply(3.0, 2.0) << std::endl;
    std::cout << "multiply(3, 3): " << multiply(3.0, 3.0) << std::endl;

    std::cout << "trzy argumenty" << std::endl;
    std::cout << "multiply(3, -1, 2): " << multiply(3.0, -1.0, 2.0) << std::endl;
    std::cout << "multiply(3, 0, 3): " << multiply(3.0, 0.0, 3.0) << std::endl;
    std::cout << "multiply(3, 1, 4): " << multiply(3.0, 1.0, 4.0) << std::endl;
    std::cout << "multiply(3, 2, 5): " << multiply(3.0, 2.0, 5.0) << std::endl;
    std::cout << "multiply(3, 3, 6): " << multiply(3.0, 3.0, 6.0) << std::endl;

    std::cout << "cztery argumenty" << std::endl;
    std::cout << "multiply(3, -1, 2, 9): " << static_cast<double>(multiply(3.5, -1.0, 2.4, 9.3)) << std::endl;
    std::cout << "multiply(3, 0, 3, 8): " << static_cast<double>(multiply(3.0, 0.0, 3.0, 8.0)) << std::endl;
    std::cout << "multiply(3, 1, 4, 7): " << multiply(3.5, 1.00, 4.0, 7.0) << std::endl;
    std::cout << "multiply(3, 2, 5, 6): " << multiply(3.0, 2.0, 5.0, 6.0) << std::endl;
    std::cout << "multiply(3, 3, 6, 5): " << multiply(3.0, 3.0, 6.0, 5.0) << std::endl;
}