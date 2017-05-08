//1104. Не спрашивай даму о возрасте
#include <iostream>
#include <string>
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1104.in", "rt", stdin);
	#endif
	long long minK = 0, answer = 0, sum = 0;
	for (char c; std::cin >> c; ) {
		if (c >= '0' && c <= '9') {
			sum += c - '0';
			if (minK < c - '0' + 1) { minK = c - '0' + 1; }
		}
		else {
			sum += c - 'A' + 10;
			if (minK < c - 'A' + 10) { minK = c - 'A' + 10 + 1; }
		}
	}
	if (minK < 2) { minK = 2; }
	for (long long k = minK; k <= 36; k++) {
		if (sum % (k - 1) == 0) {
			answer = k;
			break;
		}
	}
	if (answer > 0) { std::cout << answer << "\n"; }
	else { std::cout << "No solution.\n"; }
	return 0;
}