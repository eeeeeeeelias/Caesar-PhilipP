//1493. В одном шаге от счастья
#include <iostream>
int isHappy(int N) {
	int sum = 0, X = N;
	for (int i = 0; i < 3; i++) {
		sum += X % 10;
		X /= 10;
	}
	for (int i = 0; i < 3; i++) {
		sum -= X % 10;
		X /= 10;
	}
	return (sum == 0) ? true : false;
}

int main() 
{
	int N = 0, sum = 0, X = 0;
	bool fl = false;
	std::cin >> N;
	if (N % 10 > 0 && N % 10 < 9) {
		fl = true;
	}
	else {
		fl = isHappy(N - 1) || isHappy(N + 1);
	}
	std::cout << (fl ? "Yes" : "No") << std::endl;
	return 0;
}