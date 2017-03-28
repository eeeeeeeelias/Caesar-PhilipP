#include <iostream>
double NFibonacci(int N) { //returns f(N)/f(N+1) and writes f(i) from 1 to N
	long long int a = 0, b = 1;
	std::cout << b << " ";
	for (int i = 2; i <= N; i++) {
		a = a + b;
		b = b + a;
		a = b - a;
		b = b - a;
		std::cout << b << " ";
	}
	std::cout << std::endl;
	std::cout << (double)b / a << std::endl;
	return (double)b / a;
}