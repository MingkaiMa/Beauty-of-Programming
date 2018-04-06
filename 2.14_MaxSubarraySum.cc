#include <iostream>

using namespace std;

//solu1
int MaxSum1(int* A, int n)
{
    int maxSum = INT_MIN;
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += A[j];
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}


//solu2
int MaxSum2(int* A, int n)
{
    Start[n - 1] = A[n - 1];
    All[n - 1] = A[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        Start[i] = max(A[i], A[i] + Start[i + 1]);
        All[i] = max(Start[i], All[i + 1]);
    }
    return All[0];
}
