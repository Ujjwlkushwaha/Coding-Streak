#include <bits/stdc++.h>
using namespace std;

// count subArray  for given sum ( brute force approach )
int countSubarraySum(int arr[], int n, int sum)
{
    int i = 0;
    int count = 0;

    while (i < n)
    {
        int curr_sum = 0;
        int j = i;

        while (j < n)
        {
            curr_sum = curr_sum + arr[j];
            cout << curr_sum << endl;
            if (curr_sum == sum)
            {
                count++;
                break;
            }
            else
            {
                j++;
            }
        }

        i++;
    }

    return count;
}

// approach 2
int subArraySum(vector<int> &arr, int tar)
{
    unordered_map<int, int> mp;

    int count = 0;
    int curr_sum = 0;

    mp[0] = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        curr_sum += arr[i];
        if (mp.find(curr_sum - tar) != mp.end())
        {
            count += mp[curr_sum - tar];
        }
        mp[curr_sum]++;
    }
    return count;
}
int main()
{
    vector<int> arr = {10, 2, -2, -20, 10};
    int sum = -10;
    // cout << "Count of subarrays with sum " << sum << " is " << countSubarraySum(arr, n, sum);

    cout << subArraySum(arr, sum) << endl;

    return 0;
}