#include <iostream>

using namespace std;

const int SIZE = 1000;

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void PrintArray(char arr[], int size)
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

void RemovesAtIndex(int arr[], int index)
{
	for (int i = index; i < sizeof(arr); i++)
	{
		arr[index] = arr[index + 1];
	}
}

void GetArrayFromIndexToIndex(int arr[], int a, int b, int result[] = {})
{
	int i = 0;
	for (int j = a; j <= b; j++)
	{
		result[i] = arr[j];
		i++;
	}
}

bool IsArraySymetric(int arr[])
{
	int arrSize = sizeof(arr);
	//for (int i = arrSize / 2, int j = arrSize / 2; i >= 0, j < arrSize; i-- ) //1 2 3 4 5  || 1 2 2 1
	//{

	//}

	for (int i = arrSize / 2; i < arrSize; i++)
	{

	}

	return false;
}

int main()
{
	int n = 5;
	cout << n / 2;
}

