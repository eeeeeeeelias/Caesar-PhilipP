//1005. Куча камней
#include <iostream>

const int MAX_N = 20;

int main()
{
	int N = 0, stones[MAX_N], sum = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> stones[i];
		sum += stones[i];
	}
	int minDelta = sum;
	for (int i = 0, nowSum = 0; i < pow(2, N); i++) {
		nowSum = 0;
		for (int j = i, k = 0; j > 0; j = j >> 1) {
			if (j % 2 == 1) { nowSum += stones[k]; }
			k++;
		}
		if (abs(sum - 2 * nowSum) < minDelta) {
			minDelta = abs(sum - 2 * nowSum);
		}
	}
	std::cout << minDelta << "\n";
	return 0;
}