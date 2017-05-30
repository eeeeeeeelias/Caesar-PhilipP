//1073.  вадратнаа€ страна
#include <iostream>
#include <algorithm>

const int MAX_N = 60000, INFINITY_NUMBER = 10000;

int main() {
	int min_certificates[MAX_N + 1], N = 0;
	std::cin >> N;
	for (int i = 0; i <= N; i++) { min_certificates[i] = INFINITY_NUMBER; }
	for (int j = 1; j <= sqrt(N); j++) { min_certificates[j * j] = 1; }

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= sqrt(i); j++) {
			min_certificates[i] = std::min(min_certificates[i], min_certificates[j * j] + min_certificates[i - j * j]);
		}
	}

	std::cout << min_certificates[N] << "\n";

	return 0;
}