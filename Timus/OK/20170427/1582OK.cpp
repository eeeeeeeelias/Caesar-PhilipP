//1582. Ασκμεκεπϋ
#include <iostream>
int main()
{
	double k1 = 0, k2 = 0, k3 = 0;
	std::cin >> k1 >> k2 >> k3;
	k1 = 1 / k1;
	k2 = 1 / k2;
	k3 = 1 / k3;
	double divisor = (k1 + k2 + k3);
	std::cout << (round(1000.0 / divisor)) << "\n";
}