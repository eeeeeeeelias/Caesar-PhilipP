//1190. Плитка шоколада
#include <iostream>
#include <string>
#include <algorithm>

const int FRACTIONS_SUM = 10000;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1190.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int N = 0, isIndicated = 0, nowSum = 0, amountOfNotIndicated = 0, lastIndicated = FRACTIONS_SUM, minSum = 0, maxSum = 0;

	//возможные проблемы:
	//не хватает добавки
	//добавки слишком много
	//между ближайшими указанными слишком много ингредиентов
	//слишком много перед первым - фиктивные 10000 в начале?
	//слишком много после последнего

	std::string ingredient = "";
	std::cin >> N;
	//слить остаток буфера
	for (int i = 0, massFraction = 0; i < N; i++) {
		std::cin >> ingredient >> isIndicated;
		if (isIndicated) {
			std::cin >> massFraction;
			if (amountOfNotIndicated) {
				minSum += massFraction + massFraction * amountOfNotIndicated;
				maxSum += massFraction + lastIndicated * amountOfNotIndicated;
				amountOfNotIndicated = 0;
			}
			else {
				minSum += massFraction;
				maxSum += massFraction;
			}
			lastIndicated = massFraction;
		}
		else {
			amountOfNotIndicated++;
		}
	}
	minSum += amountOfNotIndicated;
	maxSum += lastIndicated * amountOfNotIndicated;
	std::cout << ((minSum <= FRACTIONS_SUM && FRACTIONS_SUM <= maxSum) ? "YES" : "NO") << "\n";
	return 0;
}