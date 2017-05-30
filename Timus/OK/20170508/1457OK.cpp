//1457. Теплотрасса
#include <iostream>

double round(double val, unsigned signs)
{
	double p = pow(10., signs);
	return floor(val * p + .5) / p;
}

int main()
{
	int N = 0, sum = 0;
	std::cin >> N;
	for (int i = 0, X = 0; i < N; i++) {
		std::cin >> X;
		sum += X;
	}
	fprintf(stdout, "%.6lf", (sum / (N + 0.0)));
	std::cout << "\n";
	return 0;
}