#include<bits/stdc++.h>
using namespace std;

// find the number of occurence ( gfg ) 
int numOccurrences(vector<int> arr , int key)
{
    auto lowerBound = lower_bound(arr.begin() , arr.end(), key);
    auto upperBound = upper_bound(arr.begin() , arr.end(), key);
        return upperBound - lowerBound; 
}

int main()
{
    vector<int> arr = {1, 2, 2, 3,3,3,3,3, 3, 3, 4, 4, 4, 4};
    int key = 1;
    cout << numOccurrences(arr, key) << endl;
    return 0;
}