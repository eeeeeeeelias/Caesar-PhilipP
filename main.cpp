//#pragma once

#include "1_pyth.h"
#include "2_fib.h"
#include <iostream>

int main()
{
	int x = 0, y = 0, z = 0;
	int N = 0;
	std::cout << "1. Pythagorean triples" << std::endl;
	std::cout << "Insert 3 integers: ";
	std::cin >> x >> y >> z;
	if (isPythagoreanTriple(x, y, z)) {
	std::cout << "YES! Pythagoras is glad for you." << std::endl;
	}
	else {
	std::cout << "NO. Go away with your off-topic triples." << std::endl;
	}
	std::cout << "2. Fibonacci" << std::endl;
	std::cout << "Insert N: ";
	std::cin >> N;
	std::pair<int, int> Xfib = Nth_Fibonacci(N);
	std::cout << "f(" << (N - 1) << ") = " << Xfib.first << ", f(" << N << ") = " << Xfib.second << std::endl;
	system("pause");
	return 0;
}