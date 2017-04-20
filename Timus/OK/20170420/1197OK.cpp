// 1197. Один в поле воин
#include <iostream>
#include <string>
int main() 
{
	int fields[16] = { 2, 3, 4, 4, 3, 4, 6, 6, 4, 6, 8, 8, 4, 6, 8, 8 };
	int N = 0;
	int X = 0, Y = 0;
	std::string s = "";
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> s;
		X = s[0] - 'a';
		Y = s[1] - '1';
		if (X > 3) { X = 7 - X; }
		if (Y > 3) { Y = 7 - Y; }
		std::cout << fields[X * 4 + Y] << std::endl;
	}
	return 0;
}