#include <bits/stdc++.h>
using namespace std;

void reArrengeTheArray(vector<int> &arr)
{
    int i = 0;
    int j = i + 1;

    while (i < arr.size() && j < arr.size())
    {
        if (arr[i] == 0 && arr[j] != 0)
        {
            swap(arr[i++], arr[j++]);
        }
        else if (arr[i] == 0 && arr[j] == 0)
        {
            j++;
        }
    }
}
vector<int> modifyAndRearrangeArray(vector<int> &arr)
{
    int n = arr.size();

    // Step 1: Modify the array by doubling equal adjacent valid elements and replacing the next element with 0.
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != 0 && arr[i] == arr[i + 1])
        {
            arr[i] *= 2;    // Double the current element
            arr[i + 1] = 0; // Set the next element to 0
        }
    }

    // Step 2: Move all non-zero elements to the front of the array.
    vector<int> result;   // To store non-zero elements
    int count_zeroes = 0; // To count the number of zeros

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            result.push_back(arr[i]); // Add non-zero element to result
        }
        else
        {
            count_zeroes++; // Count zeros
        }
    }

    // Append the required number of zeros at the end.
    while (count_zeroes--)
    {
        result.push_back(0);
    }

    return result;
    
}

int main()
{
    vector<int> arr = {2, 2, 0, 4, 0, 8};

    vector<int> result = modifyAndRearrangeArray(arr);

    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    return 0;
}