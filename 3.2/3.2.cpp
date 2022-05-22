#include <iostream>
#include "Functions.h"


int main()
{
    std::cout << "power(3, -1): " << power(3, -1) << std::endl;
    std::cout << "power(3, 0): " << power(3, 0) << std::endl;
    std::cout << "power(3, 1): " << power(3, 1) << std::endl;
    std::cout << "power(3, 2): " << power(3, 2) << std::endl;
    std::cout << "power(3, 3): " << power(3, 3) << std::endl;

    std::cout << "Moja" << std::endl;
    std::cout << "powerMoja(3, -1): " << power(3, -1) << std::endl;
    std::cout << "powerMoja(3, 0): " << power(3, 0) << std::endl;
    std::cout << "powerMoja(3, 1): " << power(3, 1) << std::endl;
    std::cout << "powerMoja(3, 2): " << power(3, 2) << std::endl;
    std::cout << "powerMoja(3, 3): " << power(3, 3) << std::endl;

    std::cout << "FLOATy" << std::endl;
    std::cout << "power(3.5f, -1): " << power(3.5f, -1.0f) << std::endl;
    std::cout << "power(3.5f, 0): " << power(3.5f, 0.0f) << std::endl;
    std::cout << "power(3.5f, 1): " << power(3.5f, 1.0f) << std::endl;
    std::cout << "power(3.5f, 2): " << power(3.5f, 2.0f) << std::endl;
    std::cout << "power(3.5f, 3): " << power(3.5f, 3.0f) << std::endl;

    std::cout << "Double'e" << std::endl;
    std::cout << "power(3.5, -1): " << power(3.5, -1.0) << std::endl;
    std::cout << "power(3.5, 0): " << power(3.5, 0.0) << std::endl;
    std::cout << "power(3.5, 1): " << power(3.5, 1.0) << std::endl;
    std::cout << "power(3.5, 2): " << power(3.5, 2.0) << std::endl;
    std::cout << "power(3.5, 3): " << power(3.5, 3.0) << std::endl;
}
