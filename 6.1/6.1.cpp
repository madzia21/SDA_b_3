﻿// 6.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main(int argc, char* argv[])
{
	// argumentem domyślnym jest ścieżka do pliku .exe 'main z argumentami
	// argc - liczba przekazywanych argumentów
	// argv - tablica ciągów
	// pierwszym argumentem zawsze będzie plik exe programu
	std::cout << "You have entered " << argc
		<< " arguments:" << "\n";
	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << "\n";

	int sum = 0;
	for (int i = 1; i < argc; ++i)
	{
		//std::cout << static_cast<int>(argv[i][0]);
		std::cout << argv[i][0] - '0';
		sum += argv[i][0] - '0';
	}
	// by wyświetlić liczbę kilkucyfrową nalezy poszukać w necie char array to int i wyświetlą się funkcje
	// za pomoca argumentów określało się opcje uruchomienia programu np.: uruchomienie na ustawieniach ogrraniczonych, zaawansowanych, rozdzielczość 
	// ograniczona, zaawansowana etc..
	std::cout << sum;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
