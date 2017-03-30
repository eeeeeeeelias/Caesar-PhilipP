#pragma once
#include <string>
#include <algorithm>
const int MAX_LENGTH = 100;

int levenshtein(std::string a, std::string b, int matrix[][MAX_LENGTH]) //time complexity = O( a.size() * b.size() ), space complexity = O( a.size() * b.size() )
{
	int insertCost = 1, deleteCost = 1, replaceCost = 1;
	a = " " + a;
	b = " " + b;
	matrix[0][0] = 0;
	for (int j = 1; j < b.size(); j++) {
		matrix[0][j] = matrix[0][j - 1] + insertCost;
	}
	for (int i = 1; i < a.size(); i++) {
		matrix[i][0] = matrix[i - 1][0] + deleteCost;
		for (int j = 1; j <= b.size(); j++) {
			matrix[i][j] = std::min(matrix[i - 1][j] + deleteCost,
				matrix[i][j - 1] + insertCost, matrix[i - 1][j - 1] + replaceCost);
		}
	}
	return matrix[a.size() - 1][b.size() - 1];
}