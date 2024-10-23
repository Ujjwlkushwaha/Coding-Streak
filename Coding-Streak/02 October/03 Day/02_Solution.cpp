#include <bits/stdc++.h>
using namespace std;

vector<int> findMajority(vector<int> &nums)
{

    // Your code goes here.
    unordered_map<int, int> mp;
    int len = nums.size();
    
    if( len == 0 ) return {-1};

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    vector<int> result;
    for (auto it : mp)
    {
        if (it.second > len / 3)
        {
            result.push_back(it.first);
        }
    }
    
    if( result.empty() ) return {-1};

    sort(result.begin(), result.end());
    return result;
 
}
int main()
{
    vector<int> nums = {2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    vector<int> ans = findMajority(nums);
    
    for( int val : ans){
        cout << val << " ";
    }
}

// solved🎉🎉