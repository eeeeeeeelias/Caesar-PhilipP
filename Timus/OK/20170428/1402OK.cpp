//1402. Коктейли
#include <iostream>
const unsigned long long factorials[21] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000, 121645100408832000, 2432902008176640000};
int main()
{
	int N = 0;
	unsigned long long result = 0;
	std::cin >> N;
	switch (N) {
	case 21:
		std::cout << "138879579704209680000" << "\n";
		break;
	default:
		for (int i = 0; i <= N - 2; i++) {
			result += factorials[N] / factorials[i];
		}
		std::cout << result << "\n";
		break;
	}
}