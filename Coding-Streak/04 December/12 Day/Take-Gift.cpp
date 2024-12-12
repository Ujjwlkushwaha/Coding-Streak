#include<bits/stdc++.h>
using namespace std;

/*
    2558. Take Gifts From the Richest Pile

        You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

        Choose the pile with the maximum number of gifts.
        If there is more than one pile with the maximum number of gifts, choose any.
        Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
        Return the number of gifts remaining after k seconds.

Example 1:

        Input: gifts = [25,64,9,4,100], k = 4
        Output: 29

        Explanation: 
        The gifts are taken in the following way:
        - In the first second, the last pile is chosen and 10 gifts are left behind.
        - Then the second pile is chosen and 8 gifts are left behind.
        - After that the first pile is chosen and 5 gifts are left behind.
        - Finally, the last pile is chosen again and 3 gifts are left behind.
        The final remaining gifts are [5,8,9,4,3], so the total number of gifts remaining is 29.
*/

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();

        // Perform the operation k times
        for (int i = 0; i < k; i++) {
            // Initialize the index of the richest pile (maximum element)
            int richestPileIndex = 0;

            // Iterate through the array to find the index of the maximum
            // element
            for (int currentPileIndex = 0; currentPileIndex < n;
                 currentPileIndex++) {
                // If we find a new maximum, update the index
                if (gifts[richestPileIndex] < gifts[currentPileIndex]) {
                    richestPileIndex = currentPileIndex;
                }
            }

            // Replace the richest pile with the floor of its square root
            gifts[richestPileIndex] = sqrt(gifts[richestPileIndex]);
        }

        // Calculate the sum of the remaining gifts in the array
        long long int numberOfRemainingGifts =
            accumulate(gifts.begin(), gifts.end(), 0LL);

        return numberOfRemainingGifts;
    }
};

int main() {
    Solution solution;
    vector<int> gifts = {1, 2, 3, 4, 5};
    int k = 2;
    cout << solution.pickGifts(gifts, k) << endl; // Output: 9
    return 0;
}