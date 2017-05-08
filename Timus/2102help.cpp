#include <iostream>
#pragma comment(linker, "/STACK:16777216")

const int MAX_N = 2000000;

int main() {
	bool primes[MAX_N + 1];
	primes[0] = false;
	primes[1] = false;
	for (int i = 2; i <= MAX_N; i++) { primes[i] = true; }
	for (int i = 2; i <= MAX_N; i++) {
		if (primes[i]) 
	}
	return 0;
}