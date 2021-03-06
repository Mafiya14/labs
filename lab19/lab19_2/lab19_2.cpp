﻿//Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое.
#include <iostream> 
#include <locale.h> 
using namespace std;

void shift(int i, int N, int* A)
	{
	for (int j = i; j < N; j++)
	{
		A[j] = A[j + 1]; //записываем, игнорируя(тем самым удаляя) значение элемента, которому был равен текущий элемент
	}
}
int main()
{
	int N, i;
	setlocale(LC_ALL, "Rus");
	cout << "введите N>>";
	cin >> N;
	int* A = new int[N];
	cout << "введите элементы массива A>>";
	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	i = 0;
	while (i != (N - 1)) //пока индекс текущего элемента не будет равен кол-ву всех элементов минус 1, т.е. не станет последним элементом
	{
		for (int q = i + 1; q < N; q++)
		{
			if (A[i] == A[q]) //если какой-либо последующий элемент равен текущему, то на место него записывается элемент, следующий после него, и так далее
			{
				shift(i, N, A); //функция удаления одного элемента с индексом i и сдвигом массива
				N--; q--;
				if (q != (N - 1)) shift(q, N, A);  //если удаляемый элемент - непоследний, тогда функция сдвига массива на один, иначе не сдвигаем;
				N--;
				i = -1; //обнуляем счетчик
			}
		}
		i++; //переходим к следующему элементу
	}
	cout << "размер полученного массива>>" << N << "\n";
	cout << "измененный массив A>>";
	for (i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	delete[] A; // очистка памяти
	return 0;
}