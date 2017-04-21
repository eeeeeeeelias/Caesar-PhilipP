//1496. Спамер
#include <iostream>
#include <string>

const int MAX_N = 100;

struct account {
	bool notOnce = false;
	std::string login;
	account* next;
};

int main() 
{
	int N = 0;
	std::cin >> N;
	std::string login = "";

	account* accounts = new account;
	accounts = nullptr;
	account* here = accounts;
	account* newAccount = accounts;

	for (int i = 0; i < N; i++) {
		here = accounts;
		std::cin >> login;
		for (; here != nullptr;) {
			if (login != here->login) { here = here->next; }
			else { break; }
		}
		if (here == nullptr) {
			newAccount = new account;
			newAccount->notOnce = false;
			newAccount->next = accounts;
			newAccount->login = login;
			accounts = newAccount;
		}
		else {
			here->notOnce = true;
		}
	}

	here = accounts;
	for (; here != nullptr;) {
		if (here->notOnce) {
			std::cout << here->login << std::endl;
		}
		here = here->next;
	}

	return 0;
}