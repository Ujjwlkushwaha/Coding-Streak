#include <iostream>
#include <vector>
using namespace std;

int minimumSubarrayLength(vector<int> &nums, int k)
{
    int num = nums[0];
    for( int i = 1; i < nums.size();i++ )
    {
        num = num|nums[i];
    }

    if( num == nums[nums.size()-1] )
    {'''
    }
    return num;
}
int main()
{
    vector<int> arr = {2,1,8};
    int k = 10;

    cout << minimumSubarrayLength(arr, k) << endl; // Output: 3
}