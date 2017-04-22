//2056. Стипендия
#include <iostream>
#include <string>
int main()
{
	int N = 0, grade, grades[3] = { 0, 0, 0 };
	std::string answer = "";
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> grade;
		grades[grade - 3]++;
	}
	if (grades[0] > 0) { answer = "None"; } //has Cs
	else { //has no Cs
		if (grades[1] == 0) { answer = "Named"; } //only As
		else { //has Bs
			answer = (grades[1] * 4 + grades[2] * 5 >= 4.5 * N) ? "High" : "Common";
		}
	}
	std::cout << answer << "\n";
	return 0;
}