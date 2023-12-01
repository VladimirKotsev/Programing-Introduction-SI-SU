#include <iostream>

using namespace std;

int countOfDividers(int number)
{
    int count = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0) 
            { count ++; }
    }

    return count;
}

int findTuplesCount(int n, int k)
{
    int tupleCount = 0;

    for (int x = 1; x <= n; x++)
    {
        for (int y = x; y <= n; y++)
        {
            if (k * countOfDividers(x) * countOfDividers(y) == x * y)
            {
                tupleCount++;
            }
        }
    }

    return tupleCount;
}
int main()
{
    int n = 0;
    int k = 0;

    cin >> n >> k;

    cout << findTuplesCount(n, k);
}
