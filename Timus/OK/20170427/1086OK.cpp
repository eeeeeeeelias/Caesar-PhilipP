//1086. Криптография
#include <iostream>
const int MAX_X = 163841, MAX_N = 15000;
int main()
{
	int isPrime[MAX_X + 1], primes[MAX_N + 1];
	for (int i = 1; i <= MAX_X; i++) { isPrime[i] = i; }
	for (int i = 2, primenumber = 1; i <= MAX_X; i++) {
		if (isPrime[i] != 0) {
			primes[primenumber] = i;
			primenumber++;
			for (int j = i; j <= MAX_X; j += i) { isPrime[j] = 0; }
		}
	}


	int K = 0;
	std::cin >> K;
	for (int i = 0, X = 0; i < K; i++) {
		std::cin >> X;
		std::cout << primes[X] << "\n";
	}
	return 0;
}