#include <iostream>
#include <iomanip>
void xDecimalPlaces(double x, int n)
{
    std::cout << std::setprecision(n) << static_cast<double>(x) << std::endl;
}
// by zokraglić liczbę zmiennoprzecinkową do okreslonej liczby miejsc po przecinku
// 1. pomnóż przez wielokrotność 10 (10 - do 1 miejsca po przecinku, 100 - do 2 , 1000 - do 3 etc.. 10 do 1, 10 do 2, 10 do 3 etc
// 2. zaokrągl funkcją round(),
// 3. podziel przez te samą wielokrotność przez którą mnożyłaś
// round(12.4543645 * 100) = 1245.4 - round() zokragli 1245.4 w dół do 1245
// 1245 pomnóż przez 100 = 12.45
double roundNumber(double x, int n)
{
    int temp = pow(10, n);
    x = round(x * temp) / temp;
    return x;
}
int main()
{
   
    double x = 12.12345678;
    std::cout << x << std::endl;
    
    // ustawianie liczb wiodacych
    std::cout << std::setprecision(2) << x << std::endl;
    std::cout << std::setprecision(3) << x << std::endl;
    std::cout << std::setprecision(4) << x << std::endl;
    std::cout << std::setprecision(5) << x << std::endl;
    std::cout << std::setprecision(6) << x << std::endl;
    std::cout << std::setprecision(7) << x << std::endl;
    std::cout << std::setprecision(8) << x << std::endl;

    std::cout << "roundNumber(), test with n = 1: " << std::endl;
    std::cout << roundNumber(x, 1) << std::endl;
    std::cout << "roundNumber(), test with n = 2: " << std::endl;
    std::cout << roundNumber(x, 2) << std::endl;
    std::cout << "roundNumber(), test with n = 3: " << std::endl;
    std::cout << roundNumber(x, 3) << std::endl;
    std::cout << "roundNumber(), test with n = 4: " << std::endl;
    std::cout << roundNumber(x, 4) << std::endl;
    std::cout << "roundNumber(), test with n = 5: " << std::endl;
    std::cout << roundNumber(x, 5) << std::endl;
    std::cout << "roundNumber(), test with n = 6: " << std::endl;
    std::cout << roundNumber(x, 6) << std::endl;

    //xDecimalPlaces(static_cast<double>(x), n);
    //do dwóch trzech miejsc po przecinku float wystarczy, ale jeśli więcej to double

}
