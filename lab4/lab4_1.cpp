#include <stdio.h>  //���������� ���������� ����� ������
#include <math.h>   //���������� ���������� ��� ���������� �������� �������������� �������
#include <locale.h> //���������� ���������� ��� �����������

int main()          //����� ����� � ���������
{
	float a, b, P, S;    //���������� ����������
	setlocale(LC_ALL, "Rus"); //������� ����������� �� ������� ����
	printf("������� a>>"); scanf_s("%f", &a); //����� ������� � ������ ����������
	printf("������� b>>"); scanf_s("%f", &b); //-=-
	P = 2 * (a + b); //���������� ��������
	S = a * b;
	printf("P=%f\n", P);
	printf("S=%f", S); //����� ��������
	return 0; //����� ���������
}
