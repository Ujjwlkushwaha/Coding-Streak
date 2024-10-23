//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maxDistance(vector<int> &arr)
    {
        // Code here

        // unordered map store the value and initial index of that value 
        unordered_map<int, int> mp;

        // it stores the max length
        int maxi = 0;

        // traverse the array
        for (int i = 0; i < arr.size(); i++)
        {
            // check the arr[i]th value is present or not
            if (mp.find(arr[i]) != mp.end())
            {
                // map ke element present hai
                maxi = max(maxi, i - mp[arr[i]]);

                // agar map me element present hai to maxxi ko update kr do
            }
            else
            {
                // nhi hai to map me add kr do
                mp[arr[i]] = i;
            }
        }

        // return the maximum length of the subarray with equal elements
        return maxi;
    }
};

//{ Driver Code Starts.

int main()
{
    
        vector<int> arr = {1, 1, 2, 2, 2, 1};

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
        return 0;
}
// } Driver Code Ends