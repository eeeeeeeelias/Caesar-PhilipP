//1110. Степень
#include <iostream>
#include "math.h"

long long power(int X, int N, int M)
{
	switch (N) {
	case 0: 
		return (1 % M);
		break;
	case 1: 
		return (X % M);
		break;
	default:
		if (N % 2 == 0) {
			return (power(X, N / 2, M) * power(X, N / 2, M)) % M;
		}
		else {
			return (X * power(X, N / 2, M) * power(X, N / 2, M)) % M;
		}
		break;
	}
}

int main() 
{
	int N = 0, M = 0, Y = 0;
	std::cin >> N >> M >> Y;
	bool isThere = false;
	for (int X = 0; X < M; X++) {
		if (power(X, N, M) % M == Y) {
			std::cout << X << " ";
			isThere = true;
		}
	}
	if (!isThere) { std::cout << -1; }
	std::cout << "\n";
	return 0;
}