//1353. Миллиардная функция Васи
#include <iostream>
const long long MAX_S = 81, DIGITS_AMOUNT = 9;
int main()
{
	long long FB[MAX_S + 1][DIGITS_AMOUNT];
	for (long long i = 0; i <= MAX_S; i++) {
		for (long long j = 0; j < DIGITS_AMOUNT; j++) {
			FB[i][j] = 0;
		}
	}
	for (long long i = 0; i <= 9; i++) { FB[i][0] = 1; }
	for (long long j = 1; j < 9; j++) {
		for (long long i = 0; i <= (j + 1) * 9; i++) {
			FB[i][j] = 0;
			for (long long k = std::fmax(0, i - 9); k <= i; k++) {
				FB[i][j] += FB[k][j - 1];
			}
		}
	}
	long long S = 0;
	std::cin >> S;
	if (S == 1) { std::cout << 10 << "\n"; }
	else { std::cout << FB[S][DIGITS_AMOUNT - 1] << "\n"; }
	return 0;
}