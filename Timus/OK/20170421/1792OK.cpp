//1792. Код Хэмминга
#include <iostream>
int main() 
{
	int code[7];
	for (int i = 0; i < 7; i++) { std::cin >> code[i]; }
	for (int i = 0; i < 7; i++) {
		code[i] = (code[i] + 1) % 2;
		if ((code[4] == code[1] ^ code[2] ^ code[3]) && (code[5] == code[0] ^ code[2] ^ code[3]) && (code[6] == code[0] ^ code[1] ^ code[3])) {
			break;
		}
		else {
			code[i] = (code[i] + 1) % 2;
			continue;
		}
	}
	for (int i = 0; i < 7; i++) { std::cout << code[i] << " "; }
	std::cout << std::endl;
	return 0;
}