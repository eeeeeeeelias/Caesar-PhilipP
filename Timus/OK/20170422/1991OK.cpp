//1991. Битва у болота.
#include <iostream>
int main()
{
	int squads = 0, droids = 0, survived = 0, notUsed = 0, balls = 0;
	std::cin >> squads >> droids;
	for (int i = 0; i < squads; i++) {
		std::cin >> balls;
		if (balls >= droids) { notUsed += balls - droids; }
		else { survived += droids - balls; }
	}
	std::cout << notUsed << " " << survived << "\n";
	return 0;
}