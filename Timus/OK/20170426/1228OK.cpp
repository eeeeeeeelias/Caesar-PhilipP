//1228. Массив
#include <iostream>
int main()
{	
	long long N = 0, S = 0, L = 0, R = 0;
	std::cin >> N >> S >> L;
	std::cout << (S / L - 1) << " ";
	for (long long i = 1; i < N; i++) {
		std::cin >> R;
		std::cout << (L / R - 1) << " ";
		L = R;
	}
	std::cout << "\n";
	return 0;
}