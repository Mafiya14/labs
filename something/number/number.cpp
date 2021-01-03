﻿//Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. 
//Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», 
//например: 18 — «восемнадцать учебных заданий».
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() 
{
	int n;
	const string number[31] = { "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать",
		"девятнадцать", "двадцать", "двадцать одно", "двадцать две", "двадцать три", "двадцать четыре", "двадцать пять", "двадцать шесть", "двадцать семь",
		"двадцать восемь", "двадцать девять", "тридцать", "тридцать одно", "тридцать два", "тридцать три", "тридцать четыре", "тридцать пять", "тридцать шесть",
		"тридцать семь", "тридцать восемь", "тридцать девять", "сорок" }; 
	setlocale(LC_ALL, "Rus");

	cout << "введите количество заданий>>";
	cin >> n;
	if ((n >= 10) and (n <= 20) or (n >= 25) and (n <= 30) or (n >= 35) and (n <= 40)) cout << number[n - 10] << " учебных заданий";
	if ((n == 21) or (n == 31)) cout << number[n - 10] << " учебное задание";
	if ((n >= 22) and (n <= 24) or (n >= 32) and (n <= 34)) cout << number[n - 10] << " учебных задания";
	return 0;
}