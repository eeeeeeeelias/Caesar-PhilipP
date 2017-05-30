//1083. Факториалы!!!
#include <iostream>
#include <string>

int main()
{
	int N = 0, product = 1;
	std::string s;
	std::cin >> N >> s;
	int K = s.length();
	for (int i = N;
		(i >= N % K && N % K != 0)
		|| (i >= K && N % K == 0); i -= K) {
		product *= i;
	}
	std::cout << product << "\n";
	return 0;
}