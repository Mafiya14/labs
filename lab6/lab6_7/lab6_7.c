#include <stdio.h>  //���������� ���������� ����� ������
#include <math.h>   //���������� ���������� ��� ���������� �������� �������������� �������
#include <locale.h> //���������� ���������� ��� �����������
int main()          //����� ����� � ���������
{
	int a, v1, v2;    //���������� ����������
	setlocale(LC_ALL, "Rus"); //������� ����������� �� ������� ����
	printf("������� a>>"); scanf_s("%d", &a); //����� ������� � ������ ����������
	v1 = pow(a, 3); v2 = pow(a, 4);
	a = a * a * v1 * v1 * v1 * v2; //�������: 1+1+3+3+3+4=15
	printf("a^15=%d", a); //����� ��������
	return 0; //����� ���������
}