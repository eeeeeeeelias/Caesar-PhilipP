//1196. Экзамен по истории
#include <iostream>

struct Node {
	int year;
	int amount;
	Node* next;
};

const int MAX_N = 15000, MAX_M = 100000;

int main() 
{
	int N = 0, M = 0, j = 0, year = 0;
	int teacher[MAX_N + 1][2];
	teacher[0][0] = 0; //дата
	teacher[0][1] = 0; //количество
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> year;
		if (year > teacher[j][0]) {
			j++;
			teacher[j][0] = year;
			teacher[j][1] = 1;
		}
		else { teacher[j][1]++; }
	}
	int finalT = j, answer = 0;

	std::cin >> M;
	Node* X = new Node;
	X->year = 1000000000 + 1;
	X->amount = -1;
	X->next = nullptr;
	Node* firstNode = X;
	X = new Node;
	X->year = -1;
	X->amount = -1;
	X->next = firstNode;
	firstNode = X;
	Node* Y;
	for (int i = 0; i < M; i++) {
		std::cin >> year;
		X = firstNode;
		for (; year >= X->next->year; X = X->next) {}
		if (year == X->year) { X->amount++; }
		else {
			Y = new Node;
			Y->year = year;
			Y->amount = 1;
			Y->next = X->next;
			X->next = Y;
		}
	}

	X = firstNode;
	for (int nowT = 1; nowT <= finalT && X != nullptr; )
	{
		if (teacher[nowT][0] > X->year) { 
			X = X->next; 
			continue;
		}
		else {
			if (teacher[nowT][0] < X->year) { 
				nowT++; 
				continue;
			}
			else {
				answer += (X->amount);
				nowT++;
				X = X->next;
			}
		}
	}

	std::cout << answer << "\n";
	/*long long int dates[MAX_N + 1], N = 0, M = 0, D = 0;
	long long int answer = 0;
	std::cin >> N;
	dates[0] = -1;
	int j = 0;
	for (int i = 0; i < N; i++) {
		std::cin >> D;
		if (D != dates[j]) {
			j++;
			dates[j] = D;
		}
	}
	std::cin >> M;
	for (int i = 0; i < M; i++) {
		std::cin >> D;
		if (D >= dates[1] && D <= dates[N]) {
			if (binarySearch(D, 1, N, dates) != -1) { answer++; }
		}
	}
	std::cout << answer << std::endl;
	return 0;*/
}