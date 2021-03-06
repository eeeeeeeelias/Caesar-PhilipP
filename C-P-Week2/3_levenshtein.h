#pragma once
#include <string>
#include <algorithm>
const int MAX_LENGTH = 100;

int memorizingLevenshtein(std::string a, std::string b, int matrix[][MAX_LENGTH], int insertCost, int deleteCost, int replaceCost) 
//time complexity = O( a.size() * b.size() ), space complexity = O( a.size() * b.size() )
{
	a = " " + a;
	b = " " + b;
	int aSize = (int)a.size(), bSize = (int)b.size();
	//start matrix filling
	matrix[0][0] = 0;
	for (int j = 1; j < bSize; j++) {
		matrix[0][j] = matrix[0][j - 1] + insertCost;
	}
	for (int i = 1; i < aSize; i++) {
		matrix[i][0] = matrix[i - 1][0] + deleteCost;
		for (int j = 1; j <= bSize; j++) {
			matrix[i][j] = std::min(matrix[i - 1][j] + deleteCost,
				std::min(matrix[i][j - 1] + insertCost, matrix[i - 1][j - 1] + ((a[i] == b[j]) ? 0 : replaceCost)));
		}
	}
	return matrix[aSize - 1][bSize - 1];
}

int obliviousLevenshtein(std::string a, std::string b, int insertCost, int deleteCost, int replaceCost) 
// time complexity = O( a.size() * b.size() ), space complexity = O( min(a, b).size() )
{
	int matrix[2][MAX_LENGTH];
	if (a.size() < b.size()) {
		a.swap(b);
	}
	a = " " + a;
	b = " " + b;
	int aSize = (int)a.size(), bSize = (int)b.size();
	//start matrix filling
	matrix[0][0] = 0;
	for (int j = 1; j < bSize; j++) {
		matrix[0][j] = matrix[0][j - 1] + insertCost;
	}
	for (int i = 1; i < aSize; i++) {
		matrix[1][0] = matrix[0][0] + deleteCost;
		for (int j = 1; j < bSize; j++) {
			matrix[1][j] = std::min(matrix[0][j] + deleteCost, 
				std::min(matrix[1][j - 1] + insertCost, matrix[0][j - 1] + ((a[i] == b[j]) ? 0 : replaceCost)));
		}
		for (int j = 0; j < bSize; j++) {
			std::swap(matrix[0][j], matrix[1][j]);
		}
	}
	return matrix[0][bSize - 1];
}