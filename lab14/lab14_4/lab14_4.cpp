﻿//Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). 
//По данному P определить, через сколько месяцев размер вклада превысит 1100 руб., и вывести найденное количество месяцев K (целое число) и 
//итоговый размер вклада S (вещественное число).
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int K;
	float P, S;
	setlocale(LC_ALL, "Rus");
	cout << "введите P>>";
	cin >> P;
	K = 0;
	S = 1000;
	while (S < 1100)
	{
		K = K + 1;
		S = S + S * P / 100;
	}
	cout << K << " " << S;
	return 0;
}