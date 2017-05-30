//1084. Пусти козла в огород
#include <iostream>
#include <cmath>

int main()
{
	double square = 0, rope = 0;
	//double pi = 3.141592653;
	double pi = acos(-1.0);
	std::cin >> square >> rope;
	if (rope * 2 <= square) {
		printf("%.3lf", pi * rope * rope);
		std::cout << "\n";
	}
	else {
		if (rope * 2 >= square * sqrt(2)) {
			printf("%.3lf", square * square);
			std::cout << "\n";
			//std::cout << square * square << ".000" << "\n";
		}
		else {
			square /= 2.0;
			double myAcos = 2 * acos(square / rope);
			printf("%.3lf", (pi * rope * rope - 4 * rope * rope / 2.0 * (myAcos - sin(myAcos))));
			std::cout << "\n";
		}
	}
	return 0;
}