/*
    ✅ Search Pattern (KMP-Algorithm) ⭐⭐ imp
    Difficulty: Medium

    1. Given two strings, one is a text string txt and the other is a pattern string pat.
    2. The task is to print the indexes of all the occurrences of the pattern string in the text string.
    3. Use 0-based indexing while returning the indices.

    ✅ Note: Return an empty list in case of no occurrences of pattern.

Examples :

    Input: txt = "abcab", pat = "ab"
    Output: [0, 3]
    Explanation: The string "ab" occurs twice in txt, one starts at index 0 and the other at index 3.

    Input: txt = "abesdu", pat = "edu"
    Output: []
    Explanation: There's no substring "edu" present in txt.

    Input: txt = "aabaacaadaabaaba", pat = "aaba"
    Output: [0, 9, 12]
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> computeLPSArray(const string &pat)
    {
        int m = pat.size();
        vector<int> lps(m, 0);
        int len = 0; // Length of the previous longest prefix suffix
        int i = 1;

        while (i < m)
        {
            if (pat[i] == pat[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                {
                    len = lps[len - 1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    vector<int> search(string &pat, string &txt)
    {
        // code here
        int n = txt.size();
        int m = pat.size();
        vector<int> lps = computeLPSArray(pat);
        vector<int> result;

        int i = 0; // Index for txt
        int j = 0; // Index for pat

        while (i < n)
        {
            if (txt[i] == pat[j])
            {
                i++;
                j++;
            }

            if (j == m)
            {
                result.push_back(i - j); // Found a match
                j = lps[j - 1];
            }
            else if (i < n && txt[i] != pat[j])
            {
                if (j != 0)
                {
                    j = lps[j - 1];
                }
                else
                {
                    i++;
                }
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else
        {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}