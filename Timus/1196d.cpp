//1196. Экзамен по истории
#include <iostream>

const int MAX_N = 15000;

int binarySearch(int key, int L, int R, long long int A[]) 
{
	if (L == R) { return (A[L] == key) ? L : -1; }
	else {
		int M = (L + R + 1) / 2;
		if (A[M] > key) { return binarySearch(key, L, M - 1, A); }
		else {
			if (A[M] < key) { return binarySearch(key, M, R, A); }
			else { return (A[M] == key) ? M : -1; }
		}
	}
}

int main() 
{
	long long int dates[MAX_N + 1], N = 0, M = 0, D = 0;
	long long int answer = 0;
	std::cin >> N;
	dates[0] = -1;
	int j = 0;
	for (int i = 0; i < N; i++) {
		std::cin >> D;
		if (D != dates[j]) {
			j++;
			dates[j] = D;
		}
	}
	std::cin >> M;
	for (int i = 0; i < M; i++) {
		std::cin >> D;
		if (D >= dates[1] && D <= dates[N]) {
			if (binarySearch(D, 1, N, dates) != -1) { answer++; }
		}
	}
	std::cout << answer << std::endl;
	return 0;
}