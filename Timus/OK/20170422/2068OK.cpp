//2068. Игра с орехами
#include <iostream>
int main()
{
	long long N = 0, sum = 0, nuts = 0;
	std::cin >> N;
	for (long long i = 0; i < N; i++) {
		std::cin >> nuts;
		sum += nuts;
	}
	std::cout << (((sum - N) % 4 == 0) ? ("Stannis") : ("Daenerys")) << "\n";
	return 0;
}