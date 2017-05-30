//1125. Классики
#include <iostream>
#include <algorithm>

const int MAX_N = 50, PYTH_AMOUNT = 8;
const int pythagoreanDoubles[2 * PYTH_AMOUNT] = { 3, 4, 5, 12, 8, 15, 7, 24, 20, 21, 12, 35, 9, 40, 28, 45 };

void pythagorasConsequence(bool byPythagoras[MAX_N][MAX_N], int iLine, int iRow, int d1, int d2)
{
	if (iLine + d1 < MAX_N && iLine + d1 > -1 && iRow + d2 < MAX_N && iRow + d2 > -1) {
		byPythagoras[iLine + d1][iRow + d2] ^= true;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1125.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	bool byPythagoras[MAX_N][MAX_N], byLines[MAX_N], byRows[MAX_N];
	//black = true, white = false
	int lines = 0, rows = 0;
	std::cin >> lines >> rows;

	for (int iLine = 0; iLine < lines; iLine++) { byLines[iLine] = false; }
	for (int iRow = 0; iRow < rows; iRow++) { byRows[iRow] = false; }

	//color input
	for (int iLine = 0; iLine < lines; iLine++) {
		for (int iRow = 0; iRow < rows; iRow++) {
			char cellColor = '0';
			std::cin >> cellColor;
			if (cellColor == 'B') { byPythagoras[iLine][iRow] = true; }
			else { byPythagoras[iLine][iRow] = false; }
		}
	}

	//jumps input
	for (int iLine = 0; iLine < lines; iLine++) {
		for (int iRow = 0, jumpsHere = 0; iRow < rows; iRow++) {
			std::cin >> jumpsHere;
			if (jumpsHere % 2) {
				byLines[iLine] ^= true;
				byRows[iRow] ^= true;
				byPythagoras[iLine][iRow] ^= true;

				//pythagorean triples!
				for (int iPyth = 0; iPyth < PYTH_AMOUNT * 2; iPyth += 2) {
					for (int jPyth = 1; pythagoreanDoubles[iPyth + 1] * jPyth < MAX_N; jPyth++) {
						int d1 = pythagoreanDoubles[iPyth] * jPyth, d2 = pythagoreanDoubles[iPyth + 1] * jPyth;
						pythagorasConsequence(byPythagoras, iLine, iRow, d1, d2);
						pythagorasConsequence(byPythagoras, iLine, iRow, d1, -d2);
						pythagorasConsequence(byPythagoras, iLine, iRow, -d1, d2);
						pythagorasConsequence(byPythagoras, iLine, iRow, -d1, -d2);
						pythagorasConsequence(byPythagoras, iLine, iRow, d2, d1);
						pythagorasConsequence(byPythagoras, iLine, iRow, d2, -d1);
						pythagorasConsequence(byPythagoras, iLine, iRow, -d2, d1);
						pythagorasConsequence(byPythagoras, iLine, iRow, -d2, -d1);
					}
				}
			}

		}
	}

	//output
	for (int iLine = 0; iLine < lines; iLine++) {
		for (int iRow = 0; iRow < rows; iRow++) {
			std::cout << ((byPythagoras[iLine][iRow] ^ byLines[iLine] ^ byRows[iRow]) ? 'B' : 'W');
		}
		std::cout << "\n";
	}
	return 0;
}