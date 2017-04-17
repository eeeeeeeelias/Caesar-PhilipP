#include <iostream>
#include <string>
const int LEN = 100;

int main() 
{
	std::string a = "", b = "";
	int i = 0;
	std::cin >> a;
	std::cin >> b;
	for (i = 0; i < LEN; i++) {
		if (a[i] != b[i]) {
			break;
		}
	}
	if (a[i] < b[i]) {
		std::cout << "<";
	}
	else {
		if (a[i] == b[i]) {
			std::cout << "=";
		}
		else {
			std::cout << ">";
		}
	}
	std::cout << std::endl;
}