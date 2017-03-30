#include "3_levenshtein.h"
#include <iostream>

int main()
{
	int matrix[MAX_LENGTH][MAX_LENGTH];
	std::string a = "", b = "";
	std::cout << "3. Levenstein distance";
	std::cout << "Insert 1st string: ";
	std::cin >> a;
	std::cout << "Insert 2nd string: ";
	std::cin >> b;
	int dist = levenshtein(a, b, matrix);
	return 0;
}