//2025. Стенка на стенку
#include <iostream>

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("2025.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int tests = 0, fighters = 0, teams = 0;
	std::cin >> tests;
	for (int i = 0; i < tests; i++) {
		std::cin >> fighters >> teams;
		if (fighters % teams == 0) {
			std::cout << ((teams - 1) * fighters * fighters / 2 / teams) << "\n";
		}
		else {
			if (fighters % teams == teams - 1) {
				std::cout <<
					((fighters / teams) * (fighters / teams + 1) * (teams - 1)
						+ ((teams - 1) * (teams - 2) / 2) * (fighters / teams + 1) * (fighters / teams + 1)) << "\n";
			}
			else {
				int more = fighters % teams;
				int less = teams - more;
				int C1 = more * (more - 1) / 2, C2 = less * (less - 1) / 2, L = fighters / teams;
				std::cout << (C1 * (L + 1) * (L + 1) + C2 * (L) * (L) + more * less * L * (L + 1)) << "\n";
			}
		}
	}
	return 0;
}