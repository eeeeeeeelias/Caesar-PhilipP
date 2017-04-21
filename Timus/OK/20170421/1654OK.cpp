//1654. Шифровка
#include <iostream>

const int MAX_N = 200000;

/*struct chars{
	char c;
	chars* next;
};

void push(char c, chars *X) {
	chars *Y = new chars;
	Y->next = X;
	Y->c = c;
	X = Y;
}

char pop(chars *X) {
	return
}*/

int main() {
	char chars[MAX_N];
	char c;
	int top = 0;
	chars[0] = '0';
	for (; std::cin.get(c);) {
		if (chars[top] == c) {
			chars[top] = '0';
			top--;
		}
		else {
			top++;
			chars[top] = c;
		}
	}
	for (int i = 1; i <= top; i++) {
		std::cout << chars[i];
	}
	std::cout << std::endl;
	return 0;
}