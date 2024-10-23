#  ⭐ 1497. Check If Array Pairs Are Divisible by k

📌 Medium

    . Given an array of integers arr of even length n and an integer k.

    . We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.

    👉 Return true If you can find a way to do that or false otherwise.

 

        Example 1:

            Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5
            Output: true
            Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).

        Example 2:

            Input: arr = [1,2,3,4,5,6], k = 7
            Output: true
            Explanation: Pairs are (1,6),(2,5) and(3,4).

        Example 3:

            Input: arr = [1,2,3,4,5,6], k = 10
            Output: false
            Explanation: You can try all possible pairs to see that there is no way to divide arr into 3 pairs each with sum divisible by 10.
 

## Solution

 '''
                class Solution {
        public:
            bool canArrange(vector<int>& arr, int k) {
                vector<int> remainder_count(k, 0); // To store frequency of remainders

                // Calculate remainder counts
                for (int num: arr) {
                    int remainder = ((num % k) + k) % k;
                    remainder_count[remainder]++;
                }
                // Check if the pair conditions are met
                if (remainder_count[0] % 2 != 0) return false; // Remainders 0 must form pairs among themselves

                
                for (int i=1; i< (k/2)+1; i++) {
                    // Remainder i must have equal count to remainder k-i
                    if( remainder_count[i] != remainder_count[k-i] ) return false;
                }
            return true;
            }
        };
'''