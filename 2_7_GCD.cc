#include <iostream>

using namespace std;

int gcd1(int x, int y)
{
    while(y != 0)
    {

        int xx = x;
        int yy = y;
        x = yy;
        y = xx % yy;

    }

    return x;
}


int gcd1_Recursion(int x, int y)
{
    return (!y) ? x : gcd1_Recursion(y, x % y);
}


int gcd2(int x, int y)
{
    if(x < y)
        return gcd2(y, x);

    if(y == 0)
        return x;
    else
        return gcd2(x - y, y);
}

int gcd3(int x, int y)
{
    if(x < y)
        return gcd3(y, x);

    if(y == 0)
        return x;

    else
    {
        if((x & 1) == 0)
        {
            if((y & 1) == 0)
                return (gcd3(x >> 1, y >> 1) << 1);
            else
                return gcd3(x >> 1, y);
        }
        else
        {
            if((y & 1) == 0)
                return gcd3(x, y >> 1);

            else
                return gcd3(y, x - y);
        }
    }
}




int main()
{
    cout << gcd1(1234535, 12312) << "\n";
    cout << gcd1_Recursion(1234535, 12312) << "\n";
    cout << gcd2(1234535, 12312) << "\n";
    cout << gcd3(1234535, 12312) << "\n";
}


