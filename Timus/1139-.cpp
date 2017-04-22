//1139. Городские кварталы
#include <iostream>
long long blocks(long long N, long long M)
{
	if (N == M) { return N; } //A, A
	else {
		if (N % 2 == 1 || M % 2 == 1) { return (M + N - 1); } //2A+1, B
		else { //2A, 2B
			return (2 * blocks(N / 2, M / 2));
		}
	}
	return 0;
}

int main()
{
	int N = 0, M = 0;
	std::cin >> N >> M;
	std::cout << blocks(N - 1, M - 1) << "\n";
	return 0;
}