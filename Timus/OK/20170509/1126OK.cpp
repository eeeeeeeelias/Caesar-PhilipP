//1126. Магнитные бури
#include <iostream>
const int MAX_M = 14000;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1126.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	int M = 0, readout[MAX_M], maxR = -1;
	std::cin >> M;
	for (int i = 0, R = 0; i < M; i++)
	{
		std::cin >> readout[i];
		if (maxR < readout[i]) { maxR = readout[i]; }
	}
	std::cout << maxR << "\n";
	for (int R = 0; R != -1; ) {
		std::cin >> R;
		if (R == -1) { break; }
		else {
			maxR = -1;
			for (int i = 0; i < M - 1; i++) {
				readout[i] = readout[i + 1];
				if (maxR < readout[i]) { maxR = readout[i]; }
			}
			readout[M - 1] = R;
			if (maxR < R) { maxR = R; }
			std::cout << maxR << "\n";
		}
	}
	return 0;
}