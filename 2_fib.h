#pragma once
#include <algorithm>

struct intpair
{
	int first = 0;
	int second = 0;
};

intpair Nth_Fibonacci(int N) //returns ( f(N-1), f(N) )
{
	intpair MyPair;
	MyPair.first = 0;
	MyPair.second = 1;
	for (int i = 2; i <= N; i++) {
		MyPair.first += MyPair.second;
		std::swap(MyPair.first, MyPair.second);
	}
	return MyPair;
}