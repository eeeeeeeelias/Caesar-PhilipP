//1222. Chernobyl' Eagles
#include <iostream>
#include <string>

std::string longAxDigit(std::string s, int X)
{
	std::string answer = "";
	int carry = 0;
	for (int i = s.length() - 1, miniProduct = 0; i >= 0; i--) {
		miniProduct = carry + X * (s[i] - '0');
		answer = (char)('0' + (miniProduct % 10)) + answer;
		carry = miniProduct / 10;
	}
	if (carry > 0) { answer = (char)(carry + '0') + answer; }
	return answer;
}

/*std::string IQ(std::string N)
{
	std::string answer = "";
	if (std::stoi(N) <= 4) { answer = N; }
	else {
		if (N == "5") { answer = "6"; }
		else {
			answer 
		}
	}
	return answer;
}*/

int main()
{
	long long N;
	std::string answer = "";
	std::cin >> N;
	if (N <= 4) { answer += (char)(N + '0'); }
	else {
		if (N == 5) { answer = "6"; }
		else {
			switch (N % 3) {
			case 0: answer = "3"; break;
			case 1: answer = "4"; break;
			case 2: answer = "6"; break;
			}
			for (int i = 6 + N % 3; i <= N; i += 3) {
				answer = longAxDigit(answer, 3);
			}
		}
	}
	std::cout << answer << "\n";
	return 0;
}