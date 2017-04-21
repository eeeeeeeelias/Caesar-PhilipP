//2001. Математики и ягоды
#include <iostream>
int main() 
{
	int A1 = 0, B1 = 0, A2 = 0, B2 = 0, A3 = 0, B3 = 0;
	std::cin >> A1 >> B1;
	std::cin >> A2 >> B2;
	std::cin >> A3 >> B3;
	std::cout << A1 - A3 << " " << B1 - B2 << std::endl;
	return 0;
}