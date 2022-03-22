#include <bits/stdc++.h>
using namespace std;

int sumOfNumbers(int n, int a, int b)
{
    int i, sum = 0;
    for (i = a; i <= b; i++)
    {
        if (i % n == 0)
        {
            sum += i;
        }
    }

    return sum;
}