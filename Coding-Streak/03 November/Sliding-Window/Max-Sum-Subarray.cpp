#include<bits/stdc++.h>
using namespace std;

int maxmimSumSubarray(vector<int>arr , int k)
{
    int n = arr.size();
    if( k > arr.size())return 0;

    int max_sum = INT_MIN;
    for( int i = 0; i < n-k+1; i++)
    {
        cout << "Calculating for :: " << arr[i] << endl;
        int curr_sum = 0 ;
        // store distinct values
        unordered_set<int> s;
        for( int j = 0 ; j < k ; j++)
        {
            if( s.find(arr[i+j]) == s.end())
            {
                cout << "Adding to set :: " << arr[i+j] << endl;
                s.insert(arr[i+j]);
                curr_sum += arr[i+j];
                cout << "Current sum :: " << curr_sum << endl;
            }else{
                cout << "Found Duplicate "<< endl;
                break;
            }
        }
        if( s.size() == k)
        {
            cout << "Found a Sum for :: " << arr[i] << " with sum :: " << curr_sum << endl;

            // Update max_sum
            max_sum = max(max_sum, curr_sum);
        }
    }

    return max_sum;
}
int main()
{

    vector<int> arr  = {3};
    int k = 1;
    cout << maxmimSumSubarray(arr, k) << endl; // Output: 20
    return 0;

}