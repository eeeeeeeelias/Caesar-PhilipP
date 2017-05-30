//1864. Посиделки у Дена
#include <iostream>
#include <algorithm>
const int MAX_N = 500;

int main()
{
	int N = 0, liters[MAX_N];
	double sum = 0.0, deltasum = 0.0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> liters[i];
		sum += liters[i];
	}
	sum /= N + 1;
	for (int i = 0; i < N; i++) {
		if (liters[i] > sum) { deltasum += liters[i] - sum; }
	}
	for (int i = 0; i < N; i++) {
		if (liters[i] > sum) {
			std::cout << floor(100 * (liters[i] - sum) / deltasum + 0.0001) << " ";
		}
		else { std::cout << 0 << " "; }
	}
	std::cout << "\n";
	return 0;
}