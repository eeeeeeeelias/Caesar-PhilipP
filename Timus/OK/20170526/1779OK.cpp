//1779. Великая команда
#include <iostream>

int main()
{
	int N = 0;
	std::cin >> N;
	if (N % 2) {
		std::cout << (N / 2 - 1) * (N / 2) / 2 + (N - 1) << "\n";
		for (int i = 1; i < N; i++) { std::cout << i << " " << N << "\n"; }
	}
	else {
		std::cout << (N / 2 - 1) * (N / 2) / 2 << "\n";
	}
	for (int i = 1; i <= N / 2; i++) {
		for (int j = 1; j < i; j++) {
			std::cout << i << " " << (N / 2) * 2 - i + j + 1 << "\n";
		}
	}
	return 0;
}