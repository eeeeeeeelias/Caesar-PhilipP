//1118. Нетривиальные числа
#include <iostream>

int main()
{
	int L = 0, R = 0;
	std::cin >> L >> R;
	double minTriviality = 1000, nowTriviality = 0;
	int mostUntrivious = -1;
	if (L == 1) { std::cout << 1 << "\n"; }
	else {
		for (int j = R; j >= L; j--) {
			nowTriviality = 1;
			for (int i = 2; i <= sqrt(j); i++) {
				if (j % i == 0) {
					nowTriviality += i;
					if (((double)j / i) != (i)) { nowTriviality += j / i; }
				}
			}
			if (nowTriviality == 1) {
				mostUntrivious = j;
				break;
			}
			else {
				nowTriviality /= j;
				if (nowTriviality < minTriviality) {
					minTriviality = nowTriviality;
					mostUntrivious = j;
				}
			}
		}
		std::cout << mostUntrivious << "\n";
	}
	return 0;
}