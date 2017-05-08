//1723. Книга Сандро
#include <iostream>
#include <string>

const int AlphabetLength = 26;

int main()
{
	std::string spell;
	std::getline(std::cin, spell);
	int letters[AlphabetLength];
	for (int i = 0; i < AlphabetLength; i++) {
		letters[i] = 0;
	}
	for (int i = 0; i < spell.length(); i++) {
		letters[spell[i] - 'a']++;
	}
	int MostPowerful = 0, spellPower = -1;
	for (int i = 0; i < AlphabetLength; i++) {
		if (letters[i] > spellPower) {
			MostPowerful = i;
			spellPower = letters[i];
		}
	}
	std::cout << (char)('a' + MostPowerful) << "\n";
	return 0;
}