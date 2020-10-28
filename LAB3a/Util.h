#pragma once
#include <iostream>

template <typename T>
T GetNumber(const char* msg)
{
	std::cout << msg;
	T element;

	while (!(std::cin >> element))
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');

		std::cout << "Error! Enter int!" << std::endl << msg;
	}

	std::cin.ignore(32767, '\n');

	return element;
}

inline int isgreater(double a, double b)
{
	return a > b;
}
