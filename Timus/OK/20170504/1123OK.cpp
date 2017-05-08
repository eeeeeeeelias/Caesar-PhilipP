//1123. Зарплата
#include <iostream>
#include <string>

bool isPalyndrome(std::string s) 
{
	bool flag = true;
	for (int i = 0; i < s.length() / 2; i++) {
		flag &= (s[i] == s[s.length() - i - 1]);
	}
	return flag;
}

int main()
{
	std::string number;
	std::cin >> number;
	int NLength = number.length();
	bool lengthIsEven = (NLength % 2 == 0);
	if (!isPalyndrome(number)) {
		for (bool isModified = false; !isPalyndrome(number);) {
			int i = 0;
			for (i = (NLength + 1) / 2 - 1; i >= 0; i--) {
				if (number[i] != number[NLength - i - 1]) {
					break; //нашли несовпадение
				}
			}
			if (isModified) { //мы уже изменяли число
				number[NLength - i - 1] = number[i];
			}
			else { //первый раз изменяем число
				isModified = true;
				if (number[i] >= number[NLength - i - 1]) { //123....221
					number[NLength - i - 1] = number[i];
				}
				else { //нужно найти самую среднюю не9 и увеличить
					int j = 0;
					for (j = NLength / 2; number[j] == '9' && j >= i; j--) {}
					if (j == i) { //между несовпадениями только 9  
						number[i]++;
						number[NLength - i - 1] = number[i];
						for (int k = i + 1; k < NLength - i - 1; k++) {
							number[k] = '0';
						}
					}
					else { //нашлись не9
						number[NLength - i - 1] = number[i];
						number[j]++;
						if (lengthIsEven || j != NLength / 2) {
							number[NLength - j - 1]++;
						}
						for (int k = j + 1; k < NLength - j - 1; k++) {
								number[k] = '0';
						}
					}
				}
			}
		}
	}
	std::cout << number << "\n";
	return 0;
}