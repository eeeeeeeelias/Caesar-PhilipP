//1573. Алхимия
#include <iostream>
#include <string>
int main()
{
	int B = 0, R = 0, Y = 0, K = 0;
	std::cin >> B >> R >> Y >> K;
	std::string colour;
	std::getline(std::cin, colour);
	int colours[3] = { B, R, Y };
	for (int i = 0; i < K; i++) {
		std::cin >> colour;
		if (colour == "Blue") { colours[0] = 1; }
		else {
			if (colour == "Red") { colours[1] = 1; }
			else { colours[2] = 1; }
		}
	}
	std::cout << (R * B * Y / (colours[0] * colours[1] * colours[2])) << "\n";
	return 0;
}