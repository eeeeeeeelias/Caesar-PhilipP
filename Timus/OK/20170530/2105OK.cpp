//2105. Алиса и Боб на велосипедах
#include <iostream>
#include <algorithm>

int main()
{
	long long circleLength = 0, promenadeTime = 0, AliceV = 0, BobV = 0, squirrelFeedingsAmount = 0;
	std::cin >> circleLength >> promenadeTime >> AliceV >> BobV;
	std::cin >> squirrelFeedingsAmount;
	long long fullPath = promenadeTime * (AliceV + BobV);
	for (int i = 0, whoFeeds = 0, whenStarts = 0, howLong = 0; i < squirrelFeedingsAmount; i++) {
		std::cin >> whoFeeds >> whenStarts >> howLong;
		if (whoFeeds == 1) { fullPath -= howLong * AliceV; }
		else { fullPath -= howLong * BobV; }
	}
	std::cout << (fullPath / circleLength) << "\n";
	return 0;
}