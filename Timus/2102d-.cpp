//2102. Миша и криптография
#include <iostream>
int main()
{
	long long N = 0;
	std::cin >> N;
	long long X = N;
	if (N < 1048576) { std::cout << "No" << "\n"; }
	else { //если число >= 2^20
		int powersum = 0;
		for (; N % 2 == 0; powersum++) {
			N /= 2;
			if (powersum > 20) { break; }
		}
		for (; N % 3 == 0; powersum++) {
			N /= 3;
			if (powersum > 20) { break; }
		}
		for (; N % 5 == 0; powersum++) {
			N /= 5;
			if (powersum > 20) { break; }
		}
		float Xsqrt = sqrt(X);
		for (long long i = 7; i <= Xsqrt; ) {
			for (; N % i == 0; powersum++) {
				N /= i;
				if (powersum > 20) { break; }
			}
			if (powersum > 20) { break; }
			if (N % 6 == 1) { i += 4; }
			else { i += 2; }
		}
		if (N != 1) { powersum++; }
		std::cout << ((powersum == 20) ? "Yes" : "No") << "\n";
	}
	return 0;
}