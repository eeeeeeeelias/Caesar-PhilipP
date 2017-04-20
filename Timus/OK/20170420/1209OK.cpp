//1209. 1, 10, 100, 1000...
#include <iostream>
int main() { // 1 if (N - 1) is sum of arithmetic progression (1, 2, ... X)
	long long int N = 0, K = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> K;
		K = (K - 1) * 2;
		if (trunc(sqrt(K)) * (trunc(sqrt(K)) + 1) == K) {
			std::cout << 1;
		}
		else {
			std::cout << 0;
		}	
		std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}