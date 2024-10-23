#include <bits/stdc++.h>
using namespace std;

// Given an array arr[] of positive integers where every element appears even times except for one. Find that number occurring an odd number of times.

int getSingle(vector<int> &arr)
{
    // code here
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto it = mp.begin(); it!= mp.end(); it++)
    {
        if( it->second % 2 != 0 )
        {
            return it->first;  // return the first element with odd count
        }
    }

    return -1;
}
int main() {
    vector<int> arr = {1, 1, 2, 2, 2};
    int ans = getSingle(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}