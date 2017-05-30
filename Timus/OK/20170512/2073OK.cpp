//2073. Логи соревнований
#include <iostream>
#include <string>
#include <algorithm>
const int CONTEST_WIDTH = 30, PROBLEMS_AMOUNT = 13;

void addSpaces(std::string s)
{
	for (int i = s.length(); i < CONTEST_WIDTH; i++) { std::cout << " "; }
}

void writeLine()
{
	std::cout << "+";
	for (int i = 0; i < CONTEST_WIDTH; i++) { std::cout << "-"; }
	std::cout << "+";
	for (int i = 0; i < 8; i++) { std::cout << "-"; }
	std::cout << "+";
	for (int i = 0; i < PROBLEMS_AMOUNT; i++) { std::cout << "-"; }
	std::cout << "+\n";
}

void writeHeader()
{
	writeLine();
	std::cout << "|";
	std::cout << "Contest name";
	addSpaces("Contest name");
	std::cout << "|";
	std::cout << "Date    ";
	std::cout << "|";
	for (int i = 0; i < 13; i++) { std::cout << (char)('A' + i); }
	std::cout << "|\n";
	writeLine();
}

void writeContest(std::string contestName, std::string date, int result[])
{
	std::cout << "|";
	std::cout << contestName;
	addSpaces(contestName);
	std::cout << "|";
	std::cout << date;
	std::cout << "|";
	for (int i = 0; i < PROBLEMS_AMOUNT; i++) {
		switch (result[i]) {
		case -2: std::cout << " "; break;
		case -1: std::cout << "."; break;
		case 0: std::cout << "x"; break;
		case 1: std::cout << "o"; break;
		}
	}
	std::cout << "|\n";
	writeLine();
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("2073.in", "rt", stdin);
	#endif // !ONLINE_JUDGE

	writeHeader();

	int N = 0, problems[PROBLEMS_AMOUNT];
	std::cin >> N;
	std::string contestName = "", date = "", problem = "", result = "";
	std::getline(std::cin, contestName);
	for (int j = 0, problemsAmount = 0, submits = 0; j < N; j++) {
		std::getline(std::cin, contestName);
		std::getline(std::cin, date);
		std::cin >> problemsAmount >> submits;
		for (int i = 0; i < problemsAmount; i++) { problems[i] = -1; }
		for (int i = problemsAmount; i < PROBLEMS_AMOUNT; i++) { problems[i] = -2; }
		std::getline(std::cin, problem);
		for (int i = 0; i < submits; i++) {
			std::cin >> problem;
			std::getline(std::cin, result);
			if (result == " Accepted") { problems[problem[0] - 'A'] = 1; }
			else { problems[problem[0] - 'A'] = std::max(0, problems[problem[0] - 'A']); }
		}
		writeContest(contestName, date, problems);
	}
	return 0;
}