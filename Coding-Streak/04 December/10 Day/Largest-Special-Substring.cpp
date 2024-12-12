/*
    ✅ 2981. Find Longest Special Substring That Occurs Thrice I

        You are given a string s that consists of lowercase English letters.

        A string is called special if it is made up of only a single character. For example, the string "abc" is not special, whereas the strings "ddd", "zz", and "f" are special.

        Return the length of the longest special substring of s which occurs at least thrice, or -1 if no special substring occurs at least thrice.

        A substring is a contiguous non-empty sequence of characters within a string.

 

Example 1:

        Input: s = "aaaa"
        Output: 2

        Explanation: The longest special substring which occurs thrice is "aa": substrings "aaaa", "aaaa", and "aaaa".
        It can be shown that the maximum length achievable is 2.

Example 2:

        Input: s = "abcdef"
        Output: -1

        Explanation: There exists no special substring which occurs at least thrice. Hence return -1.

Example 3:

        Input: s = "abcaba"
        Output: 1

        Explanation: The longest special substring which occurs thrice is "a": substrings "abcaba", "abcaba", and "abcaba".
        It can be shown that the maximum length achievable is 1.
    
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(string s) {
        // Create a map of strings to store the count of all substrings.
        map<string, int> count;
        for (int start = 0; start < s.length(); start++) {
            string currString;
            for (int end = start; end < s.length(); end++) {
                // If the string is empty, or the current character is equal to
                // the previously added character, then add it to the map.
                // Otherwise, break the iteration.
                if (currString.empty() or currString.back() == s[end]) {
                    currString.push_back(s[end]);
                    count[currString]++;
                } else {
                    break;
                }
            }
        }

        // Create a variable ans to store the longest length of substring with
        // frequency atleast 3.
        int ans = 0;
        for (auto i : count) {
            string str = i.first;
            if (i.second >= 3 && str.length() > ans) ans = str.length();
        }
        if (ans == 0) return -1;
        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.maximumLength("aaaa") << endl; // Output: 2
    cout << sol.maximumLength("abcdef") << endl; // Output: -1
    cout << sol.maximumLength("abcaba") << endl; // Output: 1       
    
}