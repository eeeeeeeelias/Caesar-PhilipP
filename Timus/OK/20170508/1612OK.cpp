//1612. Трамвайный форум
#include <iostream>
#include <string>

bool isThisWord(std::string s, std::string subS, int pos)
{
	if (s.length() == subS.length()) { //строки одинаковой длины
		return (s == subS && pos == 0);
	}
	else {
		if (pos + subS.length() > s.length()) { return false; } //символов не хватит
		else {
			bool answer = true;
			for (int i = 0; i < subS.length() && answer; i++) { answer &= (subS[i] == s[pos + i]); }
			if (answer) {
				if (pos == 0 && !(s[pos + subS.length()] >= 'a' && s[pos + subS.length()] <= 'z')) { return true; }
				else {
					if (pos + subS.length() == s.length() && !(s[pos - 1] >= 'a' && s[pos - 1] <= 'z')) { return true; }
					else {
						return ((s[pos - 1] < 'a' || s[pos - 1] > 'z') && (s[pos + subS.length()] < 'a' || s[pos + subS.length()] > 'z'));
					}
				}
			}
			else {
				return false;
			}
		}
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1612.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int trams = 0, trolleybuses = 0;
	for (std::string chatString; std::getline(std::cin, chatString); )
	{
		for (int i = 0; i < chatString.length(); i++) {
			if (isThisWord(chatString, "tram", i)) { trams++; }
			if (isThisWord(chatString, "trolleybus", i)) { trolleybuses++; }
		}
	}
	if (trams > trolleybuses) { std::cout << "Tram driver"; }
	else {
		if (trams == trolleybuses) { std::cout << "Bus driver"; }
		else { std::cout << "Trolleybus driver"; }
	}
	std::cout << "\n";
	return 0;
}
