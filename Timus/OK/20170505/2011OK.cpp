//2011. Длинное условие
#include <iostream>
const int LETTERS = 3;
int main()
{
	int N = 0, L = 0, letters[LETTERS];
	bool answer = false;
	for (int i = 0; i < LETTERS; i++) { letters[i] = 0; }
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> L;
		letters[L - 1]++;
	}
	if (letters[0]>letters[1]){ 
		letters[0] = letters[0] ^ letters[1];
		letters[1] = letters[0] ^ letters[1];
		letters[0] = letters[0] ^ letters[1];
	}	
	if (letters[1]>letters[2]) {
		letters[2] = letters[2] ^ letters[1];
		letters[1] = letters[2] ^ letters[1];
		letters[2] = letters[2] ^ letters[1];
	}
	if (letters[0]>letters[1]) {
		letters[0] = letters[0] ^ letters[1];
		letters[1] = letters[0] ^ letters[1];
		letters[0] = letters[0] ^ letters[1];
	}
	if (N < 3) { answer = false; }
	else
	{ //N >= 3
		if (letters[0] == 0) { //0, Y, Z
			if (letters[1] == 0) { answer = false; } //0, 0, Z NO
			else { //0, Y, Z
				if (letters[1] == 1) { answer = (letters[2] > 4); } //0, 1, Z
				else { answer = true; }//0, 2, Z
			}
		}
		else { //X, Y, Z
			answer = true;
		}
	}
	std::cout << ((answer) ? "Yes" : "No") << "\n";
	return 0;
}