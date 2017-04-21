//1935. Слёзы утопленников
#include <iostream>
#include <math.h>

int main() 
{
	long long int N = 0, sum = 0, X = 0, numbers[100];
	std::cin >> N;
	int maxnumber = -1;
	for (int i = 0; i < N; i++) {
		std::cin >> X;
		sum += X;
		if (maxnumber < X) { maxnumber = X; }
	}
	std::cout << (sum + maxnumber) << std::endl;
	return 0;
}