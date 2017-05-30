//1821. Биатлон
#include <iostream>
#include <string>
const int MAX_N = 100;

struct finish {
	std::string name;
	int finishMoment, finishTime;
};

int stringToTenths(std::string s)
{
	if (s.length() == 7) {
		return 600 * (10 * (s[0] - '0') + (s[1] - '0')) + 10 * (10 * (s[3] - '0') + (s[4] - '0')) + (s[6] - '0');
	}
	else {
		return 600 * (s[0] - '0') + 10 * (10 * (s[2] - '0') + (s[3] - '0')) + (s[5] - '0');
	}
}

void quickSortInt(finish a[], int L, int R) {
	int i = L, j = R;
	int v = a[(L + R) / 2].finishMoment;
	do {
		while (a[i].finishMoment < v) { i++; }
		while (a[j].finishMoment > v) { j--; }
		if (i <= j) { std::swap(a[i++], a[j--]); }
	} while (i <= j);
	if (i < R) { quickSortInt(a, i, R); }
	if (j > L) { quickSortInt(a, L, j); }
}

void quickSortString(std::string a[], int L, int R) {
	int i = L, j = R;
	std::string v = a[(L + R) / 2];
	do {
		while (a[i] < v) { i++; }
		while (a[j] > v) { j--; }
		if (i <= j) { std::swap(a[i++], a[j--]); }
	} while (i <= j);
	if (i < R) { quickSortString(a, i, R); }
	if (j > L) { quickSortString(a, L, j); }
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1821.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	finish protocol[MAX_N];
	std::string leaders[MAX_N], name = "", time =  "";
	int N = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> protocol[i].name >> time;
		protocol[i].finishTime = stringToTenths(time);
		protocol[i].finishMoment = protocol[i].finishTime + 300 * i;
	}
	quickSortInt(protocol, 0, N - 1);
	int leadersN = 1, nowBest = protocol[0].finishTime;
	leaders[0] = protocol[0].name;
	for (int i = 1; i < N; i++) {
		if (nowBest > protocol[i].finishTime) {
			leaders[leadersN] = protocol[i].name;
			nowBest = protocol[i].finishTime;
			leadersN++;
		}
	}
	quickSortString(leaders, 0, leadersN - 1);
	std::cout << leadersN << "\n";
	for (int i = 0; i < leadersN; i++) {
		std::cout << leaders[i] << "\n";
	}
	return 0;
}