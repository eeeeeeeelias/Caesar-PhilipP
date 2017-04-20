//1313. К вопросу о спорте
#include <iostream>
const int MAX_N = 100;
int main() {
	int N = 0, monitor[MAX_N][MAX_N];
	int i = 0, j = 0;
	std::cin >> N;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			std::cin >> monitor[i][j];
		}
	}
	j = 0;
	i = 0;
	for (; i < N && j < N;) {
		std::cout << monitor[i][j] << " ";
		if (i > 0 && j < N - 1) { // same diagonal
			i--;
			j++;
		}
		else { // new diagonal
			if (j == N - 1) { // after main diagonal
				j = i + 1;
				i = N - 1;
			}
			else { // before main diagonal
				i = j + 1;
				j = 0;
			}
		}
	}
	std::cout << std::endl;
	return 0;
}