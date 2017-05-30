//2003. Простая магия
#include <iostream>
#include <map>

const int MAX_N = 10000;

void quickSort(int a[], int L, int R)
{
	int i = L, j = R, v = a[(L + R) / 2];
	do {
		while (a[i] < v) { i++; }
		while (a[j] > v) { j--; }
		if (i <= j) { std::swap(a[i++], a[j--]); }
	} while (i <= j);
	if (i < R) { quickSort(a, i, R); }
	if (j > L) { quickSort(a, L, j); }
}

int main()
{
	int N = 0, vector[MAX_N], vectorLength = 0;
	std::cin >> N;
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		if (X > 1) {
			vector[vectorLength] = X;
			vectorLength++;
		}
	}
	if (vectorLength == 0) { //only 1s
		std::cout << "0\n";
	}
	else {
		quickSort(vector, 0, N - 1);
		bool hasSets = false, hasPairs = false;
		for (int i = 0; i < vectorLength - 2 && !hasSets; i++) {
			hasSets |= (vector[i] == vector[i + 1] && vector[i + 1] == vector[i + 2]);
			hasPairs |= (vector[i] == vector[i + 1]);
		}
		hasPairs |= (vector[vectorLength - 2] == vector[vectorLength - 1]);

		if (hasSets) { //there are sets
			std::cout << "infinity\n";
		}
		else {

		}
	}
	return 0;
}