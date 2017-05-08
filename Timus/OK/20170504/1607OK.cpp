//1607. Такси
#include <iostream>
int main() {
	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;
	if (a >= c) { //если Петя сразу предложил больше
		std::cout << a << std::endl;
	}
	else {
		int times = (c - a) / (b + d);
		a += times * b;
		c -= times * d;
		if (a + b >= c) {
			std::cout << c << "\n";
		}
		else {
			std::cout << (a + b) << "\n";
		}
	}
	return 0;
}