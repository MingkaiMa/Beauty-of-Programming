#include <iostream>

// calculate tailing zero in N!

//Solution 1

int trailZeroSolu1(int n)
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


int trailZeroSolu2(int n)
{
    int ret = 0;
    while(n)
    {
        ret += n / 5;
        n /= 5;
    }

    return ret;
}

int lowestOne(int n)
{
    int ret = 0;
    while(n)
    {
        n >>= 1;
        ret += n;
    }
    return ret;
}


int main()
{
    std::cout << trailZeroSolu1(20) << "\n";
    std::cout << trailZeroSolu2(20) << "\n";
    std::cout << lowestOne(20) << "\n";
}

