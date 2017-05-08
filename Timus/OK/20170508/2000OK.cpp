//2000. Grand Theft Array V
#include <iostream>
const int MAX_N = 100000;
int main()
{
	int N = 0, sums[MAX_N + 1], X1 = 0, X2 = 0;
	sums[0] = 0;
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		std::cin >> sums[i];
		sums[i] += sums[i - 1];
	}
	std::cin >> X1 >> X2;
	int answer = 0; //сколько достанется первому
	if (X1 == X2) { //начинают в одной клетке
		answer = sums[X1] - sums[X1 - 1] + std::fmax(sums[X1 - 1], sums[N] - sums[X1]);
	}
	else {
		if (X1 < X2) { //первый левее
			answer = sums[(X1 + X2) / 2];
		}
		else { //первый правее
			answer = sums[N] - sums[(X1 + X2 + 1) / 2 - 1];
		}
	}
	std::cout << answer << " " << (sums[N] - answer) << "\n";
	return 0;
}