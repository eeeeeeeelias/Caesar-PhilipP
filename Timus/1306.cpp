//1306. Медиана последовательности
#include <iostream>
#include <map>

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1306.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	std::map <unsigned int, unsigned int> sequence;
	int N = 0;
	std::cin >> N;
	for (int i = 1, K = 0; i <= N / 2 + 1 ; i++) {
		std::cin >> K;
		if (sequence.find(K) != sequence.end()) { sequence[K]++; }
		else { sequence[K] = 1; }
	}
	for (int i = N / 2 + 2, K = 0; i <= N; i++) {
		std::cin >> K;
		if (K >= sequence.rbegin()->first) {
			if (sequence.begin()->second == 1) { sequence.erase(sequence.begin()->first); }
			else { sequence.begin()->second--; }
		}
		else {
			if (K <= sequence.begin()->first) {
				if (sequence.rbegin()->second == 1) { sequence.erase(sequence.rbegin()->first); }
				else { sequence.rbegin()->second--; }
			}
			else {
				if (sequence.find(K) != sequence.end()) { sequence[K]++; }
				else { sequence[K] = 1; }
				if (sequence.size() > N - i + 3 && N % 2 == 0 || sequence.size() > N - i + 2 && N % 2 != 0) {
					if (sequence.rbegin()->second == 1) { sequence.erase(sequence.rbegin()->first); }
					else { sequence.rbegin()->second--; }
					if (sequence.begin()->second == 1) { sequence.erase(sequence.begin()->first); }
					else { sequence.begin()->second--; }
				}
			}
		}
	}
	for (; !((N % 2 == 0 && (sequence.size() == 1 || sequence.size() == 2 && sequence.begin()->second == 1 && sequence.rbegin()->second == 1)) 
		|| (N % 2 != 0 && sequence.size() == 1));) {
		sequence.rbegin()->second--;
		if (sequence.rbegin()->second == 0) { sequence.erase(sequence.rbegin()->first); }
		sequence.begin()->second--;
		if (sequence.begin()->second == 0)  { sequence.erase(sequence.begin()->first); }
	}
	if (N % 2 == 0) { //последовательность чётна
		if (sequence.rbegin()->second > 1) { //медиана(A, A)
			std::cout << sequence.rbegin()->first << "\n"; 
		} 
		else { //медиана(A, B)
			long long A = sequence.rbegin()->first;
			long long B = sequence.begin()->first;
			A = A - B;
			if (A % 2 == 0) { std::cout << (B + A / 2) << ".0" << "\n"; }
			else { std::cout << (B + A / 2) << ".5" << "\n"; }
		}
	}
	else { //последовательность нечётна
		std::cout << (sequence.rbegin()->first) << "\n";
	}
	return 0;
}