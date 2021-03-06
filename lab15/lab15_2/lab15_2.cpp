﻿//Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
//−1, если X < 0; 0, если X = 0; 1, если X > 0.
//С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.
#include <iostream> 
#include <locale.h> 
using namespace std;

int Sign(float X)
{
	int s;
	if (X < 0) s = -1;
	if (X == 0) s = 0;
	if (X > 0) s = 1;
	return s;
}

int main()
{
	float A, B;
	setlocale(LC_ALL, "Rus");
	cout << "введите A и B>>";
	cin >> A >> B;
	cout << Sign(A) + Sign(B);
	return 0;
}