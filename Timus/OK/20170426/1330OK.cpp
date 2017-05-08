//1330. Интервалы
#include <iostream>
const int MAX_N = 10000;
int main()
{
	int N = 0, Q = 0, sum[MAX_N];
	std::cin >> N;
	std::cin >> sum[0];
	for (int i = 1, X = 0; i < N; i++) {
		std::cin >> X;
		sum[i] = sum[i - 1] + X;
	}
	std::cin >> Q;
	for (int i = 0, L = 0, R = 0; i < Q; i++) {
		std::cin >> L >> R;
		if (L == 1) { std::cout << sum[R - 1] << "\n"; }
		else {
			std::cout << (sum[R - 1] - sum[L - 2]) << "\n";
		}
	}
	return 0;
}