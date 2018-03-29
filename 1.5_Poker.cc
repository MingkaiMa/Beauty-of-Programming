#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> array = {1,1,1,1,2,2,2,2,3,3,3};

    int res = 0;

    for(auto i: array)
        res = res ^ i;

    cout << res <<  "\n";

}