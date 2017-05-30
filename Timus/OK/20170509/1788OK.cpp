//1788. О пользе зонтов
#include <iostream>
const int MAX_N = 100, infinity = 100000000;

void quickSort(int a[], int L, int R)
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
	#ifndef ONLINE_JUDGE
		freopen("1788.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int girls[MAX_N + 1], boys[MAX_N + 1], girlsN = 0, boysN = 0;
	std::cin >> girlsN >> boysN;
	for (int i = 0; i < girlsN; i++) {
		std::cin >> girls[i];
	}
	quickSort(girls, 0, girlsN - 1);
	for (int i = girlsN - 2; i >= 0; i--) {
		girls[i] += girls[i + 1];
	}
	girls[girlsN] = 0;

	for (int i = 0; i < boysN; i++) {
		std::cin >> boys[i];
	}
	quickSort(boys, 0, boysN - 1);
	for (int i = boysN - 2; i >= 0; i--) {
		boys[i] += boys[i + 1];
	}
	boys[boysN] = 0;
	
	int minAnswer = infinity;

	for (int i = 0; i <= std::fmin(girlsN, boysN); i++) {
		if (minAnswer > (girls[i] + boys[i] * i)) {
			minAnswer = girls[i] + boys[i] * i;
		}
	}

	std::cout << minAnswer << "\n";

	return 0;
}