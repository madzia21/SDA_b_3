#include <iostream>
#include "Functions.h"
#include <iomanip>

int main()
{
  
        printDoubleNumber(-123.456); //wyswietli wiecej cyfr po przecinku bo jest double tez nie jest idealny
        std::cout << std::endl;
        std::cout << std::setprecision(35) << -1234444444.456 << std::endl;

}
