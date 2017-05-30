//1576. Телефонные тарифы
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1576.in", "rt", stdin);
	#endif // !ONLINE_JUDGE


	int basicCost = 0, basicPerMinute = 0;
	std::cin >> basicCost >> basicPerMinute;

	int combinedCost = 0, combinedLimit = 0, combinedPerMinute = 0;
	std::cin >> combinedCost >> combinedLimit >> combinedPerMinute;

	int unlimitedCost = 0;
	std::cin >> unlimitedCost;

	std::string callLength = "";
	int callsAmount = 0, minutes = 0, seconds = 0, callMinutes = 0;
	std::cin >> callsAmount;
	std::getline(std::cin, callLength);

	for (int i = 0; i < callsAmount; i++) {
		std::getline(std::cin, callLength);
		minutes = 10 * (callLength[0] - '0') + (callLength[1] - '0');
		seconds = 10 * (callLength[3] - '0') + (callLength[4] - '0');
		if (seconds > 6 || minutes > 0) {
			callMinutes += minutes;
			if (seconds > 0) { callMinutes++; }
		}
	}

	std::cout << "Basic:     " << (basicCost + callMinutes * basicPerMinute) << "\n";
	/*if (callMinutes <= combinedLimit) {
		std::cout << "Combined:  " << combinedCost << "\n";
	}
	else {
		std::cout << "Combined:  " << combinedCost + (callMinutes - combinedLimit) * combinedPerMinute << "\n";
	}*/
	std::cout << "Combined:  " << (combinedCost + std::max(0, callMinutes - combinedLimit) * combinedPerMinute) << "\n";
	std::cout << "Unlimited: " << unlimitedCost << "\n";
	return 0;
}