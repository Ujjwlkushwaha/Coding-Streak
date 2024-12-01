/*

✅ 1346. Check If N and Its Double Exist

    Given an array arr of integers, check if there exist two indices i and j such that :

    ✅  i != j
    ✅  0 <= i, j < arr.length
    ✅  arr[i] == 2 * arr[j]

*/

#include <bits/stdc++.h>
using namespace std;

// ✅ Solution
class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        unordered_map<int, int> map;

        // Count occurrences of each number
        for (int num : arr)
        {
            map[num]++;
        }

        for (int num : arr)
        {
            // Check for double
            if (num != 0 && map.find(2 * num) != map.end())
            {
                return true;
            }
            // Handle zero case (ensure there are at least two zeros)
            if (num == 0 && map[num] > 1)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    if( sol.checkIfExist(arr))
    {
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}