//1370. Волшебник
#include <iostream>
int main()
{
	int N = 0, M = 0, answer[10];
	std::cin >> N >> M;
	M %= N;
	int left = M % N, right = (M + 9) % N;
	bool circle = (left > right);
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		if (circle && (i >= left || i <= right) || !circle && (i >= left && i <= right)) { 
			answer[(i + N - M % N) % N] = X; 
		}
	}
	for (int i = 0; i < 10; i++) { std::cout << answer[i]; }
	std::cout << "\n";
	return 0;
}