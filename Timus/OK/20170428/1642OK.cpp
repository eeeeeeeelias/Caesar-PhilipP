//1642. Одномерный лабиринт
#include <iostream>
const int MAX_X = 1000;
int main()
{
	int N = 0, xExit = 0, xLeft = -MAX_X - 1, xRight = MAX_X + 1;
	std::cin >> N >> xExit;
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		if (X < 0) { xLeft = std::fmax(xLeft, X); }
		else { xRight = std::fmin(xRight, X); }
	}
	if (xExit > 0 && xRight < xExit || xExit < 0 && xLeft > xExit) { std::cout << "Impossible\n"; }
	else {
		if (xExit > 0) { std::cout << xExit << " " << (xExit - 2 * xLeft) << "\n"; }
		else { std::cout << (2 * xRight - xExit) << " " << (-xExit) << "\n"; }
	}
	return 0;
}