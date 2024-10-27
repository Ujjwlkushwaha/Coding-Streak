//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// vector<int> AlternateSort(vector<int> &arr)
// {
//     // Your code goes here

//     // Sorting the array in descending order
//     sort(arr.begin(), arr.end(), greater<int>());
//     vector<int> greater = arr;
//     sort(arr.begin(), arr.end());
//     vector<int> smaller = arr;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (i % 2 == 0)
//             arr[i] = greater[i / 2];
//         else
//             arr[i] = smaller[i / 2];
//     }

//     return arr;
// }

vector<string> removeSubfolders(vector<string> &folder)
{
    // Sort the folders alphabetically
    sort(folder.begin(), folder.end());

    // Initialize the result vector and add the first folder
    vector<string> result;
    result.push_back(folder[0]);

    // Iterate through each folder and check if it's a sub-folder of the
    // last added folder in the result
    for (int i = 1; i < folder.size(); i++)
    {
        string lastFolder = result.back();
        lastFolder += '/';

        // Check if the current folder starts with the last added folder
        // path
        if (folder[i].compare(0, lastFolder.size(), lastFolder) != 0)
        {
            result.push_back(folder[i]);
        }
    }

    // Return the result containing only non-sub-folders
    // return result;
    return result;
}

int main()
{

    vector<string> arr = {"/a","/a/b","/c/d","/c/d/e","/c/f"};
    vector<string> sortedArr = removeSubfolders(arr);
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < sortedArr.size(); i++)
        cout << sortedArr[i] << " ";
}