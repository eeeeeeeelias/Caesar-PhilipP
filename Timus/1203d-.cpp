//1203. Научная конференция
#include <iostream>
const int MAX_T = 30000;
int main()
{
	long long N = 0, Stimes[MAX_T + 2], Etimes[MAX_T + 2], firstTs = MAX_T + 1, lastTe = 0;
	for (long long i = 0; i <= MAX_T + 1; i++) {
		Stimes[i] = -1;
		Etimes[i] = MAX_T + 1;
	}
	std::cin >> N;
	for (long long i = 0, Ts = 0, Te = 0; i < N; i++) {
		std::cin >> Ts >> Te;
		Stimes[Te] = std::fmax(Stimes[Te], Ts);
		Etimes[Ts] = std::fmin(Etimes[Ts], Te);
		firstTs = std::fmin(firstTs, Ts);
		lastTe = std::fmax(lastTe, Te);
	}
	for (long long i = lastTe, nowTs = Stimes[lastTe]; i >= firstTs; ) {
		if (Stimes[i] == -1) { 
			i--;
			continue;
		}
		nowTs = Stimes[i];
		for (long long j = i; j >= Stimes[i]; j--) {
			Stimes[j] = nowTs;
		}
		i = nowTs - 1;
		nowTs = Stimes[i];
	}
	for (long long i = firstTs, nowTe = Etimes[firstTs]; i <= lastTe; ) {
		if (Etimes[i] == MAX_T + 1) {
			i++;
			continue;
		}
		for (long long j = i; j <= Etimes[i]; j++) {
			Etimes[j] = nowTe;
		}
		i = nowTe + 1;
		nowTe = Etimes[i];
	}
	long long answer = 0;
	for (long long i = firstTs; i <= lastTe; i++) {
		if (Stimes[i] != Stimes[i - 1] && Stimes[i] != -1) { answer++; }
	}
	std::cout << answer << "\n";
	return 0;
}