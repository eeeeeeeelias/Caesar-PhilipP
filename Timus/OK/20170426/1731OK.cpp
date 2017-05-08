//1731. Укроп
#include <iostream>

int main()
{
	int N = 0, M = 0;
	std::cin >> N >> M;
	for (int i = 1; i <= N; i++) { std::cout << i << " "; }
	std::cout << "\n";
	for (int i = 1; i <= M; i++) { std::cout << (i * 60) << " "; }
	std::cout << "\n";
	return 0;
}