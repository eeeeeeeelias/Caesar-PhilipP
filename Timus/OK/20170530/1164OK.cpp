//1164. Fillword
#include <iostream>
#include <string>

const int ALPH_LENGTH = 26;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("1164.in", "rt", stdin);
#endif // !ONLINE_JUDGE

	int height = 0, width = 0, wordsAmount = 0, letters[ALPH_LENGTH];
	for (int i = 0; i < ALPH_LENGTH; i++) {
		letters[i] = 0;
	}
	std::cin >> height >> width >> wordsAmount;
	std::string line;
	for (int i = 0; i < height; i++) {
		std::cin >> line;
		for (int j = 0; j < line.length(); j++) {
			letters[line[j] - 'A']++;
		}
	}
	for (int i = 0; i < wordsAmount; i++) {
		std::cin >> line;
		for (int j = 0; j < line.length(); j++) {
			letters[line[j] - 'A']--;
		}
	}

	for (int i = 0; i < ALPH_LENGTH; i++) {
		for (int j = 0; j < letters[i]; j++) {
			std::cout << (char)(i + 'A');
		}
	}
	std::cout << "\n";

	return 0;
}