#include <bits/stdc++.h>
using namespace std;

/*
    👍 1957. Delete Characters to Make Fancy String
    Easy


A fancy string is a string where no three consecutive characters are equal.

Given a string s, delete the minimum possible number of characters from s to make it fancy.

Return the final string after the deletion. It can be shown that the answer will always be unique.



Example 1:

    Input: s = "leeetcode"
    Output: "leetcode"

Explanation:
Remove an 'e' from the first group of 'e's to create "leetcode".
No three consecutive characters are equal, so return "leetcode".

Example 2:

    Input: s = "aaabaaaa"
    Output: "aabaa"

Explanation:
Remove an 'a' from the first group of 'a's to create "aabaaaa".
Remove two 'a's from the second group of 'a's to create "aabaa".
No three consecutive characters are equal, so return "aabaa".

Example 3:

    Input: s = "aab"
    Output: "aab"

Explanation: No three consecutive characters are equal, so return "aab".

*/

string makeFancyString(string s)
{
    string result;
    for (char c : s)
    {
        int n = result.size();
        if (n < 2 || !(result[n - 1] == c && result[n - 2] == c))
        {
            result += c;
        }
    }
    return result;
}

int main()
{
    string s1 = "aaabaaaa";
    cout << makeFancyString(s1) << endl; // Output: leetcode
}