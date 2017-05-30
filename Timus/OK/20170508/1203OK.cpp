//1203. Научная конференция
#include <iostream>

const int MAX_N = 101000;

void quickSort(std::pair<int, int> *a, int L, int R)
{
	int v = a[(L + R) / 2].second;
	int i = L, j = R;
	do {
		while (a[i].second < v) { i++; }
		while (a[j].second > v) { j--; }
		if (i <= j) { std::swap(a[i++], a[j--]); }
	} while (i <= j);
	if (i < R) { quickSort(a, i, R); }
	if (j > L) { quickSort(a, L, j); }
}

int main()
{
	std::pair<int, int> lectures[MAX_N];
	int N = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> lectures[i].first >> lectures[i].second;
	}
	quickSort(lectures, 0, N - 1);
	int answer = 1, nowR = lectures[0].second;
	for (int i = 1; i < N; i++) {
		if (lectures[i].first > nowR) {
			answer++;
			nowR = lectures[i].second;
		}
	}
	std::cout << answer << "\n";
	return 0;
}