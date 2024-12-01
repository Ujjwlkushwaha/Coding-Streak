#include <bits/stdc++.h>
using namespace std;

int countPairsWithDiffK(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> freq;

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if(freq[arr[i] - k] > 0) count += freq[arr[i] - k];
        if(freq[arr[i] + k] > 0) count += freq[arr[i] + k];
    }
    return count;
}
int main()
{
    vector<int> arr = {8, 12, 16, 4, 0, 20};
    int k = 4;
    cout << "Number of pairs with difference " << k << ": "
         << countPairsWithDiffK(arr, k) << endl;

}