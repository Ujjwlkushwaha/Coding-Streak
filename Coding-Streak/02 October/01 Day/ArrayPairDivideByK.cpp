#include <bits/stdc++.h>
using namespace std;

/*
    1. Yaha ak array given hai and ak 'k' variable given hai
    2. Hme array ko n/2 part me todna hai and unn elements ke pair bnane hai
    3. But vo saare pair 'k' se divisible hone chahiye.

        for example:
                Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5
                Output: true
                Explanation: Pairs are (1,9) = 10
                                            ,(2,8) = 10
                                            ,(3,7) = 10
                                            ,(4,6) = 10
                                             (5,10) = 15 

                and ye saare number 'k' se divisible haii
    4. Agar pair bn sakte hai to true return krna hai otherwise false return krna hai

 */
bool canArrange(vector<int> &arr, int k)
{
    vector<int> remainder_count(k, 0); // To store frequency of remainders

    // Calculate remainder counts
    for (int num : arr)
    {
        int remainder = ((num % k) + k) % k;
        remainder_count[remainder]++;
    }
    // Check if the pair conditions are met
    if (remainder_count[0] % 2 != 0)
        return false; // Remainders 0 must form pairs among themselves

    for (int i = 1; i < (k / 2) + 1; i++)
    {
        // Remainder i must have equal count to remainder k-i
        if (remainder_count[i] != remainder_count[k - i])
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 5;
    if (canArrange(arr, k))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False." << endl;
    }
}
