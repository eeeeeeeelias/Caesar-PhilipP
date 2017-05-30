//1020. Ниточка
#include <iostream>
#include <math.h>

double distance(double X1, double Y1, double X2, double Y2)
{
	return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

int main()
{
	int N = 0;
	double R = 0, firstX = 0, firstY = 0, X1 = 0, Y1 = 0, X2 = 0, Y2 = 0;
	std::cin >> N >> R;
	std::cin >> firstX >> firstY;
	double answer = 3.141592653 * 2 * R;
	X1 = firstX;
	Y1 = firstY;
	for (int i = 1; i < N; i++) {
		std::cin >> X2 >> Y2;
		answer += distance(X1, Y1, X2, Y2);
		X1 = X2;
		Y1 = Y2;
	}
	answer += distance(X1, Y1, firstX, firstY);
	std::cout << round(answer * 100) / 100.0 << "\n";
	return 0;
}