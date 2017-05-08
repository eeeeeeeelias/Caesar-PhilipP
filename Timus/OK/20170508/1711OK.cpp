//1711. Кодовые имена
#include <iostream>
#include <string>

const int MAX_N = 16;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1711.in", "rt", stdin);
	#endif

	int N = 0, order[MAX_N];
	std::string codenames[MAX_N][3], answer[MAX_N];
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin>>codenames[i][0];
		std::cin>>codenames[i][1];
		std::cin>>codenames[i][2];
		if (codenames[i][0] > codenames[i][1]) { std::swap(codenames[i][0], codenames[i][1]); }
		if (codenames[i][1] > codenames[i][2]) { std::swap(codenames[i][1], codenames[i][2]); }
		if (codenames[i][0] > codenames[i][1]) { std::swap(codenames[i][0], codenames[i][1]); }
	}
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		order[i] = X - 1;
	}
	bool isPossible = true;
	answer[0] = codenames[order[0]][0];
	for (int i = 1; i < N; i++) {
		if (codenames[order[i]][0] > answer[i - 1]) { answer[i] = codenames[order[i]][0]; }
		else {
			if (codenames[order[i]][1] > answer[i - 1]) { answer[i] = codenames[order[i]][1]; }
			else {
				if (codenames[order[i]][2] > answer[i - 1]) { answer[i] = codenames[order[i]][2]; }
				else {
					isPossible = false;
					break;
				}
			}
		}
	}
	if (isPossible) {
		for (int i = 0; i < N; i++) { std::cout << answer[i] << "\n"; }
	}
	else { std::cout << "IMPOSSIBLE\n"; }
	return 0;
}