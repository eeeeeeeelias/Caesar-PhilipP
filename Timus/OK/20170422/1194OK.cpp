//1194. �����������
#include <iostream>
const long long MAX_N = 20000;
int main()
{
	long long hobbits = 0, pairs = 0; //������� ��������, ������� ���
	std::cin >> hobbits >> pairs;
	long long alones = hobbits - 2 * pairs, dividedAlones = 0; //������� ����� �� 1 �������
	long long nowGroup = 0, subgroupsAmount = 0, nowSubgroup = 0; 
	
	long long allHandshakes = 0, nowHandshakes = 0; 
	//������� ����� �����������, ������� ����������� ��� ���� ���������
	
	long long nowSubgroups[MAX_N], nowSubgroupsAmount[MAX_N]; //���������� ��������� ��� ������������
	//����� ������ ���������, �� ������� ����� ���������, � ����� ��������� ������ �������
	
	for (; std::cin >> nowGroup;) { //���� ��������� ������; ����� ������ ���������
		std::cin >> subgroupsAmount; //�� ������� ����� ���������
		for (long long i = 0; i < subgroupsAmount; i++) {
			std::cin >> nowSubgroups[i]; //����� ����� ������
			std::cin >> nowSubgroupsAmount[i]; //������� ��� �������
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