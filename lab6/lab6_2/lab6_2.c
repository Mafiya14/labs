//���� ���������� A, B, C.�������� �� ��������, ���������� ���������� A � B, B � � C, C � � A, � ������� ����� �������� ���������� A, B, C.
#include <stdio.h>  //���������� ���������� ����� ������
#include <locale.h> //���������� ���������� ��� �����������
int main()          //����� ����� � ���������
{
	int a, b, c, p;    //���������� ����������
	setlocale(LC_ALL, "Rus"); //������� ����������� �� ������� ����
	printf("������� a>>"); scanf_s("%d", &a); //����� ������� � ������ ����������
	printf("������� b>>"); scanf_s("%d", &b); //-=-
	printf("������� c>>"); scanf_s("%d", &c); //-=-
	p = a;
	a = c;
	c = b;
	b = p;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d", c); //����� ��������
	return 0; //����� ���������
}