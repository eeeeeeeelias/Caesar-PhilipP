//1224. Спираль
#include <iostream>

int main() {
	long long int N = 0, M = 0;
	std::cin >> N >> M;
	if (N + M == 2) { std::cout << 0 << std::endl; }
	else { std::cout << ((N <= M) ? (2 * N - 2) : (2 * M - 1)) << std::endl; }
	return 0;
}