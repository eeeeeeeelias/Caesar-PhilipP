//1925. О заслуге британских учёных
#include <iostream>

int main() 
{
	long long int N = 0, K = 0, Bi = 0, Gi = 0, Bsum = 0, Gsum = 0;
	long long int answer = 0;
	std::cin >> N >> K;
	Bsum = K;
	for (int i = 0; i < N; i++) {
		std::cin >> Bi >> Gi;
		Bsum += Bi;
		Gsum += Gi;
	}
	answer = Bsum - Gsum - 2 * (N + 1);
	if (answer >= 0) { std::cout << answer << std::endl; }
	else { std::cout << "Big Bang!" << std::endl; }
	return 0;
}