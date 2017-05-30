//1119. Метро
#pragma comment(linker, "/STACK:16777216")
#include <iostream>

const int MAX_N = 1000, infinity = 2000000;

int main()
{
	int N = 0, M = 0, K = 0;
	double city[MAX_N + 1][MAX_N + 1], diagonals[MAX_N + 1][MAX_N + 1];

	std::cin >> N >> M;
	for (int i = 0; i <= M; i++) {
		for (int j = 0; j <= N; j++) {
			diagonals[i][j] = infinity;
		}
	}

	std::cin >> K;
	for (int i = 0, X = 0, Y = 0; i < K; i++) {
		std::cin >> X >> Y;
		diagonals[Y - 1][X - 1] = 100 * sqrt(2);
	}
	
	city[0][0] = 0;
	for (int i = 1; i <= M; i++) { city[i][0] = city[i - 1][0] + 100; }
	for (int j = 1; j <= N; j++) { city[0][j] = city[0][j - 1] + 100; }
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= N; j++) {
			city[i][j] = std::fmin(city[i][j - 1] + 100, std::fmin(city[i - 1][j] + 100, city[i - 1][j - 1] + diagonals[i - 1][j - 1]));
		}
	}
	std::cout << round(city[M][N]) << "\n";
}