#include <iostream>

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

int main()
{
	//Зад. 8
	bool IsEqualToSum = false;
	int n = 0;

	while (!IsEqualToSum)
	{
		cin >> n;

	}

	//Зад. 9
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (IsSumN(n) == 1)
		{
			cout << "Yes ";
		}
		else { cout << "No "; }
	}

	//Зад. 10

}
