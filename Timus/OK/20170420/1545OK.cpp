//1545. Èונמדכטפû
#include <iostream>
#include <string>
const int ALPHABET_LENGTH = 26;
int main() 
{
	int N = 0;
	char L = '0';
	std::string s = "";
	bool isExist[ALPHABET_LENGTH][ALPHABET_LENGTH];
	for (int i = 0; i < ALPHABET_LENGTH; i++) {
		for (int j = 0; j < ALPHABET_LENGTH; j++) {
			isExist[i][j] = false;
		}
	}
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> s;
		isExist[s[0] - 'a'][s[1] - 'a'] = true;
	}
	std::cin >> L;
	for (int i = 0; i < ALPHABET_LENGTH; i++) {
		if (isExist[L - 'a'][i]) {
			std::cout << L << (char)(i + 'a') << std::endl;
		}
	}
	return 0;
}