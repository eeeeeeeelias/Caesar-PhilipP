//1026. Вопросы и ответы
#include <iostream>
#include <string>
const int MAX_X = 5000, MAX_N = 100000;
int main()
{
	int numberAmount[MAX_X + 1];
	for (int i = 0; i <= MAX_X; i++) {
		numberAmount[i] = 0;
	}

	int N = 0;
	std::cin >> N;
	for (int i = 0, number = 0; i < N; i++) {
		std::cin >> number;
		numberAmount[number]++;
	}

	int sortedArray[MAX_N];
	for (int i = 0, j = 1; i < N && j < MAX_X + 1; j++) {
		for (; numberAmount[j] > 0; numberAmount[j]--) {
			sortedArray[i] = j;
			i++;
		}
	}

	std::string s = "";
	std::getline(std::cin, s);
	std::getline(std::cin, s);
	
	int K = 0;
	std::cin >> K;
	for (int i = 0, Xi = 0; i < K; i++) {
		std::cin >> Xi;
		std::cout << sortedArray[Xi - 1] << "\n";
	}
	return 0;
}