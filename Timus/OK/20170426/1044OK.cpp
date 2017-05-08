//1044. Lucky Tickets. Easy!
#include <iostream>
int main()
{
	int N = 0;
	std::cin >> N;
	switch (N) {
	case 2:
		std::cout << 10;
		break;
	case 4:
		std::cout << 670;
		break;
	case 6:
		std::cout << 55252;
		break;
	case 8:
		std::cout << 4816030;
		break;
	}
}