//1683. Холодильник
#include <iostream>
int main()
{
	int N = 0, i = 0;
	std::cin >> N;
	int K = N - 1;
	for (i = 0; K > 1; i++) {
		K /= 2;
	}
	if (N == 1) { std::cout << 0; }
	else { 
		std::cout << i + 1 << "\n";
		for (; N > 1; ) {
			std::cout << (N / 2) << " ";
			N = N - (N / 2);
		}
	}
	std::cout << "\n";
	return 0;
}