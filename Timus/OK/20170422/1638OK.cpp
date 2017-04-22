//1638.  нижный червь
#include <iostream>
int main()
{
	long long book = 0, cover = 0, L = 0, R = 0;
	std::cin >> book >> cover >> L >> R;
	std::cout << ((2 * cover + book) * abs(L - R) + ((L >= R) ? (book) : (-book))) << "\n";
}