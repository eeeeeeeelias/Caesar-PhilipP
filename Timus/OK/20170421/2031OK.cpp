//2031. Числа-перевёртыши
#include <iostream>

int main() {
	int N = 0;
	std::cin >> N;
	switch (N) {
	case 1: std::cout << 88; break;
	case 2: std::cout << "68 88"; break;
	case 3: std::cout << "06 68 88"; break;
	case 4: std::cout << "16 06 68 88"; break;
	default: std::cout << "Glupenky Pierre"; break;
	}
	std::cout << std::endl;
	return 0;
}