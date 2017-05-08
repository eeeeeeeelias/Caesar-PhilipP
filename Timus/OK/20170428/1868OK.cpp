//1868. Конкурс прогнозов
#include <iostream>
#include <string>
const int medalsAmount = 4;
int main() {
	#ifndef ONLINE_JUDGE
		freopen("1868.in", "rt", stdin);
	#endif
	std::string teams[3 * medalsAmount];
	for (int i = 0; i < 3 * medalsAmount; i++) { std::getline(std::cin, teams[i]); }
	int N = 0, bestResult = -1, bestsAmount = -1;
	std::string team = "", medal = "";
	std::cin >> N;
	for (int i = 0, Ki = 0, result = 0; i < N; i++) { //цикл по прогнозистам
		result = 0;
		std::cin >> Ki;
		std::getline(std::cin, team);
		for (int j = 0, k = 0; j < Ki; j++) { //цикл по прогнозам прогнозиста
			std::cin >> team;
			std::cin >> medal;
			std::cin >> medal;
			if (medal == "gold") { k = 0; } //с какой команды начиная смотрим
			else {
				if (medal == "silver") { k = 4; }
				else { k = 8; }
			}
			for (int l = k; l < k + 4; l++) {
				if (team == teams[l]) {
					result++;
					break;
				}
			}
		}

		if (bestResult < result) { //проверяем результат
			bestResult = result;
			bestsAmount = 1;
		}
		else {
			if (bestResult == result) { bestsAmount += 1; }
		}
	}
	if (bestResult == 0) { std::cout << (N * 5) << "\n"; }
	else { std::cout << (bestsAmount * 5) << "\n"; }
	return 0;
}