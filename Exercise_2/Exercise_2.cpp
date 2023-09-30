#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int col = 10;
void Reverse(int[], int);
void Exchange(int[][col], int);
int main()
{
	system("chcp 1251");
	system("cls");
	cout << "------------------Программа для работы с массивом и функцией!------------------\n" << endl;
	const int size = 10;
	int Array[size]{};
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		Array[i] = rand() % (100 - (-99)) - 99;
		cout << Array[i] << " ";
	}
	cout << endl;
	Reverse(Array, size);
	cout << endl;

	system("pause");
	system("cls");

	int ArrayBlock[size][col]{};

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < col; j++)
		{
			ArrayBlock[i][j] = rand() % (100 - (-99)) - 99;
			if (ArrayBlock[i][j] >= 0) cout << " ";
			if (ArrayBlock[i][j] > -10 && ArrayBlock[i][j] < 10)cout << " ";
			cout << ArrayBlock[i][j] << " | ";
		}
		cout << endl;
	}
	cout << endl;

	Exchange(ArrayBlock, size);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (ArrayBlock[i][j] >= 0 && ArrayBlock[i][j] < 555) cout << " ";
			if (ArrayBlock[i][j] > -10 && ArrayBlock[i][j] < 10)cout << " ";
			cout << ArrayBlock[i][j] << " | ";
		}
		cout << endl;
	}
}

void Reverse(int Massive[], int scale)
{
	for (int i = 0; i < scale; i++)
	{
		Massive[i] = Massive[9 - i];
		cout << Massive[i] << " ";
	}
}

void Exchange(int ArrayBlock[][col], int row)
{
	int max = 0, min = 0;
	for (int i = 0; i < row; i++)
	{
		max = ArrayBlock[i][0];
		min = ArrayBlock[i][0];

		for (int j = 0; j < col; j++)
		{
			if (ArrayBlock[i][j] > max)ArrayBlock[i][j] = 777;
			if (ArrayBlock[i][j] < min)ArrayBlock[i][j] = 555;
		}
	}
}

/* Написать функцию, меняющую порядок следования элементов передаваемого ей одномерного массива на противоположный (10 элементов от -99 до 99).

Под* написать функцию получающую двумерный массив размером 10 на 10, заполненный случайными числами от -99 до 99
и заменяющую в нём максимальный элемент на 777, а минимальный на 555 */