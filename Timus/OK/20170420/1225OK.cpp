//1225. Флаги
#include <iostream>
int main() 
{
	int N = 0;
	std::cin >> N;
	long long int A[2];
	A[0] = 2;
	A[1] = 2;
	for (int i = 2; i < N; i++) {
		A[1] += A[0];
		A[0] = A[1] - A[0];
	}
	std::cout << A[1];
	return 0;
}