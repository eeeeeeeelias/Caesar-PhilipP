//1881. Длинное условие задачи
#include <iostream>
#include <string>

int main()
{
	long long strings = 0, symbols = 0, words = 0;
	std::string word = "";
	std::cin >> strings >> symbols >> words;

	int nowString = 1, Letters = symbols;
	for (int i = 0, length = 0; i < words; i++) {
		std::cin >> word;
		length = word.length();
		if (length < Letters) {
			Letters -= length + 1;
		}
		else {
			if (length == Letters) {
				Letters = symbols;
				if (i < words - 1) { nowString++; }
			}
			else {
				Letters = symbols - length - 1;
				nowString++;
			}
		}
	}
	std::cout << ((nowString + strings - 1) / strings) << "\n";
	return 0;
}