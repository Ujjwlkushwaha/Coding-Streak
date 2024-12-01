#include <bits/stdc++.h>
using namespace std;

/*
    Given an array arr[ ];
    your task is to find the minimum number of increment operations required to make all the elements of the array unique. i.e.- no value in the array should occur more than once. In one operation, a value can be incremented by 1 only.
*/

// 👺 TLE maar gya

// int minIncrements(vector<int> &arr)
// {
//     // Code here
//     sort(arr.begin(), arr.end());
//     int max = INT_MIN;

//     unordered_map<int, int> occurence;
//     int i = 0;
//     int j = i+1;
//     int inc = 0 ;

//     for( int i = 0; i < arr.size();i++)
//     {
//         occurence[arr[i]]++;
//     }

//     while(i<j and i<arr.size() and j < arr.size()){
//         if( arr[i] != arr[j] )
//         {
//             i++;
//             j++;
//         }else{
//             arr[j]++;
//             inc++;
//             while( occurence.find(arr[j]) != occurence.end())
//             {
//                 arr[j]++;
//                 inc++;

//             }
//             occurence[arr[j]]++;
//             sort(arr.begin(), arr.end());
//         }
//     }

//     return inc;
// }

int minIncrements(vector<int> &arr)
{
    // Code here
    sort(arr.begin(), arr.end());
    unordered_set<int> st;
    int sum = 0 , maxi = 0;

    for( int i = 0; i < arr.size(); i++ )
    {
        maxi = max(maxi , arr[i]);
        if( st.find(arr[i]) != st.end() )
        {
            maxi++;
            sum += maxi-arr[i];
            st.insert(maxi);
        }else{
            st.insert(arr[i]);
        }
    }

    return sum;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3};
    cout << minIncrements(arr) << endl; // Output: 4
    return 0;
}

/*
    # Make array elements unique

    Given an array arr[ ], 
    your task is to find the minimum number of increment operations required to make all the elements of the array unique. i.e.-
     no value in the array should occur more than once. In one operation, a value can be incremented by 1 only.

Examples :

    Input: arr[] = [1, 2, 2]
    Output: 1

Explanation: If we increase arr[2] by 1 then the resulting array becomes {1, 2, 3} and has all unique values.Hence, the answer is 1 in this case.

    Input: arr[] = [1, 1, 2, 3]
    Output: 3
Explanation: If we increase arr[0] by 3, then all array elements will be unique. Hence, the answer is 3 in this case.

    Input: arr[] = [5, 4, 3, 2, 1]
    Output: 0
Explanation: All elements are unique.
*/