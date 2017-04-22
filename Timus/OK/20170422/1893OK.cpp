//1893. A380
#include <iostream>
#include <string>
int main()
{
	int N = 0, answer = 0;
	int premium[4] = { 0, 1, 1, 0 }, business[6] = { 0, 1, 1, 1, 1, 0 }, common[11] = { 0, 2, 1, 1, 2, 2, 1, 1, 5, 2, 0};
	char c;
	std::cin >> N;
	std::cin >> c;
	if (N < 3) { answer = premium[c - 'A']; }
	else {
		if (N < 21) { answer = business[c - 'A']; }
		else { answer = common[c - 'A']; }
	}
	switch (answer) {
	case 0: std::cout << "window"; break;
	case 1: std::cout << "aisle"; break;
	case 2: std::cout << "neither"; break;
	}
	std::cout << "\n";
	return 0;

}