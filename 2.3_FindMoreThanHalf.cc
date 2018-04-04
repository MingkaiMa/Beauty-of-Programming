#include <iostream>

int findMoreThanHalf(int* data, int n)
{
    int candidate;
    int nTimes, i;
    for(i = nTimes = 0; i < n; i++)
    {
        if(nTimes == 0)
        {
            candidate = data[i];
            nTimes++;
        }
        else
        {
            if(data[i] = candidate)
                nTimes++;
            else
                nTimes--;
        }
    }

    return candidate;
}