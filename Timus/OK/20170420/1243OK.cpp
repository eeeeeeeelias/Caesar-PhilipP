//1243. Развод семи гномов
#include <iostream>
#include <string>
int main() 
{
	std::string N;
	std::cin >> N;
	int sum = 0;
	for (int i = N.size() - 1; i >= 0; ) {
		sum += 1 * (N[i] - '0');
		i--;
		if (i < 0) { break; }
		sum += 10 * (N[i] - '0');
		i--;
		if (i < 0) { break; }
		sum += 100 * (N[i] - '0');
		i--;
		if (i < 0) { break; }
		sum -= 1 * (N[i] - '0');
		i--;
		if (i < 0) { break; }
		sum -= 10 * (N[i] - '0');
		i--;
		if (i < 0) { break; }
		sum -= 100 * (N[i] - '0');
		i--;
		if (i < 0) { break; }
	}
	sum += 1050;
	std::cout << (sum % 7) << std::endl;
	return 0;
}