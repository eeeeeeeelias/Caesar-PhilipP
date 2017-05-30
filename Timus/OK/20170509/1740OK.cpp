//1740. А олени лучше!
#include <iostream>

int main()
{
	std::cout.precision(6);
	int L, K, H;
	std::cin >> L >> K >> H;
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout << H * (L / K) << " " << (H * (L / K + ((L % K == 0) ? 0 : 1))) << "\n";
	return 0;
}