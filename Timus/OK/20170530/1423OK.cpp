//1423. Басня о строке
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

const int BIG_PRIME = 1046527, PRIME_BASE = 227;

std::vector<int> prefixFunction(std::string s)
{
	std::vector<int> answer(s.length());
	answer[0] = 0;
	for (int i = 1, k = 0; i < s.length(); i++) {
		while (s[i] != s[k] && k != 0) { k = answer[k - 1]; }
		if (s[i] == s[k]) { k++; }
		answer[i] = k;
	}
	return answer;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1423.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int sLength = 0, answer = -1;
	std::cin >> sLength;
	std::string A, B;
	std::getline(std::cin, A);
	std::getline(std::cin, A);
	std::getline(std::cin, B);
	A = B + ' ' + A + A;
	std::vector<int> prefixes = prefixFunction(A);
	for (int i = 2 * sLength; i <= 3 * sLength + 1; i++) {
		if (prefixes[i] == sLength) {
			answer = (sLength - i % sLength) % sLength;
			break;
		}
	}
	std::cout << answer << "\n";
	return 0;
}