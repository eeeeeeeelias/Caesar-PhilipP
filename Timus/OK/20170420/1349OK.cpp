//1349. Ферма
#include <iostream>
#include <math.h>
const int MAX_SUMMAND = 100;
/*long long int power(int x, int N) 
{
	if (N == 0) { return 1; }
	else {
		if (N == 1) { return x; }
		else {
			if (N % 2 == 0) {
				return power(x, N / 2) * power(x, N / 2);
			}
			else {
				return x * power(x, (N - 1) / 2) * power(x, (N - 1) / 2);
			}
		}
	}
}*/

int main() {
	int N = 0, a = 0, b = 0, c = 0;
	bool isFound = false;
	std::cin >> N;
	/*for (a = 1; a <= MAX_SUMMAND; a++) {
		for (b = a + 1; b <= MAX_SUMMAND; b++) {
			for (c = b + 1; c <= MAX_SUMMAND; c++) {
				if (power(a, N) + power(b, N) == power(c, N)) {
					isFound = true;
					break;
				}
			}
			if (isFound == true) { break; }
		}
		if (isFound == true) { break; }
	}
	if (isFound) {
		std::cout << a << " " << b << " " << c << std::endl;
	}
	else {
		std::cout << -1 << std::endl;
	}*/
	switch (N) {
	case 1:
		std::cout << "1 2 3";
		break;
	case 2:
		std::cout << "3 4 5";
		break;
	default:
		std::cout << -1;
	}
	std::cout << std::endl;
	return 0;
}