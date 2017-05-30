//1964. Китайский язык
#include <iostream>

const int MAX_K = 20;

void quickSort(long long a[], int L, int R)
{
	int i = L, j = R, v = a[(L + R) / 2];
	do {
		while (a[i] > v) { i++; }
		while (a[j] < v) { j--; }
		if (i <= j) { std::swap(a[i++], a[j--]); }
	} while (i <= j);
	if (i < R) { quickSort(a, i, R); }
	if (j > L) { quickSort(a, L, j); }
}

int main()
{
	long long N = 0, K = 0, sum = 0, dialects[MAX_K];
	std::cin >> N >> K;
	for (int i = 0; i < K; i++) {
		std::cin >> dialects[i];
	}
	quickSort(dialects, 0, K - 1);

	long long answer = N;
	for (int i = 0; i < K; i++) {
		answer = std::fmax(0, answer + dialects[i] - N);
	}

	std::cout << answer << "\n";
	return 0;
}