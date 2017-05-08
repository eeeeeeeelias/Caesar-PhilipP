//1226. йынтарбО кодяроп
#include <iostream>
#include <string>

bool isLetter(char c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1226.in", "rt", stdin);
	#endif
	std::string text, word;
	for (; std::getline(std::cin, text); ) {
		word = "";
		for (int i = 0; i < text.length(); i++) {
			if (isLetter(text[i])) {
				word += text[i];
				continue;
			}
			else {
				for (int j = word.length() - 1; j >= 0; j--) {
					std::cout << word[j];
				}
				word = "";
				std::cout << text[i];
			}
		}
		if (word != "") {
			for (int j = word.length() - 1; j >= 0; j--) {
				std::cout << word[j];
			}
		}
		std::cout << "\n";
	}
	return 0;
}