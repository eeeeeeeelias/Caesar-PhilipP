#include <iostream>

int main() 
{
	unsigned int X = 0, Y = 0;
	std::cin >> X;
	if (X % 2 == 0) {
		Y = 2;
	}
	else {
		for (int i = 3; i * i <= X; i += 2) {
			if (X % i == 0) {
				Y = i;
				break;
			}
		}
	}
	if (Y > 0) {
		std::cout << Y;
	}
	else
	{
		std::cout << X;
	}
	system("pause");
}