#include <iostream>

int main() 
{
	unsigned int X = 0, sum = 0;
	std::cin >> X;
	for (; X > 0; X /= 10) {
		sum += X % 10;
	}
	std::cout << sum;
}