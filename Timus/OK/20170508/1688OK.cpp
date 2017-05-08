//1688. Team.GOV!
#include <iostream>
int main()
{
	long long N = 0, M = 0, answer = -1, sum = 0;
	std::cin >> N >> M;
	N *= 3;
	bool answerIsFound = false;
	for (long long i = 1, X = 0; i <= M; i++) {
		std::cin >> X;
		sum += X;
		if (sum > N && !answerIsFound) {
			answer = i;
			answerIsFound = true;
		}
	}
	if (answer > 0) { std::cout << "Free after " << answer << " times." << "\n"; }
	else { std::cout << "Team.GOV!\n"; }
}