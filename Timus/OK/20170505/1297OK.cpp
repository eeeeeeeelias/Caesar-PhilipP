//1297. ����������
#include <iostream>
#include <string>

const int maxTextLength = 1000;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("1297.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	std::string text = "";
	std::cin >> text;
	long long evens[maxTextLength], odds[maxTextLength];
	for (int i = 0; i < maxTextLength; i++) {
		odds[i] = 1; //�������� ����������
		evens[i] = 0; //������ ����������
	}


	for (int i = 1; i < text.length() - 1; i++) { //���� �������� ����������
		for (int j = i - 1; (j >= 0) && (2 * i - j < text.length()) && (text[j] == text[2 * i - j]); j--) {
			odds[i] += 2;
		}
	}

	for (int i = 0; i < text.length() - 1; i++) { //���� ������ ����������
		for (int j = i; (j >= 0) && (2 * i + 1 - j < text.length()) && (text[j] == text[2 * i + 1 - j]); j--) {
			evens[i] += 2;
		}
	}

	int longestPalindrome = 1, whereIsLongest = 0;

	for (int i = 1; i < text.length() - 1; i++) { //���� ����� ������� �������� ���������
		if (longestPalindrome < odds[i]) {
			longestPalindrome = odds[i];
			whereIsLongest = i;
		}
	}

	for (int i = 0; i < text.length() - 1; i++) { //���� ����� ������� ��������� ������
		if (longestPalindrome < evens[i]) {
			longestPalindrome = evens[i];
			whereIsLongest = i;
		}
	}

	if (longestPalindrome % 2 == 1) { //����� ������� ��������
		for (int i = whereIsLongest - longestPalindrome / 2; i <= whereIsLongest + longestPalindrome / 2; i++) { 
			std::cout << text[i]; 
		}
	}
	else { //����� ������� ������
		for (int i = whereIsLongest - longestPalindrome / 2 + 1; i <= whereIsLongest + longestPalindrome / 2; i++) {
			std::cout << text[i];
		}
	}
	std::cout << "\n";
	return 0;
}