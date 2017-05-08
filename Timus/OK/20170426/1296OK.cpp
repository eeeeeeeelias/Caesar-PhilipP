//1296. Гиперпереход
#include <iostream>
int main()
{
	int N = 0, answer = 0;
	std::cin >> N;
	for (int i = 0, sum = 0, X = 0; i < N; i++) {
		std::cin >> X;
		sum += X;
		answer = std::fmax(answer, sum);
		sum = std::fmax(sum, 0);
	}
	std::cout << answer << "\n";
	return 0;
}