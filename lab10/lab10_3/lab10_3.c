//���� ����� ������������� �����. ��������� ���������� ������������: ������� ����� �������� ������ ����������.
#include <stdio.h>
#include <locale.h>
int main() {
	int a;
	setlocale(LC_ALL, "Rus");
	printf("������� ����� ������������� �����>>"); scanf_s("%d", &a);
	if ((a % 2 == 0) && (a / 100 == 0) && (a / 10 != 0)) printf("yes"); //����� ������� �� 2 ��� ������� � ����� ��� ������������� ������� �� 
																		//100 ���� 0 (������ 3 ������ � �����) � �� ���� 0 ��� 
																		//������������� ������� �� 10 (������ 1 �����)
	else printf("no");
	return 0;
}