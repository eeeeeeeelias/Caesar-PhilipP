//2018. Дебютный альбом
#include <iostream>
const int MAX_A = 300, By = 1000000000 + 7;
int main()
{
	int N = 0, A = 0, B = 0, As[MAX_A][2], Bs[MAX_A][2];
	std::cin >> N >> A >> B;
	for (int i = 0; i < A; i++) { 
		As[i][0] = 0; 
		As[i][1] = 0;
	}
	for (int i = 0; i < B; i++) { 
		Bs[i][0] = 0; 
		Bs[i][1] = 0;
	}
	As[0][0] = 1;
	Bs[0][0] = 1;
	for (int i = 1; i < N; i++) {
		As[0][1] = 0;
		for (int j = 0; j < B; j++) {
			As[0][1] = (As[0][1] + Bs[j][0]) % By;
		}
		Bs[0][1] = 0;
		for (int j = 0; j < A; j++) {
			Bs[0][1] = (Bs[0][1] + As[j][0]) % By;
		}
		for (int i = 1; i < A; i++) {
			As[i][1] = As[i - 1][0];
		}
		for (int i = 1; i < B; i++) {
			Bs[i][1] = Bs[i - 1][0];
		}
		for (int i = 0; i < A; i++) {
			As[i][0] = As[i][1];
		}
		for (int i = 0; i < B; i++) {
			Bs[i][0] = Bs[i][1];
		}
	}
	int answer = 0;
	for (int i = 0; i < A; i++) {
		answer = (answer + As[i][0]) % By;
	}
	for (int i = 0; i < B; i++) {
		answer = (answer + Bs[i][0]) % By;
	}
	std::cout << answer << "\n";
	return 0;
}