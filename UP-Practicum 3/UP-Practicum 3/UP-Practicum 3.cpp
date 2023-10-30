#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	//Зад. 1
	/*int n = 0;
	int factorialSum = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		factorialSum *= i;
	}

	cout << factorialSum;*/


	//Зад 2.
	/*int start = 0;
	int end = 0;

	cin >> start >> end;

	if (start < 0 || end > 256)
	{
		cout << "Invalid codes!";
		return 0;
	}

	for (int i = start; i <= end; i++)
	{
		char c = (char)i;
		cout << i << " --> " << c << endl;
	}*/

	//Зад 3.
	/*int n = 0;
	cin >> n;
	if (n < 0)
	{
		cout << "Invalid number!";
		return 0;
	}

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << " ";
		}
	}*/

	//Зад 4.
	/*long n = 0;
	int sum = 0;
	cin >> n;

	if (n < 0)
	{
		cout << "Invalid number!";
		return 0;
	}

	while (n != 0)
	{
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}

	cout << sum;*/

	//Зад 5.
	/*int n = 0;
	int min;
	int max;

	cin >> n;
	for (int i = 0; i < n; i++)
	{

	}*/

	//Зад 6.
	/*int binary = 0;
	cin >> binary;
	int hex = 0;
	int index = 0;

	while (binary != 0)
	{
		int digit = binary % 10;
		binary /= 10;

		hex += digit * pow(2, index);
		index++;
	}

	cout << hex;*/

	//Зад 7.
	/*int n = 0;
	int m = 0;

	cin >> n >> m;

	for (int row = 1; row <= n; row++)
	{
		for (int col = 1; col <= m; col++)
		{
			cout << "(" << row << ", " << col << ") ";
		}

		cout << endl;
	}*/

	//Зад 8.
	/*int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int sumOfDividers = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sumOfDividers += j;

				if (sumOfDividers > i) { break; }
			}
		}

		if (sumOfDividers == i)
		{
			cout << i << " ";
		}
	}*/

	//Зад 9.
	/*int n = 0;
	cin >> n;

	if (n < 1)
	{
		cout << "Invalid number!";
		return 0;
	}

	for (int i = 2; i <= n; i++)
	{
		bool IsPrime = true;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0 && i != j)
			{
				IsPrime = false;
				break;
			}
		}

		if (IsPrime)
		{
			cout << i << " ";
		}
	}*/

	//Зад 10.
	/*int n = 0;
	int m = 0;
	cin >> n >> m;

	cout << pow(n, m);*/
}
