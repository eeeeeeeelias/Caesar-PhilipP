//1644. Куча орехов
#include <iostream>
#include <string>
int main()
{
	int minSatisfied = 10, maxHungry = 2, N = 0;
	std::cin >> N;
	std::string result = "";
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		std::cin >> result;
		if (result == "hungry") { maxHungry = std::fmax(maxHungry, X); }
		else { minSatisfied = std::fmin(minSatisfied, X); }
	}
	if (minSatisfied > maxHungry) { std::cout << minSatisfied << "\n"; }
	else { std::cout << "Inconsistent\n"; }
	return 0;
}