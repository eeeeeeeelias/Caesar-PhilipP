//1319. Отель
#include <iostream>
int main() 
{
	int N = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j >= i) {
				std::cout << ((N - j + i) * (N - j + i - 1)) / 2 + i + 1 << " ";
			}
			else {
				std::cout << N * N - ((N - i + j) * (N - i + j + 1)) / 2 + j + 1 << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}