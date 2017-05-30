//1931. Отличная команда
#include <iostream>

int main()
{
	long long N = 0, thisManDefects = 0;
	long long nowCandidat = 0, nowCandidatDefects = 0, nowCandidatComparisons = 0;
	long long poorestGuy = 0, poorestGuyComparisons = 0;
	std::cin >> N;
	nowCandidat = 1;
	std::cin >> nowCandidatDefects;
	if (N == 1) {
		std::cout << 1 << "\n";
	}
	else {
		for (long long i = 2; i <= N; i++) {
			std::cin >> thisManDefects;
			nowCandidatComparisons++;
			if (nowCandidatDefects >= thisManDefects) {
				if (poorestGuyComparisons < nowCandidatComparisons) {
					//у нас новый самый несчастный
					poorestGuy = nowCandidat;
					poorestGuyComparisons = nowCandidatComparisons;
				}
				nowCandidat = i;
				nowCandidatComparisons = 1;
				nowCandidatDefects = thisManDefects;
			}
		}
		if (poorestGuyComparisons <= nowCandidatComparisons) {
			poorestGuy = nowCandidat;
			poorestGuyComparisons = nowCandidatComparisons;
		}
		std::cout << poorestGuy << "\n";
	}
}