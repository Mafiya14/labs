//� ��������� ��������� ������ 60-������ ����, ��������� �� 12- ������ ���������, ������������ ���������� �����: �������, �������, ������, ����� � ������. 
//� ������ �������� ���� ����� �������� ��������: �����, ������, �����, �����, �������, ����, ������, ����, ��������, ������, ������ � ������. 
//�� ������ ���� ���������� ��� ��������, ���� 1984 ��� � ������ �����: ���� ������� ������.

//� ���������������� � ��������� ��������� ���� ���� ���� ��� ���� - 0 � 1 ���� - �����, 2 � 3 - ������, 4 � 5 - �������(�����), 6 � 7 - �������, 8 � 9 - ������

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	int year, a, b, c;
	const string colour[10] = { "���", "���", "����", "����", "�����", "�����", "�����", "����", "����", "����" };
	const string animal[12] = { "�����", "������", "�����", "�����", "�������", "����", "������", "����", "��������", "������", "������", "������" };
	setlocale(LC_ALL, "Rus");

	cout << "������� ���>>";
	cin >> year;
	while (year < 1984) year = year + 60;
	a = year - 1984;
	b = year % 10; //����������� ���������� �����, �.�. �� ���� ������������ ���� ���������
	c = a % 12; //������� ��� ����������� ���������
	if ((c >= 2) and (c <= 4)) cout << "��� " << colour[b] << "��� " << animal[c];
	else cout << "��� " << colour[b] << "�� " << animal[c];
	return 0;
}