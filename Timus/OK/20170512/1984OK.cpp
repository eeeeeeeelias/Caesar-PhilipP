//1984. Охранник компота
#include <iostream>

int main()
{
	int N = 0;
	std::cin >> N;
	if (N < 3) { std::cout << N << "\n"; }
	else {
		printf("%.6lf", 1 + 1.0 / cos(3.141592653 * (N - 2.0) / (2.0 * N)));
		std::cout << "\n";
	}
	return 0;
}