//1725. Àםרכאד, אםרכאד!
#include <iostream>
int main()
{
	int N = 0, K = 0;
	std::cin >> N >> K;
	K = std::fmin(K, N + 1 - K);
	switch (N) {
	case 1: std::cout << 0; break;
	case 2: std::cout << 0; break;
	case 3: std::cout << (2 - K); break;
	default: std::cout << (N - 2 - K); break;
	}
	std::cout << "\n";
	return 0;
}