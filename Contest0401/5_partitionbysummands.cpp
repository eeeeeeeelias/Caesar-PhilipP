#include <iostream>
const int maxN = 40;

int main() 
{
	int N = 0;
	std::cin >> N;
	int summands[maxN + 1], partitionLength = N;
	int sum = 0, i = 0, j = 0;
	summands[0] = -1;
	for (int i = 1; i <= N; i++) {
		summands[i] = 1;
		std::cout << 1 << " ";
	}
	std::cout << std::endl;
	for (; summands[1] != N; ) {
		sum = summands[partitionLength];
		for (i = partitionLength - 1; summands[i] == summands[i - 1]; ) {
			sum += summands[i];
			i--;
		}
		summands[i] += 1;
		for (j = 1; j <= i; j++) {
			std::cout << summands[j] << " ";
		}
		for (j = 1; j < sum; j++) {
			summands[i + j] = 1;
			std::cout << 1 << " ";
		}
		std::cout << std::endl;
		partitionLength = i + j - 1;
	}
}