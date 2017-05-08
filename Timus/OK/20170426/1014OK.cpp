//1014. Произведение цифр
#include <iostream>
#include <string>
int main()
{
	long long N = 0;
	std::cin >> N;
	if (N == 0) { std::cout << 10 << "\n"; }
	else {
		if (N < 10) { std::cout << N << "\n"; }
		else {
			std::string s = "";
			for (int j = 9; j >= 2; j--) {
				for (; N % j == 0;) {
					s = ((char)('0' + j)) + s;
					N /= j;
				}
			}
			if (N == 1) std::cout << s << "\n";
			else std::cout << -1 << "\n";
		}
	}
	return 0;
}