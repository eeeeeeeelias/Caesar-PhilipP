//1525. Path
#include <iostream>
#include <algorithm>

int main()
{
#ifndef ONLINE_JUDGE
	freopen("1525.in", "rt", stdin);
#endif // !ONLINE_JUDGE

	long long LR = 0, DU = 0, BF = 0;
	std::cin >> LR >> DU >> BF;
	long long mostL = 1, mostR = LR, mostD = 1, mostU = DU, mostB = 1, mostF = BF;
	for (char instruction = '0'; std::cin >> instruction; ) {
		switch (instruction) {
		case 'l':
			mostL = std::max(mostL - 1, (long long) 1);
			mostR = std::max(mostR - 1, (long long) 1);
			break;
		case 'r':
			mostL = std::min(mostL + 1, LR);
			mostR = std::min(mostR + 1, LR);
			break;
		case 'd':
			mostD = std::max(mostD - 1, (long long) 1);
			mostU = std::max(mostU - 1, (long long) 1);
			break;
		case 'u':
			mostD = std::min(mostD + 1, DU);
			mostU = std::min(mostU + 1, DU);
			break;
		case 'b':
			mostB = std::max(mostB - 1, (long long) 1);
			mostF = std::max(mostF - 1, (long long) 1);
			break;
		case 'f':
			mostB = std::min(mostB + 1, BF);
			mostF = std::min(mostF + 1, BF);
			break;
		}
	}
	std::cout << (mostR - mostL + 1) * (mostU - mostD + 1) * (mostF - mostB + 1) << "\n";
	return 0;
}