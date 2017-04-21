//1025. Демократия в опасности
#include <iostream>
const int MAX_POPULATION = 9999, MAX_GROUPS = 101;
int main() 
{
	int K = 0, groups[MAX_POPULATION + 1], X = 0, answer = 0, mygroups = 0;
	for (int i = 1; i <= MAX_POPULATION; i++) {
		groups[i] = 0;
	}
	std::cin >> K;
	for (int i = 0; i < K; i++) {
		std::cin >> X;
		groups[X]++;
	}
	for (int i = 1; i <= MAX_POPULATION; i++) {
		if (groups[i] > (K + 1) / 2 - mygroups) {
			answer += ((K + 1) / 2 - mygroups) * ((i + 1) / 2);
			break;
		}
		else {
			answer += groups[i] * ((i + 1) / 2);
			mygroups += groups[i];
		}
	}
	std::cout << answer << std::endl;
	return 0;
}