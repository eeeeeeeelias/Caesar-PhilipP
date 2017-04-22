//1910. Руины титанов: сокрытый вход
#include <iostream>
int main()
{
	long long N = 0;
	std::cin >> N;
	long long L = 0, M = 0, R = 0, X = 0;
	std::cin >> L >> M >> R;
	long long maxsum = L + M + R, door = 2;
	for (int i = 3; i < N; i++) {
		std::cin >> X;
		L = M;
		M = R;
		R = X;
		if (L + M + R > maxsum) {
			door = i;
			maxsum = L + M + R;
		}
	}
	std::cout << maxsum << " " << door << "\n";
	return 0;
}