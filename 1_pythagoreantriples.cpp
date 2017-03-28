#include <iostream>
int isPythagoreanTriple() { //returns 1 if set of ints is Pythagorean triple
	int x, y, z;
	std::cin >> x >> y >> z;;
	if ((x*x + y*y == z*z) || (x*x + z*z == y*y) || (y*y + z*z == x*x)) {
		std::cout << "YES" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "NO" << std::endl;
		return 0;
	}
}