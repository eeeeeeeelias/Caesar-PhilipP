//1017. Лестницы
#include <iostream>
const int MAX_N = 500, MAX_LENGTH = 32;

int main()
{
	int N = 0; 
	long long ways[MAX_N + 1][MAX_LENGTH + 1];
	//второй индекс - длина лестницы, первый - кол-во кубиков
	std::cin >> N;

	double max_length = (-0.5 + sqrt(8 * N + 1)) / 2.0;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= max_length; j++) {
			ways[i][j] = 0;
		}
	}

	for (int i = 1; i <= N; i++) {
		ways[i][1] = 1;
	}

	for (int j = 2; j <= max_length; j++) {
		for (int i = j + 1; i <= N; i++) {
			ways[i][j] = ways[i - j][j - 1] + ways[i - j][j];
		}
	}

	long long answer = 0;
	for (int j = 2; j <= max_length; j++) {
		answer += ways[N][j];
	}
	std::cout << answer << "\n";
	return 0;
}