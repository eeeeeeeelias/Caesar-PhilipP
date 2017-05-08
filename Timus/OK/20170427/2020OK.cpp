//2020. Пробка в Цветочном городе
#include <iostream>
#include <string>
int main()
{
	std::string up = "", down = "";
	std::getline(std::cin, up);
	std::getline(std::cin, down);
	int time = 0;
	for (int upI = 0, downI = 0; upI < up.length() || downI < down.length(); time++) {
		if (upI == up.length()) { downI++; }
		else {
			if (downI == down.length()) { upI++; }
			else {
				if (up[upI] == 'L' && down[downI] == 'L' || up[upI] != 'L' && down[downI] != 'L') {
					upI++;
					downI++;
				}
				else {
					if (up[upI] == 'L') { downI++; }
					else { upI++; }
				}
			}
		}
	}
	std::cout << time << "\n";
	return 0;
}