//1796. Парк аттракционов
#include <iostream>
#include <algorithm>
const int BANKNOTES_AMOUNT = 6, dignities[BANKNOTES_AMOUNT] = {10, 50, 100, 500, 1000, 5000};

int main()
{
	int banknotes[BANKNOTES_AMOUNT], ticketCost = 0, allMoney = 0;
	for (int i = 0; i < BANKNOTES_AMOUNT; i++) {
		std::cin >> banknotes[i];
		allMoney += banknotes[i] * dignities[i];
	}
	std::cin >> ticketCost;
	int maxTickets = allMoney / ticketCost, minTickets = -1;
	for (int i = 0; i < BANKNOTES_AMOUNT; i++) {
		if (banknotes[i]) {
			minTickets = std::max(minTickets, (allMoney - dignities[i]) / ticketCost + 1);
		}
	}
	std::cout << (maxTickets - minTickets + 1) << "\n";
	for (int i = minTickets; i <= maxTickets; i++) { std::cout << i << " "; }
	std::cout << "\n";
	return 0;
}