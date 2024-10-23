# Solution ::

## Approach 1: Two Pointer
### Intuition

Our job is to move all the white balls to the front of the string. Each move forward requires one swap. The number of swaps needed for a white ball equals the gap between its current and final positions. Once the white balls are in place, the black balls will naturally move to the back.

To find out where each white ball should go, we use a pointer, whitePosition. When we find a white ball, we calculate how many swaps it needs to reach the position marked by whitePosition. After calculating, we update whitePosition to the next available spot.

We track the total number of swaps with a counter, totalSwaps. For each white ball, we add its swaps to the counter. This approach counts all the necessary moves without physically making them.

By the end, totalSwaps will hold the minimum number of swaps required to move the white balls to the front.

The algorithm is visualized in the slideshow below:

### Algorithm
    1. Initialize variables:
        . whitePosition to 0. This represents the next available position for a white ball.
        . totalSwaps to 0 to keep track of the total number of swaps required.

    2. Iterate over each character in the string s:
        If the character is 0 (a white ball):
            . Calculate the number of swaps needed by subtracting whitePosition from the current position. Add it to totalSwaps.
            . Increment whitePosition by 1 to mark the next available position for a white ball.

    3. After the loop ends, return the value of totalSwaps.

```
    class Solution {
    public:
    long long minimumSteps(string s) {
        int whitePosition = 0;
        long long totalSwaps = 0;

        // Iterate through each ball (character) in the string
        for (int currentPos = 0; currentPos < s.length(); currentPos++) {
            if (s[currentPos] == '0') {
                // Calculate the number of swaps needed
                // to move it to the leftmost available position
                totalSwaps += currentPos - whitePosition;

                // Move the next available position for a white ball one step to
                // the right
                whitePosition++;
            }
        }

        return totalSwaps;
    }
};
```