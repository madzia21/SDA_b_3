#include <iostream>
void displayPhoneNumber(const char* p)
{
    const int ArrSize = 8;
    for (int i = 0; i < ArrSize; i++)
    {
        std::cout << p[i];
    }
    std::cout << std::endl;
}
void enterPhoneNumber()
{
    const int ArrSize = 8;
    char phoneNumber[ArrSize] = { 0 };
    char temp = '-';
    std::cout << "Enter phone number: " << std::endl;

    for (int i = 0; i < ArrSize; i++)
    {
        std::cin >> temp;
        phoneNumber[i] = temp;
    }
    displayPhoneNumber(phoneNumber);
}
char * enterPhoneNumberVersionPointer()
{
    const int ArrSize = 8;
    char phoneNumber[ArrSize] = { 0 };
    char temp = '-';
    std::cout << "Enter phone number: " << std::endl;

    for (int i = 0; i < ArrSize; i++)
    {
        std::cin >> temp;
        phoneNumber[i] = temp;
    }
    displayPhoneNumber(phoneNumber);
    return phoneNumber;
}
void validatePhoneNumber(char * p)
{
    if (p[0] == '0')
    {
        std::cout << "Phone number cannot begin with 'zero'." << std::endl;
    }
    else
    {
        std::cout << "Entereed phone number is correct." << std::endl;
    }
}
int main()
{
    const int arrSize = 8;
    char correctPhoneNumber[arrSize] = { '2','0','3','6','8','6','4','5' };
    char wrongPhoneNumber[arrSize] = { '0','2','3','6','8','6','4','5' };
    //std::cout << wrongPhoneNumber[0] << std::endl;
    std::cout << "Correct phone number:" << std::endl;
    validatePhoneNumber(correctPhoneNumber);
    std::cout << "Wrong phone number:" << std::endl;
    validatePhoneNumber(wrongPhoneNumber);
    std::cout << "Pointer version:" << std::endl;
    char* ptr = enterPhoneNumberVersionPointer();
    validatePhoneNumber(ptr);
}
