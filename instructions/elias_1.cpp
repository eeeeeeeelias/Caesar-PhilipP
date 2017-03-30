// ����� ������� �������� �����������. ������ �������, ���������� //! ����� ���������������� �� ����� � ���������.

// '#' ���������� ��� ���������� ��������� �������������. ���� �� ������ ������ ���� -- #include. ��� ���������� ����������. ������ �� ����������
// ����������, ������� ������������ ����-����� � ����������.

#include <iostream>

// ��, ��� ���������� � ���������, ���������� ������ ������� main. ��� ���� ������.
int main() {

// � �++ ����������� ���������. ��� ������, ��� ��� ���������� ����������� ���� � ��� ������ ��������. ��� ��������� ��������:
	int a = 10; // ����� �����
	double pi = 3.14; // ������� ����� (��� ����� � ��������� ������)
	bool ok = true; // ��������� ��������: True ��� False

// �������� �������� �� ; � ����� ������ ������. ��� �����������.
// ������ �������� ������ ����-�����.

//!	std::cout << a << " " << pi << " " << ok << std::endl;

// �������� �� ��������. std::cout -- �������, ������� ������������ �����. ��������� �� �������� ����� <<. ������� ���� ����������, ������� �� ������,
// ����� ������, ��������� �� ������ ���� �������, ����� ����� ����������, ������, ����������. � ����� ��� ��������� ������ �������� ������.
// �� ������ �� ������ ��.

// ���� �������� ������. ������� ������� 3 ����� � ���������� � ����������� ��:

//!	int x, y, z;
//!	std::cin >> x >> y >> z;
//!	std::cout << x << y << z << std::endl;

// ����������, � �++ ���� �������. ��������, ������� ������� ������� ����, ������� ��� ����� �, �, z, ������� �� ������ ��� �������, 
// �������, �������� �� x ������ y � z:

//!	if (x == y + z) {
//!		std::cout << "YES" << std::endl;
//!	}
//!	else {
//!		std::cout << "NO" << std::endl;
//!	}

// [������� 1]. �������� � ���������� 3 ����� � ���������, �������� �� ��� ���������� ������. �������� "YES", ���� ��������, � "NO" �����.
// ���������: ����� �� �����������, ��� ����� ���������� ��� ������. ���������� �������� � �++ ������������ ���: OR: ||, AND: &&, NOT: !. 

//[���]

// � �++ ���� ����� (��). ������������ �������� ���� -- for. ��� ��������� �����: for([�������������]; [�������]; [�������]){}.
// ������ ���� ����������� ��� ������� �����. ������ ����������� �� ������ ��������. ������ ����������� �� ������ ��������.
// ������: ������� ������ �������� ����� �� 10 � �� ��������� �����:
//!	int s = 0;
//!	for (int i = 1; i < 10; i += 2) {
//!		s += i;
//!		std::cout << i << " " << s << std::endl;
//!	}

// [������� 2] �������� ����� ��������� �� 1000. �������� ����� ��������� 1000-�� ����� � 999-��. 
// ��������: ��������� ������� int-�� � �++ -- ����� �����! ����� ������� ������� �����, ����� �������� ������� ��� �������� � ���� double.
//!	std::cout << 5 / 2 << " " << (double)5 / 2 << std::endl;

	//[���]

	system("pause"); //� ��� ����� ������, ����� �� �� �������� ����.
}