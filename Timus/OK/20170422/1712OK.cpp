//1712. Øטפנמגאכüםאÿ נור¸עךא
#include <iostream>
const int l = 4;
int main()
{
	int rotate[l * l] = { 3, 7, 11, 15, 2, 6, 10, 14, 1, 5, 9, 13, 0, 4, 8, 12 };
	int mask[l] = { -1, -1, -1, -1 };
	char c = '0', letters[l * l];
	int j = 0;
	for (int i = 0; i < l * l; i++) {
		std::cin >> c;
		if (c == 'X') {
			mask[j] = i;
			j++;
		}
	}
	for (int i = 0; i < l * l; i++) {
		std::cin >> letters[i];
	}

	for (int i = 0; i < l; i++) {
		for (j = 0; j < l; j++) {
			std::cout << letters[mask[j]];
			mask[j] = rotate[mask[j]];
		}
		for (int I = 0; I < l - 1; I++) {
			for (int J = l - 1; J > I; J--) {
				if (mask[J - 1] > mask[J]) {
					mask[J - 1] = mask[J - 1] ^ mask[J];
					mask[J] = mask[J - 1] ^ mask[J];
					mask[J - 1] = mask[J - 1] ^ mask[J];
				}
			}
		}
	}
	std::cout << "\n";
	return 0;
}