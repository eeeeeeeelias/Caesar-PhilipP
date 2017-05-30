//2012. Миша и криптография
#include <iostream>

int main()
{
	long long N = 0;
	std::cin >> N;
	if (N < 1048576) { std::cout << "No\n"; }
	else {
		int powersum = 0;
		long long X = N;
		bool answer = true;
		for (; X % 2 == 0; powersum++) { X /= 2; }
		for (; X % 3 == 0; powersum++) { X /= 3; }
		for (; X % 5 == 0; powersum++) { X /= 5; }
		if (powersum > 20) { answer = false; }
		else {
			for (int i = 7; i <= 2000000 && powersum <= 20;) {
				for (; X % i == 0 && powersum <= 20; powersum++) {
					X /= i;
				}
				if (i % 6 == 1) { i += 4; }
				else { i += 2; }
			}
		}
		if (X > 1) { powersum++; }
		answer = (powersum == 20);
		std::cout << ((answer) ? "Yes" : "No") << "\n";
	}
	return 0;
}