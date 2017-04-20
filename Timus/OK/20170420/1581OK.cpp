//1581. Работа в команда
#include <iostream>
int main() {
	int N = 0, X = 0, M = 0, t = 0;
	std::cin >> N;
	std::cin >> X;
	M = 1;
	for (int i = 1; i < N; i++) {
		std::cin >> t;
		if (t == X) { M++; }
		else {
			std::cout << M << " " << X << " ";
			M = 1;
			X = t;
		}
	}
	if (M != 0) {
		std::cout << M << " " << X;
	}
	std::cout << std::endl;
	return 0;
}