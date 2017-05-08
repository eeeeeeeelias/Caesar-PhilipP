//1009. K-ичные числа.
#include <iostream>
int main()
{
	int N = 0, K = 0, is0[100], not0[100];
	std::cin >> N >> K;
	not0[0] = K - 1;
	is0[0] = 0;
	for (int i = 1; i < N; i++) {
		not0[i] = (K - 1) * (not0[i - 1] + is0[i - 1]);
		is0[i] = not0[i - 1];
	}
	std::cout << (is0[N - 1] + not0[N - 1]) << "\n";
	return 0;
}