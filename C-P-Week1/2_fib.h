#pragma once
#include <algorithm>

std::pair<int, int> Nth_Fibonacci(int N) //returns ( f(N-1), f(N) )
{
	int a = 0, b = 1;
	for (int i = 2; i <= N; i++) {
		a += b;
		std::swap(a, b);
	}
	return {a, b};
}