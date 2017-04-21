//1820. Уральские бифштексы
#include <iostream>
int main() 
{
	int N = 0, K = 0;
	std::cin >> N >> K;
	if (N <= K) { std::cout << 2 << std::endl; }
	else { std::cout << ((N * 2 + K - 1) / K) << std::endl; }
	return 0;
}