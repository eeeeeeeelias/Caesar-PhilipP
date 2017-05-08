//1149. Танцы синуса
#include <iostream>
#include <string>

std::string An(int nowN, int N)
{
	if (nowN == N) {
		return "sin(" + std::to_string(nowN) + ")";
	}
	else {
		if (nowN % 2 == 1) {
			return "sin(" + std::to_string(nowN) + "-" + An(nowN + 1, N) + ")";
		}
		else {
			return "sin(" + std::to_string(nowN) + "+" + An(nowN + 1, N) + ")";
		}
	}
}

std::string Sn(int nowN, int N)
{
	if (nowN == 1) {
		return An(1, nowN) + "+" + std::to_string(N + 1 - nowN);
	}
	else {
		return "(" + Sn(nowN - 1, N) + ")" + An(1, nowN) + "+" + std::to_string(N + 1 - nowN);
	}
}

int main() 
{
	int N = 0;
	std::cin >> N;
	std::cout << Sn(N, N) << "\n";
	return 0;
}