//1510. ѕор€док
#include <iostream>
#include <map>

int main()
{
	std::map <int, int> banknotes;
	int N = 0;
	std::cin >> N;
	int controlValue = N / 2 + 1, answer = -1;
	for (int i = 0, K = 0; i < N; i++) {
		std::cin >> K;
		if (banknotes.find(K) != banknotes.end()) {
			banknotes[K]++;
		}
		else { //new element
			banknotes[K] = 1;
		}
		if (banknotes[K] >= controlValue) { answer = K; }
	}
	std::cout << answer << "\n";
	return 0;
}

/*struct banknote {
	int amount, value;
	banknote* next;
};

int main()
{
	long long int N = 0, answer = -1;
	bool ohYeahMore = true;
	std::cin >> N;
	banknote *firstBanknote = new banknote;
	banknote *thisBanknote = new banknote;
	banknote *newBanknote = new banknote;
	firstBanknote->amount = 0;
	firstBanknote->value = -1;
	firstBanknote->next = new banknote;
	firstBanknote->next->amount = 0;
	firstBanknote->next->value = MAX_K + 1;
	firstBanknote->next->next = nullptr;
	if (N == 1) { std::cin >> answer; }
	else {
		for (int i = 0, X = 0; i < (N + 1) / 2; i++) {
			std::cin >> X;
			thisBanknote = firstBanknote;
			for (; X > thisBanknote->next->value; thisBanknote = thisBanknote->next) {}
			if (X == thisBanknote->next->value) { thisBanknote->next->amount++; }
			else {
				newBanknote = new banknote;
				newBanknote->amount = 1;
				newBanknote->value = X;
				newBanknote->next = thisBanknote->next;
				thisBanknote->next = newBanknote;
			}
		}
		for (int i = (N + 1) / 2, X = 0; i < N; i++) {
			std::cin >> X;
			if (ohYeahMore) { //если не нашли ответ
				thisBanknote = firstBanknote;
				for (; X > thisBanknote->next->value; thisBanknote = thisBanknote->next) {}
				if (X < thisBanknote->next->value) { continue; }
				else {
					thisBanknote->next->amount++;
					if (thisBanknote->next->amount > N / 2) { //ответ найден
						answer = thisBanknote->next->value;
						ohYeahMore = false;
					}
				}
			}
		}
	}
	std::cout << answer << "\n";
	return 0;
}*/