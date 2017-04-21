//1636. Штрафное время
#include <iostream>

const int problemsAmount = 10, tryCost = 20;

int main() 
{
	long long int T1 = 0, T2 = 0, tries = 0;
	std::cin >> T1 >> T2;
	for (int i = 0; i < problemsAmount; i++) {
		std::cin >> tries;
		T2 -= tries * tryCost;
	}
	if (T1 <= T2) { std::cout << "No chance." << std::endl; }
	else { std::cout << "Dirty debug :(" << std::endl; }
	return 0;
}