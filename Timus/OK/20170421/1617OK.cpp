//1617. Ползуны
#include <iostream>

const int Dwheel = 101;

int main() {
	int N = 0, wheels[Dwheel], wheel = 0, answer = 0;
	for (int i = 0; i < Dwheel; i++) { wheels[i] = 0; }

	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> wheel;
		wheels[wheel - 600]++;
	}

	for (int i = 0; i < Dwheel; i++) {
		answer += wheels[i] / 4;
	}
	std::cout << answer << std::endl;
	return 0;
}