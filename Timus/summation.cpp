//сколько двоек?
#include <iostream>

int howMuch2(int N) {
	if (N < 2) {
		return 0;
	}
	else {
		if (N < 12) {
			return 1;
		}
		else {
			return howMuch2(N / 10) * ((N + 1) % 10) + howMuch2(N / 10 - 1) * (9 - N % 10) + N / 10 + ((N % 10 >= 2) ? 1 : 0);
		}
	}
}

int main()
{
	int N = 0;
	std::cin >> N;
	std::cout << howMuch2(N) << "\n";
	return 0;
}