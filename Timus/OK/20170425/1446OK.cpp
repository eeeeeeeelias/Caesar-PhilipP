//1446. Волшебная шляпа
#include <iostream>
#include <string>
const std::string facs[4] = { "Slytherin", "Hufflepuff", "Gryffindor", "Ravenclaw" };
const int MAX_N = 1000;
int main() {
	//freopen("1446.in", "rt", stdin);
	std::string name, fac;
	int N = 0, amount[4] = { 0, 0, 0, 0 };
	std::cin >> N;
	std::getline(std::cin, name);
	std::string S[MAX_N], H[MAX_N], G[MAX_N], R[MAX_N];
	for (int i = 0; i < N; i++) {
		std::getline(std::cin, name);
		std::getline(std::cin, fac);
		switch (fac[0]) {
		case 'S':
			S[amount[0]] = name;
			amount[0]++;
			break;
		case 'H':
			H[amount[1]] = name;
			amount[1]++;
			break;
		case 'G':
			G[amount[2]] = name;
			amount[2]++;
			break;
		case 'R':
			R[amount[3]] = name;
			amount[3]++;
			break;
		}
	}
	std::cout << facs[0] << ":\n";
	for (int i = 0; i < amount[0]; i++) { std::cout << S[i] << "\n"; }
	std::cout << "\n";
	std::cout << facs[1] << ":\n";
	for (int i = 0; i < amount[1]; i++) { std::cout << H[i] << "\n"; }
	std::cout << "\n";
	std::cout << facs[2] << ":\n";
	for (int i = 0; i < amount[2]; i++) { std::cout << G[i] << "\n";}
	std::cout << "\n";
	std::cout << facs[3] << ":\n";
	for (int i = 0; i < amount[3]; i++) { std::cout << R[i] << "\n";}
	return 0;
}