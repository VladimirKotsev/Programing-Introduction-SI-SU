#include <iostream>

using namespace std;

const int Size = 1000;

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
	/*const int size = 5;
	char arr[size];

	int start = 0;
	cin >> start;
	
	arr[0] = (char)start;

	for (int i = 1; i < size; i++)
	{
		arr[i] = arr[i - 1] + i;
	}

	PrintArray(arr, size);*/

	//Зад 6.
	/*int n = 0;
	int maxIncrementCount = 0;
	int incrementCount = 1;
	cin >> n;

	int arr[Size];

	FillArray(arr, n);

	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] < arr[i])
		{ incrementCount++; }
		else 
		{ 
			if (incrementCount > maxIncrementCount)
			{ 
				maxIncrementCount = incrementCount; 
			}

			incrementCount = 1;
		}
	}

	cout << maxIncrementCount;*/

	//Homework
	//Зад 7.
	/*const int size = 10;
	int arr[size];
	int count = 0;
	bool IsPrime = true;

	FillArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		for (int n = 2; n < arr[i]; n++)
		{
			if (arr[i] % n == 0)
			{
				IsPrime = false;
				break;
			}
		}

		if (IsPrime)
		{ count++; }
	}

	cout << count;*/

	//Зад 8.
	/*const int size = 5;
	int firstArr[size];
	int secondArr[size];

	FillArray(firstArr, size);
	FillArray(secondArr, size);

	bool linearEquation = true;

	for (int i = 0; i < size - 1; i++)
	{
		if (firstArr[i] / secondArr[i] != firstArr[i + 1] / secondArr[i + 1])
		{
			linearEquation = false;
			break;
		}
	}

	if (linearEquation)
	{
		cout << "True!";
	}
	else
	{
		cout << "No!";
	}*/
}

