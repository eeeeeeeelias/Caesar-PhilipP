//1585. Пингвины
#include <iostream>
#include <string>
const std::string ep = "Emperor", lp = "Little", mp = "Macaroni";
int main() 
{
	int N = 0, p[3] = {0, 0, 0};
	std::string penguin = "";
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> penguin;
		if (penguin == ep) { p[0]++; }
		else {
			if (penguin == lp) { p[1]++; }
			else { p[2]++; }
		}
		std::cin >> penguin;
	}
	std::string answer = (p[0] > p[1] && p[0] > p[2]) ? ep : ((p[1] > p[2]) ? lp : mp);
	std::cout << answer << " Penguin" << std::endl;
	return 0;
}