#include "3_levenshtein.h"
#include <iostream>

int main()
{
//	int matrix[MAX_LENGTH][MAX_LENGTH];
	std::string a = "", b = "";
	std::cout << "3. Levenstein distance" << std::endl;
	std::cout << "Insert 1st string: ";
	std::cin >> a;
	std::cout << "Insert 2nd string: ";
	std::cin >> b;
//	std::cout << "distance(\"" << a << "\", \"" << b << "\") = " << memorizingLevenshtein(a, b, matrix, 1, 1, 1) << std::endl;
	std::cout << "distance(\"" << a << "\", \"" << b << "\") = " << obliviousLevenshtein(a, b, 1, 1, 1) << std::endl;
	system("pause");
	return 0;
}