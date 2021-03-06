// ComplexNumberTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ComplexNumber.h"

#include <iostream>



int main()
{	//Genetate some numbers-------------------------------------------
	ComplexNumber a(rand() % 15 + 1, rand() % 15 + 1), b(rand() % 15 + 1, rand() % 15 + 1);
	ComplexNumber c(rand() % 15 + 1, rand() % 15 + 1), d(rand() % 15 + 1, rand() % 15 + 1);
	ComplexNumber e(rand() % 15 + 1, rand() % 15 + 1), f(rand() % 15 + 1, rand() % 15 + 1);

	//Run our test----------------------------------------------------
    std::cout << "-----Complex Number Tester-----" << std::endl;
	std::cout << "Starting + test..." << std::endl << std::endl;

	std::cout << "(" << a << ") + (" << b << ") = " << a + b << std::endl;
	std::cout << "(" << c << ") + (" << d << ") = " << c + d << std::endl;
	std::cout << "(" << e << ") + (" << f << ") = " << e + f << std::endl << std::endl;

	std::cout << "Starting - test..." << std::endl << std::endl;

	std::cout << "(" << a << ") - (" << b << ") = " << a - b << std::endl;
	std::cout << "(" << c << ") - (" << d << ") = " << c - d << std::endl;
	std::cout << "(" << e << ") - (" << f << ") = " << e - f << std::endl << std::endl;

	std::cout << "Starting * test..." << std::endl << std::endl;

	std::cout << "(" << a << ") * (" << b << ") = " << a * b << std::endl;
	std::cout << "(" << c << ") * (" << d << ") = " << c * d << std::endl;
	std::cout << "(" << e << ") * (" << f << ") = " << e * f << std::endl << std::endl;

	std::cout << "Starting / test..." << std::endl << std::endl;

	std::cout << "(" << a << ") / (" << b << ") = " << a / b << std::endl;
	std::cout << "(" << c << ") / (" << d << ") = " << c / d << std::endl;
	std::cout << "(" << e << ") / (" << f << ") = " << e / f << std::endl << std::endl;

	std::cout << "Starting == test..." << std::endl << std::endl;

	ComplexNumber g( 15, 8), h( 15, 8);//an extra numbers just incase an eaqual case isn't generated.

	std::cout << "(" << a << ") == (" << b << ") = " << (a == b) << std::endl;
	std::cout << "(" << c << ") == (" << d << ") = " << (c == d) << std::endl;
	std::cout << "(" << e << ") == (" << f << ") = " << (e == f) << std::endl;
	std::cout << "(" << g << ") == (" << h << ") = " << (g == h) << std::endl << std::endl;
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
