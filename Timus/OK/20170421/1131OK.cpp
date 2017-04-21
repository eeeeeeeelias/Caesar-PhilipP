//1131. Копирование
#include <iostream>

int main() 
{
	long long int N = 0, K = 0, T = 0, answer = 0, power2 = 1, has = 0;
	std::cin >> N >> K;
	if (N <= K) {
		power2 = 1;
		for (answer = 0; power2 < N; answer++) { power2 *= 2; }
	}
	else {
		power2 = 1;
		for (answer = 0; ; ) {
			power2 *= 2;
			answer++;
			if (power2 >= K) {
				break;
			}
		}
		has = power2;
		answer += ((N - has + K - 1) / K);
	}
	std::cout << answer << std::endl;
	return 0;
}