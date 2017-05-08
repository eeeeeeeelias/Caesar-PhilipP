//2002. Тестовое задание
#include <iostream>
#include <string>

const long long HashNumber = 10007;

struct user {
	bool isExist = false;
	bool isOnline = false;
	int passwordHash = 0;
};

long long getHash(std::string s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum = (sum * 97 + (int)(s[i] - 32));
		sum %= HashNumber;
	}
	return sum;
}

int main()
{ //97 отлично подходит
	#ifndef ONLINE_JUDGE
		freopen("2002.in", "rt", stdin);
		freopen("2002.out", "wt", stdout);
	#endif 
	long long N = 0;
	std::cin >> N;
	user users[HashNumber];
	std::string command = "", login = "", password = "";
	for (long long i = 0, loginHash = 0; i < N; i++) {
		std::cin >> command;
		if (command == "register") {
			std::cin >> login >> password;
			loginHash = getHash(login);
			if (users[loginHash].isExist) { //user already exists
				std::cout << "fail: user already exists" << "\n";
			}
			else { //new user
				users[loginHash].isExist = true;
				users[loginHash].passwordHash = getHash(password);
				std::cout << "success: new user added" << "\n";
			}
		}
		else {
			if (command == "login") {
				std::cin >> login >> password;
				loginHash = getHash(login);
				if (users[loginHash].isExist) { //such user exists
					if (getHash(password) != users[loginHash].passwordHash) { //wrong password
						std::cout << "fail: incorrect password" << "\n";
					}
					else { //right password
						if (users[loginHash].isOnline) { //already logged in
							std::cout << "fail: already logged in" << "\n";
						}
						else {
							users[loginHash].isOnline = true;
							std::cout << "success: user logged in" << "\n";
						}
					}
				}
				else { //no such user
					std::cout << "fail: no such user" << "\n";
				}
			}
			else { //command == "logout"
				std::cin >> login;
				loginHash = getHash(login);
				if (users[loginHash].isExist) {
					if (users[loginHash].isOnline) {
						users[loginHash].isOnline = false;
						std::cout << "success: user logged out" << "\n";
					}
					else {
						std::cout << "fail: already logged out" << "\n";
					}
				}
				else {
					std::cout << "fail: no such user" << "\n";
				}
			}
		}
	}
	return 0;
}