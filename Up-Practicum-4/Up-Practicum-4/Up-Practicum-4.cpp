#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int IsSumN(int n)
{
	int firstNumber = 0;
	int secondNumber = 0;

	cin >> firstNumber >> secondNumber;

	if (firstNumber + secondNumber == n)
	{
		return 1;
	}
	else { return 0; }
}

char toLower(char ch)
{
	return (char)((int)ch + 32);
}
char toUpper(char ch)
{
	return (char)((int)ch - 32);
}

string concatInt(int n, int m)
{
	return to_string(n) + to_string(m);
}

int sumOfPrimeNums(int start, int end)
{
	int sumOfDividers = 0;

	for (int i = start; i <= end; i++)
	{
		bool isPrime = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0 && j != 1)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			sumOfDividers += i;
		}
	}

	return sumOfDividers;
}

int toSqrt(int n)
{
	return floor(sqrt(n));
}

int sumOfNums(int n)
{
	int sum = 0;

	while (n != 0)
	{
		int digit = n % 10;
		n /= 10;

		sum += digit;
	}

	return sum;
}

bool isSorted(int n)
{
	int digit = 0;
	int previousDigit = 0;

	while (n != 0)
	{
		digit = n % 10;
		n /= 10;

		if (previousDigit == 0)
		{
			previousDigit = digit;
			continue;
		}

		if (previousDigit <= digit)
		{
			return false;
		}

		previousDigit = digit;
	}

	return true;
}

void enterSumOfPrevious()
{
	int n = -1;
	int sum = 1;

	while (n != sum)
	{
		sum += n;
		cin >> n;
	}
}

bool isRowEvenOrOdd(int n)
{
	int previous = 1;
	int current = 1;

	for (int i = 1; i <= n; i++)
	{
		current = previous * 3 / 2;
		previous = current;
	}

	if (current % 2 == 0)
	{ return true; }
	else 
	{ return false; }
}

int main()
{
	//Зад. 1
	/*char c;
	cin >> c;

	if ((int)c >= 65 && (int)c <= 90)
	{
		c = toLower(c);
		cout << (char)c;
	}
	else if ((int)c >= 97 && (int)c <= 122)
	{
		c = toUpper(c);
		cout << (char)c;
	}
	else
	{
		cout << "Not a letter!";
		return 0;
	}*/

	//Зад. 3
	/*int firstNumber;
	int secondNumber;

	cin >> firstNumber >> secondNumber;

	string concatNumber = concatInt(firstNumber, secondNumber);

	cout << concatNumber;*/

	//Зад. 4
	/*int start = 0;
	int end = 0;
	int sumOfDividers = 0;

	cin >> start >> end;

	cout << sumOfPrimeNums(start, end);*/

	//Зад. 5
	/*int n = 0;
	cin >> n;

	cout << toSqrt(n);*/

	//Зад. 6
	/*int n = 0;
	cin >> n;

	cout << sumOfNums(n);*/

	//Зад 7.
	/*int n = 0;
	cin >> n;

	bool check = isSorted(n);
	if (check)
	{ cout << "True!"; }
	else 
	{ cout << "False!"; }*/

	//Зад. 8
	/*enterSumOfPrevious();
	return 0;*/

	//Зад. 9
	/*int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (IsSumN(n) == 1)
		{
			cout << "Yes ";
		}
		else { cout << "No "; }
	}*/

	//Зад. 10
	/*int n = 0;
	cin >> n;

	if (isRowEvenOrOdd)
	{ cout << "Even!"; }
	else 
	{ cout << "Odd!"; }*/
}

