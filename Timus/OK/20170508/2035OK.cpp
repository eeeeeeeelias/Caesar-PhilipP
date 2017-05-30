//2035. Очередной пробный тур
#include <iostream>

int main()
{
	long long X = 0, Y = 0, C = 0;
	std::cin >> X >> Y >> C;
	if (X + Y < C) { std::cout << "Impossible\n"; }
	else {
		if (X >= C) { std::cout << C << " " << 0 << "\n"; }
		else { std::cout << X << " " << (C - X) << "\n"; }
	}
	return 0;
}