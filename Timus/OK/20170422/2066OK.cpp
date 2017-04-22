//2066. Простое выражение
#include <iostream>
int main()
{
	int a = 0, b = 0, c = 0, answer = 0;
	std::cin >> a >> b >> c;
	if (b == 0) { answer = -c; }
	else { answer = a - ((b + c > b * c) ? (b + c) : (b * c)); }
	std::cout << answer << "\n";
	return 0;
}