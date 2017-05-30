//1869. Новогодний круиз
#include <iostream>
#include <algorithm>
#include <vector>

const int CAR_CAPACITY = 36, MAX_CITIES = 100;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1869.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int cities = 0, answer = 0;
	std::cin >> cities;
	for (int i = 0, VM = 0, MV = 0, passengers = 0; i < cities; i++) {
		VM = 0;
		for (int j = 0; j < i - 1; j++) {
			std::cin >> passengers;
			VM += passengers;
		}
		std::cin >> passengers;
		MV = 0;
		for (int j = i + 1; j < cities; j++) {
			std::cin >> passengers;
			MV += passengers;
		}
		answer = std::max(answer, std::max(VM, MV));
	}
	/*std::vector< std::vector<int> > field(cities);
	for (int i = 0; i < cities; i++) {
		field[i].resize(cities);
		for (int j = 0; j < cities; j++) {
			std::cin >> field[i][j];
		}
	}
	for (int i = 0; i < cities - 1; i++) {
		for (int j = cities - 2; j > i; j--) { field[i][j] += field[i][j + 1]; }
	}
	for (int i = cities - 1; i > 0; i--) {
		for (int j = 1; j < i; j++) { field[i][j] += field[i][j + 1]; }
	}*/
	std::cout << (answer + CAR_CAPACITY - 1) / CAR_CAPACITY << "\n";
	return 0;
}