#include <iostream>
#include "UP-Practicum-5.h"

using namespace std;

const int Size = 1000;

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	//Зад 1.
	/*int array[Size];

	int n = 0;
	cin >> n;

	FillArray(array, n);

	for (int i = 0; i < n / 2; i++)
	{
		int elementToSwap = array[n - i - 1];
		array[n - i - 1] = array[i];
		array[i] = elementToSwap;
	}

	PrintArray(array, n);*/

	//Зад 2.
	/*int array[5];

	int n = 0;

	FillArray(array, 5);
	cin >> n;

	for (int i = 0; i < 5; i++)
	{
		array[i] += n;
	}

	PrintArray(array, 5);*/

	//Зад 3.
	/*int arr[Size];
	int oddCount = 0;
	int evenCount = 0;

	int n = 0;
	cin >> n;

	FillArray(arr, n);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{ evenCount++; }
		else { oddCount++; }
	}

	if (evenCount == oddCount)
	{ cout << "Equal!"; }
	else if (evenCount > oddCount)
	{ cout << "Even!"; }
	else 
	{ cout << "Odd"; }*/

	//Зад 4.
	/*const int size = 10;
	int n = 0;

	int arr[size];
	FillArray(arr, size);
	cin >> n;
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % n == 0)
		{
			arr[i] = 0;
		}
	}

	PrintArray(arr, size);*/

	//Зад 5.
	const int size = 5;
	char arr[size];

	int start = 0;
	cin >> start;
	
	arr[0] = (char)start;

	for (int i = 1; i < size; i++)
	{
		arr[i] = arr[i - 1] + i;
	}

	PrintArray(arr, size);
}

