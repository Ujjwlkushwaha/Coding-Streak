#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int k, vector<int> &arr)
{
    // code here
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int s = arr[0];
    int m = arr[n - 1];

    int minDiff = m - s;
    cout << minDiff << endl;

    if (( m - (s+k)) < minDiff)
    {
        minDiff = m - (s+k);
        cout << minDiff << endl;
    }

    if (((m - k) - s) < minDiff)
    {
        minDiff = ( m-k) - s;
        cout << minDiff << endl;
    }

    if (((m-k) - (s+k)) < minDiff)
    {
        minDiff = (m- k) - (s+k);
        cout << minDiff << endl;
    }

    return minDiff;
}
int main()
{
    vector<int> arr = {3, 9, 12, 16, 20};
    int k = 3;
    cout << getMinDiff(k, arr) << endl; // Output: 3
    return 0;
}