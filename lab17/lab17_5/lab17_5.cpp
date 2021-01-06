﻿//Дан целочисленный массив размера N, содержащий ровно два одинаковых элемента. Найти номера одинаковых элементов и вывести эти номера в порядке возрастания
#include <iostream> 
#include <locale.h> 
using namespace std;

int main()
{
	int N, i;
	bool flag;
	setlocale(LC_ALL, "Rus");
	flag = 0;
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i]; 
		do {
			for (int j = i; j >= 0; j--) //вводим второй счетчик номера элемента, с которым будем сравнивать поступивший элемент
			{
				if (A[i] == A[j] && i != j) //если нашлись два одинаковых элемента с разными номерами, то выводим, flag = 1
				{
					if (i < j) cout << i << " " << j;
					else cout << j << " " << i;
					flag = 1;
				}
				if (j == 0) flag = 1; //если одинаковых элементов пока что не нашлось, то flag = 1, чтобы цикл do...while завершился 
				                      //и программа перешла к инициализации следующего элемента массива
				                      //(гарантируется, что в массиве есть два одинаковых элемента, поэтому не предусмотрено, что в массиве их может не оказаться)
			}
		} while (flag != 1);
	}
	delete[] A; // очистка памяти
	return 0;
}