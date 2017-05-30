//1142. Отношения
#include <iostream>
const long long answer[11] = { 0, 0, 3, 13, 75, 541, 4683, 47293, 545835, 7087261, 102247563 };

int main()
{
	int N = 0;
	for (; std::cin >> N;) {
		if (N == -1) { break; }
		else { std::cout << answer[N] << "\n"; }
	}
	return 0;
}

/*const int MAX_N = 10;

long long C_n_k(int N, int K)
{
	if (K == 0 || K == N) {
		return 1;
	}
	else {
		return C_n_k(N - 1, K - 1) + C_n_k(N - 1, K);
	}
}

bool nextOption(bool a[], int aLength)
{
	int i = aLength - 1;
	for (; i >= 0; i--) {
		if (!a[i]) { break; }
	}
	if (a[i]) { return false; }
	else {
		a[i] = true;
		for (int j = i + 1; j < aLength; j++) { a[j] = false; }
		return true;
	}
}

int main()
{
	bool comparisons[MAX_N];
	int N = 0, nowN = 0, nowEqual = 0;
	long long answer = 0, miniSum = 0;
	for (int j = 2; j <= 10; j++) {
		N = j;
		answer = 0;
		miniSum = 0;
		for (int i = 0; i < N - 1; i++) { comparisons[i] = false; }
		do {
			miniSum = 1;
			nowN = N;
			nowEqual = 1;
			for (int i = 0; i < N - 1; i++) {
				if (comparisons[i]) { nowEqual++; }
				else {
					miniSum *= C_n_k(nowN, nowEqual);
					nowN -= nowEqual;
					nowEqual = 1;
				}
			}
			if (comparisons[N - 2]) {
				miniSum *= C_n_k(nowN, nowEqual);
			}
			answer += miniSum;
		} while (nextOption(comparisons, N - 1));
		std::cout << answer << "\n";
	}
	return 0;
}*/