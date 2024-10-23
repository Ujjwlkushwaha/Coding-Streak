#include <bits/stdc++.h>
using namespace std;

int maxWidthRamp(vector<int> &nums)
{
    int ans = 0;
    int n = nums.size();

    stack<pair<int, int>> st;

    // Storing values in decreasing order
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push({nums[i], i});
        }
        // storing values in decreasing fashion
        else if (st.top().first > nums[i])
        {
            st.push({nums[i], i});
        }
    }

    // Start from the last index and try to find the largest ramp
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && nums[i] >= st.top().first)
        {
            int ind = st.top().second;
            ans = max(ans, i - ind);
            st.pop();
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {6, 0, 8, 2, 1, 5};
    cout << maxWidthRamp(nums) << endl; // Output: 4
    return 0;
}