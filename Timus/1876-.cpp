//1876. Утро сороконожки
#include <iostream>
int main()
{
	int a = 0, b = 0;
	std::cin >> a >> b;
	std::cout << ((2 * a > 40 + 2 * b) ? (2 * a) : (40 + 2 * b)) << "\n";
	return 0;
}