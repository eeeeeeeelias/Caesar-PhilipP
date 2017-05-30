//1262. ѕсевдоримское число
#include <iostream>

const int howMuchDigits[10] = { 0, 1, 2, 3, 2, 1, 2, 3, 4, 2 };
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1262.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	long long answer = 0;
	for (char digit; std::cin >> digit; answer += howMuchDigits[digit - '0']) {}
	std::cout << answer << "\n";
	return 0;
}