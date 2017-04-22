//1502. Точки домино
#include <iostream>
int main()
{
	long long N = 0, sum = 0;
	std::cin >> N;
	for (int i = 1; i <= N; i++) { sum += i*(i + 1); }
	sum *= 3;
	sum /= 2;
	std::cout << sum << "\n";
	return 0;
}