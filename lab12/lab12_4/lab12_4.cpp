﻿//Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main()
{
	int n, a, b, c;
	const string hundreds[9] = { "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот" };
	const string dozens[10] = { "", " десять", " двадцать", " тридцать", " сорок", " пятьдесят", " шестьдесят", " семьдесят", " восемьдесят", " девяносто" };
	const string units[10] = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };
	const string numb[9] = { "одиннадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };
	setlocale(LC_ALL, "Rus");

	cout << "введите число>>";
	cin >> n;
	a = n / 100; //сотни
	b = n / 10 % 10; //десятки
	c = n % 10; //единицы
	if ((b == 1) and (c != 0)) cout << hundreds[a - 1] << " " << numb[c-1];
	else cout << hundreds[a - 1] << dozens[b] << " " << units[c];
	return 0;
}