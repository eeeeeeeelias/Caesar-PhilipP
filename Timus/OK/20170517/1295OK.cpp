//1295. Απεδ
#include <iostream>

int main()
{
/*	long long A[4] = { 1, 1, 1, 1 }, sum = 0;
	for (int i = 0; i <= 20; i++) {
		sum = 0;
		for (int j = 0; j <= 3; j++) {
			sum = (sum + A[j]);
			A[j] *= j + 1;
		}
		std::cout << i << " => " << sum << "\n";
	}*/
	int N = 0;
	std::cin >> N;
	switch (N % 4) {
	case 0: std::cout << 0 << "\n"; break;
	case 1:
		if (N % 20 == 5) { std::cout << 2 << "\n"; }
		else { std::cout << 1 << "\n"; }
		break;
	case 2: std::cout << 1 << "\n"; break;
	case 3: std::cout << 2 << "\n"; break;
	}
	return 0;
}