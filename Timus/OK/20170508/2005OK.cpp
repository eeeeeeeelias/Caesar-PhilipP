//2005. Такси для программистов
#include <iostream>
#include <string>
const int N = 5, infinity = 1000000;
const std::string options[4] = { "1 2 3 4 5", "1 3 2 4 5", "1 3 4 2 5", "1 4 3 2 5" };

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("2005.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int houses[N][N], prior[N], length[N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cin >> houses[i][j];
		}
	}
	int answer = -1, rightWay = infinity;
	for (int j = 0, nowSum = 0; j < 4; j++) {
		nowSum = 0;
		for (int i = 0; i <= 6; i += 2) {
			nowSum += houses[options[j][i] - '1'][options[j][i + 2] - '1'];
		}
		if (nowSum < rightWay) {
			rightWay = nowSum;
			answer = j;
		}
	}
	std::cout << rightWay << "\n";
	std::cout << options[answer] << "\n";
	return 0;
}