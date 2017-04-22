//1290. Саботаж
#include <iostream>
const int MAX_P = 25000;
int main()
{
	int N = 0, P = 0, A[MAX_P + 1];
	std::cin >> N;
	for (int i = 1; i <= MAX_P; i++) { A[i] = 0; }
	for (int i = 0; i < N; i++) {
		std::cin >> P;
		A[P]++;
	}
	for (int i = MAX_P; i > 0; i--) {
		for (; A[i] > 0; A[i]--) { std::cout << i << "\n"; }
	}
	return 0;
}