//1263. Выборы
#include <iostream>
#include <string>
const int MAX_N = 10000;
int main() 
{
	int N = 0, M = 0, j = 0, votes[MAX_N];
	std::string s = "", s_itog = "";
	std::cin >> N >> M;
	for (int i = 0; i < N; i++) { votes[i] = 0; }
	for (int i = 0; i < M; i++) {
		std::cin >> j;
		votes[j - 1]++;
	}
	for (int i = 0; i < N; i++) {
		j = round((double)votes[i] * 10000 / M);
		if (j < 10) {
			std::cout << "0.0" << j;
		}
		else {
			if (j < 100) {
				std::cout << "0." << j;
			}
			else {
				std::cout << (j / 100) << ".";
				if (j % 100 == 0) { std::cout << "00"; }
				else { std::cout << j % 100; }
			}
		}
		std::cout << "%" << std::endl;
	}
	return 0;
}