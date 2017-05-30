//1354. Палиндром. Он же палиндром
#include <iostream>
#include <string>
const int MAX_LENGTH = 10000, infinity = 20000;

int main()
{
	unsigned short int odds[MAX_LENGTH], evens[MAX_LENGTH];
	std::string s1 = "";
	std::getline(std::cin, s1);
	int s1length = s1.length();
	if (s1length < 3) { //A -> AA, AB -> ABA
		std::cout << s1 + s1[0] << "\n";
	}
	else { //если строка длиннее 2, всё не так просто.

		int hereOdd = infinity, hereEven = infinity;

		//ищем нечётные палиндромы
		for (int i = (s1length + 1) / 2; i < s1length; i++) {
			for (odds[i] = 1; i + odds[i] / 2 < s1length - 1; ) {
				if (s1[i + (odds[i] + 1) / 2] == s1[i - (odds[i] + 1) / 2]) {
					odds[i] += 2;
				}
				else { break; }
			}
			if (i + (odds[i] + 1) / 2 == s1length) { //нашли палиндром до конца строки
				hereOdd = i;
				break;
			}
		}

		//ищем чётные палиндромы
		for (int i = s1length / 2 + 1; i < s1length; i++) {
			for (evens[i] = 0; i + evens[i] / 2 < s1length; ) {
				if (s1[i + evens[i] / 2] == s1[i - 1 - evens[i] / 2]) {
					evens[i] += 2;
				}
				else { break; }
			}
			if (i + evens[i] / 2 == s1length) { //нашли палиндром до конца строки
				hereEven = i;
				break;
			}
		}
		if (hereOdd < hereEven) { //выбираем нечётный
			for (int i = 2 * hereOdd - s1length; i >= 0; i--) {
				s1 += s1[i];
			}
		}
		else { //выбираем чётный
			for (int i = 2 * hereEven - s1length - 1; i >= 0; i--) {
				s1 += s1[i];
			}
		}
		std::cout << s1 << "\n";
	}
}