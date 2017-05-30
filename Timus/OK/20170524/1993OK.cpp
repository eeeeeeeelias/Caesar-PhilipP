//1993. Чизбургер этот не нужен тебе
#include <iostream>
#include <string>

int main()
{
#ifndef ONLINE_JUDGE
	freopen("1993.in", "rt", stdin);
#endif // !ONLINE_JUDGE

	std::string auxWord = "", inputS = "";
	std::string clauses[3] = { "", "", "" }; //S, V, O: 012-> 210
	std::getline(std::cin, inputS);
	int i = 0, whichClause = 0;
	char stopSymbol = '0';

	for (int j = 1; j <= 3; j++) {
		switch (inputS[i]) {
		case '(': stopSymbol = ')'; whichClause = 0; break;
		case '[': stopSymbol = ']'; whichClause = 1; break;
		case '{': stopSymbol = '}'; whichClause = 2; break;
		}

		for (i = i + 1; inputS[i] != stopSymbol; i++) { clauses[whichClause] += inputS[i]; }

		i += 2;
		if (j == 1) {
			clauses[whichClause][0] += ('a' - 'A');
		}
	}
	//some (de)capitalization tricks
	clauses[2][0] += ('A' - 'a');

	std::cout << clauses[2] << " " << clauses[0] << " " << clauses[1];

	if (i - 1 != inputS.length()) {
		std::cout << ", ";
		i++;

		if (inputS[i] >= 'a' && inputS[i] <= 'z') { //there is an aux.word
			for (; inputS[i] != ' '; i++) { auxWord += inputS[i]; }
			std::cout << auxWord << " ";
			i++;
		}

		for (int j = 0; j < 3; j++) {
			clauses[j] = "";
		}
		for (int j = 1; j <= 3; j++) {
			switch (inputS[i]) {
			case '(': stopSymbol = ')'; whichClause = 0; break;
			case '[': stopSymbol = ']'; whichClause = 1; break;
			case '{': stopSymbol = '}'; whichClause = 2; break;
			}

			for (i = i + 1; inputS[i] != stopSymbol; i++) { clauses[whichClause] += inputS[i]; }

			i += 2;
		}
		std::cout << clauses[2] << " " << clauses[0] << " " << clauses[1];
	}

	std::cout << "\n";

	return 0;
}