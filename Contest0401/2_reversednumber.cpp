#include <iostream>

int main() 
{
	unsigned int X = 0, Y = 0;
	std::cin >> X;
	for (; X > 0; X /= 10) {
		Y = Y * 10 + X % 10;
	}
	std::cout << Y;
}