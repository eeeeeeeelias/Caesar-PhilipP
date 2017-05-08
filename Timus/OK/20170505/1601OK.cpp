//1601. АнтиКАПС
#include <iostream>
#include <string>
int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("1601.in", "rt", stdin);
		//freopen("1601.out", "wt", stdout);
	#endif
	bool newSentence = true;
	for (char c; (c = getchar()) != EOF; ) {
		//newSentence = true; //новая строчка
		if (c == ' ' || c == '\n' || c == '-') {
			std::cout << c;
		}
		else {
			if (c == '.' || c == '!' || c == '?') {
				std::cout << c;
				newSentence = true; //предложение кончилось
			}
			else {
				if (c >= 'A' && c <= 'Z' && !newSentence) {
					std::cout << (char)(c + 'a' - 'A');
				}
				else { std::cout << c; }
				newSentence = false;
			}
		}
	}
	return 0;
}