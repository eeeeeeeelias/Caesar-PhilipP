//1167. Bicolored horses
#include <iostream>
#include <algorithm>
const int MAX_N = 500, infinity = 2000000;

int main()
{
	int blacks[MAX_N + 1], whites[MAX_N + 1], minUnhappiness[MAX_N + 1][MAX_N + 1];
	int horses = 0, stables = 0;
	std::cin >> horses >> stables;
	blacks[0] = whites[0] = 0;
	for (int j = 1, X = 0; j <= horses; j++) {
		blacks[j] = blacks[j - 1];
		whites[j] = whites[j - 1];
		std::cin >> X;
		if (X) { blacks[j]++; }
		else { whites[j]++; }
	}
	for (int j = 1; j <= horses; j++) {
		minUnhappiness[1][j] = blacks[j] * whites[j];
	}
	for (int i = 2; i <= stables; i++) {
		for (int j = 1; j <= horses; j++) {
			minUnhappiness[i][j] = infinity;
			for (int k = 1; k < j; k++) {
				minUnhappiness[i][j] = std::min(minUnhappiness[i][j], minUnhappiness[i - 1][k] + (blacks[j] - blacks[k]) * (whites[j] - whites[k]));
			}
		}
	}
	std::cout << minUnhappiness[stables][horses] << "\n";
	return 0;
}