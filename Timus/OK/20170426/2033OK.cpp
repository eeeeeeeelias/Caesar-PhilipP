//2033. Девайсы
#include <iostream>
#include <string>

const int Friends = 6;

struct device {
	int amount, cost;
	std::string name;
};

int main()
{
	device devices[Friends];
	int differentDevices = 0;
	std::string s;
	for (int i = 0, j = 0, cost = 0; i < Friends; i++) {
		std::getline(std::cin, s);
		std::getline(std::cin, s);
		std::cin >> cost;
		if (differentDevices == 0) {
			devices[0].amount = 1;
			devices[0].cost = cost;
			devices[0].name = s;
			differentDevices = 1;
		}
		else {
			for (j = 0; j < differentDevices && s != devices[j].name; j++) {}
			if (s == devices[j].name) {
				devices[j].amount++;
				devices[j].cost = std::fmin(devices[j].cost, cost);
			}
			else {
				devices[j].name = s;
				devices[j].amount = 1;
				devices[j].cost = cost;
				differentDevices++;
			}
		}
		std::getline(std::cin, s);
	}
	int answer = 0, answeramount = -1, answercost = 1000000 + 1;
	for (int i = 0; i < differentDevices; i++) {
		if (devices[i].amount > answeramount || devices[i].amount == answeramount && devices[i].cost < answercost) {
			answer = i;
			answeramount = devices[i].amount;
			answercost = devices[i].cost;
		}
	}
	std::cout << devices[answer].name << "\n";
	return 0;
}