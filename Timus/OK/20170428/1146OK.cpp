//1146. Maximum Sum
#include <iostream>
const int MAX_N = 100, MIN_NUMBER = -127;
int main() {
	long long field[MAX_N + 1][MAX_N + 1], N = 0;
	std::cin >> N;
	for (int i = 0; i <= N; i++) {
		field[0][i] = 0;
		field[i][0] = 0;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1, X = 0; j <= N; j++) {
			std::cin >> X;
			field[i][j] = field[i][j - 1] + field[i - 1][j] - field[i - 1][j - 1] + X;
		}
	}
	int maxsum = MIN_NUMBER - 1;
	for (int i1 = 1; i1 <= N; i1++) {
		for (int j1 = 1; j1 <= N; j1++) {
			for (int i2 = i1; i2 <= N; i2++) {
				for (int j2 = j1; j2 <= N; j2++) {
					maxsum = std::fmax(maxsum, field[i2][j2] - field[i2][j1 - 1] - field[i1 - 1][j2] + field[i1 - 1][j1 - 1]);
				}
			}
		}
	}
	std::cout << maxsum << "\n";
	return 0;
}