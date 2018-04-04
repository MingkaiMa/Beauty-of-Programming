#include <iostream>
#include <vector>
using namespace std;

// get top k biggest numbers

int partition(vector<int>& nums, int p, int r)
{
    int x = nums[r];

    int i = p - 1;

    for(int j = p; j < r; j++)
    {
        if(nums[j] < x)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[r]);
    return i + 1;
}


void printArray(vector<int>& nums)
{
    for(auto i: nums)
        cout << i << ", ";
    cout << "\n";
}

vector<int> Kbig(vector<int>& nums, int k)
{

    if(k <= 0)
        return nums;
    if(k >= nums.size())
        return nums;

    int numLen = nums.size();
    int p = 0;
    int r = nums.size() - 1;

    int q = partition(nums, p, r);

    if(numLen - q == k)
    {
        vector<int> rres(nums.begin() + q, nums.end());
        return rres;
    }
    else if(numLen - q > k)
    {
        vector<int> newNums(nums.begin() + q, nums.end());
        return Kbig(newNums, k);
    }
    else
    {
        vector<int> part1Array(nums.begin(), nums.begin() + q);
        int kk = k - (numLen - q);
        vector<int> part1 = Kbig(part1Array, kk);
        vector<int> part2(nums.begin() + q, nums.end());

        part1.insert(part1.end(), part2.begin(), part2.end());
        return part1;
    }


}

int main()
{
    vector<int> array = {7,2,4,1,5,3};
    cout << partition(array, 0, 5) << "\n";
    printArray(array);

    vector<int> res = Kbig(array, 0);
    printArray(res);

}