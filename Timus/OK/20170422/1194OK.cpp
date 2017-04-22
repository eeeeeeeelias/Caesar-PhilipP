//1194. Рукопожатия
#include <iostream>
const long long MAX_N = 20000;
int main()
{
	long long hobbits = 0, pairs = 0; //сколько хоббитов, сколько пар
	std::cin >> hobbits >> pairs;
	long long alones = hobbits - 2 * pairs, dividedAlones = 0; //сколько групп из 1 хоббита
	long long nowGroup = 0, subgroupsAmount = 0, nowSubgroup = 0; 
	
	long long allHandshakes = 0, nowHandshakes = 0; 
	//сколько всего рукопожатий, сколько рукопожатий при этом разбиении
	
	long long nowSubgroups[MAX_N], nowSubgroupsAmount[MAX_N]; //запоминаем подгруппы для перемножения
	//какую группу разбиваем, на сколько групп разбиваем, о какой подгруппе сейчас говорим
	
	for (; std::cin >> nowGroup;) { //пока поступают данные; какую группу разбиваем
		std::cin >> subgroupsAmount; //на сколько групп разбиваем
		for (long long i = 0; i < subgroupsAmount; i++) {
			std::cin >> nowSubgroups[i]; //номер новой группы
			std::cin >> nowSubgroupsAmount[i]; //сколько там человек
		}
		for (long long i = 0; i < subgroupsAmount - 1; i++) {
			for (long long j = i + 1; j < subgroupsAmount; j++) {
				allHandshakes += nowSubgroupsAmount[i] * nowSubgroupsAmount[j];
			}
		}
	}
	std::cout << allHandshakes << "\n";
	return 0;
}