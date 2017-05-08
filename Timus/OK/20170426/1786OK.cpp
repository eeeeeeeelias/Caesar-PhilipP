//1786. Биография Сандро
#include <iostream>
#include <string>

const std::string name = "Sandro";

bool isCapital(char c) {
	if (c >= 'A' && c <= 'Z') { return true; }
	else { return false; }
}

int cost(char c1, char c2) {
	if (c1 == c2) { return 0; }
	else { 
		if (isCapital(c1) == isCapital(c2) || (c1 - 'a' == c2 - 'A') || (c1 - 'A' == c2 - 'a')) { return 5; } 
		else { return 10; }
	}

}

int main()
{
	std::string manuscript;
	std::getline(std::cin, manuscript);
	int minCost = 65;
	for (int i = 0, thisCost = 0; i < manuscript.length() - 5; i++) {
		thisCost = 0;
		for (int j = 0; j < 6; j++) { thisCost += cost(name[j], manuscript[i + j]); }
		minCost = std::fmin(minCost, thisCost);
	}
	std::cout << minCost << "\n";
	return 0;
}