//1079. Максимум
#include <iostream>
const int MAX_N = 99999, MAX_TESTS = 10;
int main()
{
	int sequence[MAX_N + 1], maxs[MAX_N + 1], tests[MAX_TESTS], maxtest = 0;
	sequence[0] = 0;
	sequence[1] = 1;
	maxs[0] = 0;
	maxs[1] = 1;
	for (int i = 0; i < MAX_TESTS; i++) {
		std::cin >> tests[i];
		if (tests[i] == 0) { break; }
		maxtest = std::fmax(tests[i], maxtest);
	}
	for (int i = 2; i <= maxtest; i++) {
		if (i % 2 == 0) { sequence[i] = sequence[i / 2]; }
		else { sequence[i] = sequence[i / 2] + sequence[i / 2 + 1]; }
		maxs[i] = std::fmax(maxs[i - 1], sequence[i]);
	}
	for (int i = 0; i < MAX_TESTS; i++) {
		if (tests[i] == 0) { break; }
		else { std::cout << maxs[tests[i]] << "\n"; }
	}
	return 0;
}