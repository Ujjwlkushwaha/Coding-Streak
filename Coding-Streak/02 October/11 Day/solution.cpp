//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> rearrange(vector<int> &arr)
    {
        // Code here

        // vector<int> ans(arr.size() , -1);

        for (int i = 0; i < arr.size(); i++)
        {
            while (arr[i] != -1 and arr[i] != i)
            {
                swap(arr[i], arr[arr[i]]);
            }
        }
        return arr;
    }
};

//{ Driver Code Starts.

int main()
{

        vector<int> arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
      
        Solution solution;
        vector<int> ans = solution.rearrange(arr);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;

    return 0;
}