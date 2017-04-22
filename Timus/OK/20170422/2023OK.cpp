//2023. Дональд-почтальон
#include <iostream>
#include <string>
int main()
{
	int Alph[28] = { 0, 1, 5, 2, 5, 5, 2, 5, 5, 2, 2, 5, 1, 5, 0, 0, 5, 0, 1, 2, 5, 5, 2, 5, 5, 5 };
	int where = 0, N = 0, steps = 0;
	std::string name = "";
	std::cin >> N;
	std::getline(std::cin, name);
	for (int i = 0; i < N; i++) {
		std::getline(std::cin, name);
		steps += abs(where - Alph[name[0] - 'A']);
		where = Alph[name[0] - 'A'];
	}
	std::cout << steps << "\n";
	return 0;
}