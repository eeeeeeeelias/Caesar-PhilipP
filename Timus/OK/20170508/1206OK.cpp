//1206. Сумма цифр суммы чисел
#include <iostream>
#include <string>

std::string LongProduct(std::string A, std::string B) //длинное умножение
{
	int carry = 0, miniProduct = 0, Ci = 0;
	std::string product = "";
	for (int i = 0; i < A.length() + B.length(); i++) { product += '0'; }
	for (int Bi = B.length() - 1; Bi >= 0; Bi--) { //цикл по 2му множителю
		carry = 0; //обнуляем перенос
		Ci = product.length() - B.length() + Bi;
		for (int Ai = A.length() - 1; Ai >= 0; Ai--) { //цикл по первому множителю
			miniProduct = (A[Ai] - '0') * (B[Bi] - '0') + (product[Ci] - '0') + carry;
			product[Ci] = (char)(miniProduct % 10 + '0');
			carry = miniProduct / 10;
			Ci--;
		}
		for (; carry > 0; Ci--) {
			miniProduct = carry + (product[Ci] - '0');
			product[Ci] = (char)(miniProduct % 10 + '0');
			carry = miniProduct / 10;
		}
	}
	if (Ci - 1 >= 0) {
		miniProduct = carry + (product[Ci - 1] - '0');
		product[Ci - 1] = (char)(miniProduct % 10 + '0');
	}
	if (Ci - 2 >= 0) {
		product[Ci - 2] = (char)((product[Ci - 2] - '0') + miniProduct / 10 + '0');
	}
	bool still0 = true;
	std::string answer = "";
	for (int i = 0; i < product.length(); i++) {
		still0 &= (product[i] == '0');
		if (!still0) {
			answer += product[i];
		}
	}
	if (answer == "") { answer = "0"; }
	return answer;
}

int main()
{
	long long K = 0;
	std::cin >> K;
	std::string N = "36", NN = "";
	for (int i = 2; i <= K; i++) {
		NN = LongProduct(N, "55");
		N = NN;
	}
	std::cout << N << "\n";
	return 0;
}