#include <iostream>

// calculate tailing zero in N!

//Solution 1

int trailZero(int n)
{
    int ret = 0;
    for(int i = 1; i <= n; i++)
    {
        int j = i;
        while(j % 5 == 0)
        {
            ret++;
            j /= 5;
        }
    }
    return ret;
}

int main()
{
    std::cout << trailZero(20) << "\n";
}