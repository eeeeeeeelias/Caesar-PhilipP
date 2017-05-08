//1021. Таинство суммы
#include <iostream>
const int MAX_N = 32768, SUM = 10000;
int main()
{
	bool inList1[MAX_N * 2];
	for (int i = 0; i < MAX_N * 2; i++) { inList1[i] = false; }
	int N = 0;
	std::cin >> N;
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		inList1[X + MAX_N] = true;
	}
	std::cin >> N;
	bool answer = false;
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		if (X >= -MAX_N + SUM + 1) {
			answer = answer || (inList1[SUM + MAX_N - X]);
		}
	}
	std::cout << ((answer) ? "YES" : "NO") << "\n";
	return 0;
}