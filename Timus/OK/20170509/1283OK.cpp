//1283. √номик
#include <iostream>

int main()
{
	double money = 0, death = 0, commission = 0;
	std::cin >> money >> death >> commission;
	commission = 1 - commission / 100;
	long long answer = 0;
	for (; money > death; answer++) {
		money *= commission;
	}
	std::cout << answer << "\n";
}