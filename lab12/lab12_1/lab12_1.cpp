﻿//Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
//Вывести дату в виде текста (например, «пятое января»).
#include <stdio.h>
#include <locale.h>
int main() {
	int d, m;
	setlocale(LC_ALL, "Rus");
	printf("введите дату в формате номер день и номер месяца>>"); scanf_s("%d%d", &d, &m);
	switch (d) {
	case 1: printf("первое"); break;
	case 2: printf("второе"); break;
	case 3: printf("третье"); break;
	case 4: printf("четвертое"); break;
	case 5: printf("пятое"); break;
	case 6: printf("шестое"); break;
	case 7: printf("седьмое"); break;
	case 8: printf("восьмое"); break;
	case 9: printf("девятое"); break;
	case 10: printf("десятое"); break;
	case 11: printf("одиннадцатое"); break;
	case 12: printf("двенадцатое"); break;
	case 13: printf("тринадцатое"); break;
	case 14: printf("четырнадцатое"); break;
	case 15: printf("пятнадцатое"); break;
	case 16: printf("шестнадцатое"); break;
	case 17: printf("семнадцатое"); break;
	case 18: printf("восемнадцатое"); break;
	case 19: printf("девятнадцатое"); break;
	case 20: printf("дватцатое"); break;
	case 21: printf("двадцать первое"); break;
	case 22: printf("двадцать второе"); break;
	case 23: printf("двадцать третье"); break;
	case 24: printf("двадцать четвертое"); break;
	case 25: printf("двадцать пятое"); break;
	case 26: printf("двадцать шестое"); break;
	case 27: printf("двадцать седьмое"); break;
	case 28: printf("двадцать восьмое"); break;
	case 29: printf("двадцать девятое"); break;
	case 30: printf("тридцатое"); break;
	case 31: printf("тридцать первое"); break;
	default: printf("нет соответствий, введена некорректная дата");
	}
	switch (m) {
	case 1: printf(" января"); break;
	case 2: printf(" февраля"); break;
	case 3: printf(" марта"); break;
	case 4: printf(" апреля"); break;
	case 5: printf(" мая"); break;
	case 6: printf(" июня"); break;
	case 7: printf(" июля"); break;
	case 8: printf(" августа"); break;
	case 9: printf(" сентября"); break;
	case 10: printf(" октября"); break;
	case 11: printf(" ноября"); break;
	case 12: printf(" декабря"); break;
	default: printf(" нет соответствий, введена некорректная дата");
	}
	return 0;
}