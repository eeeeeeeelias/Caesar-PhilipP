//1494. �����������
#include <iostream>

int main()
{
	int N = 0, nowMax = 0, inversedEnd = 0;
	std::cin >> N;
	bool isPossible = true, inversed = false;
	for (int i = 1, X = 0; i <= N && isPossible; i++) {
		std::cin >> X;
		if (!inversed) { //�� ���������
			if (X == nowMax + 1) { //�� ����
				continue;
			}
			else {
				inversed = true;
				inversedEnd = nowMax + 1;
				nowMax = X;
			}
		}
		else {
			
		}
	}
	std::cout << ((isPossible) ? "Not a proof" : "Cheater") << "\n";
	return 0;
}