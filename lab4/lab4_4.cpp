//���� ��� ��������� �����.����� �����, ��������, ������������ � ������� �� ���������.
#include <stdio.h>  //���������� ���������� ����� ������
#include <math.h>   //���������� ���������� ��� ���������� �������� �������������� �������
#include <locale.h> //���������� ���������� ��� �����������
int main()          //����� ����� � ���������
{
	float a, b;    //���������� ����������
	setlocale(LC_ALL, "Rus"); //������� ����������� �� ������� ����
	printf("������� a>>"); scanf_s("%f", &a); //����� ������� � ������ ����������
	printf("������� b>>"); scanf_s("%f", &b);
	printf("����� ���������=%f\n", a * a + b * b); //����� ��������
	printf("�������� ���������=%f\n", a * a - b * b);
	printf("������������ ���������=%f\n", a * a * b * b);
	printf("������� ���������=%f", (a * a)/(b * b));
	return 0; //����� ���������
}