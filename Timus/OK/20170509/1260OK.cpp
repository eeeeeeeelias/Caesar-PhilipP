//1260. Фотограф-зануда
#include <iostream>
const int MAX_N = 55;


int main()
{
	long long options[MAX_N + 1];
	options[1] = 1;
	options[2] = 1;
	options[3] = 2;
	options[4] = 4;
 	int N = 0;
	std::cin >> N;
	for (int i = 5; i <= N; i++) {
		options[i] = 1 + options[i - 3] + options[i - 1];
	}
	std::cout << options[N] << "\n";
	return 0;
}