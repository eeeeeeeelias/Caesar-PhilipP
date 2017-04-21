//1100. Таблица результатов
#include <iostream>

const int MAX_PTS = 100;

struct result{
	long long int ID;
	result* next;
};

void pushID(long long int ID, long long int pts, result* tails[]) 
{
	result* X = new result;
	X->next = nullptr;
	X->ID = ID;
	tails[pts]->next = X;
	tails[pts] = X;
}

bool popID(long long int pts, result* heads[], long long int *id) 
{
	if (heads[pts] == nullptr) {
		*id = -1;
		return false;
	}
	else {
		*id = heads[pts]->ID;
		heads[pts] = heads[pts]->next;
		return true;
	}
}

int main() 
{
	long long int N = 0, ID = 0, PTS = 0;
	bool hasMore = true;
	std::cin >> N;

	result* table[MAX_PTS + 1];
	result* heads[MAX_PTS + 1];
	result* tails[MAX_PTS + 1];
	for (int i = 0; i <= MAX_PTS; i++) {
		table[i] = new result;
		table[i]->next = nullptr;
		table[i]->ID = -1;
		heads[i] = table[i];
		tails[i] = table[i];
	}

	for (int i = 0; i < N; i++) {
		std::cin >> ID >> PTS;
		pushID(ID, PTS, tails);
	}

	for (int PTS = MAX_PTS; PTS >= 0; PTS--) {
		hasMore = true;
		for (; hasMore;) {
			hasMore = popID(PTS, heads, &ID);
			if (ID != -1) { 
				std::cout << ID << " " << PTS << std::endl; 
			}
		}
	}
	return 0;
}