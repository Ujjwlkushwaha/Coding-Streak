#include <bits/stdc++.h>
using namespace std;

// Split the Array

int countgroup(vector<int> &arr)
{
    // Complete the function
    int mod = 1e9;
    int xr = 0;
    int n = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        xr ^= arr[i];
    }
    if (xr != 0)
        return 0;
    int ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        ans = (ans * 2) % mod;
    }
    return ans - 1;
}
int main() {

    vector<int> arr = {1, 2, 3};
    cout << countgroup(arr);
}