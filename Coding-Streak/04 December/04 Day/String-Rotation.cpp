#include <bits/stdc++.h>
using namespace std;

//✅ TLE maar gyaaa

// bool areRotations(string &s1, string &s2){

//     if (s2.length() != s1.length())
//         return false;

//     int len2 = s2.length();

//     while( len2 )
//     {
//         cout << s1 << " " << s2 << endl;
//         if( s1.compare(s2) == 0 )
//         {
//             return true;
//         }

//         char lastChar = s2[s2.length() - 1];
//         s2.pop_back();
//         s2.insert(0, 1, lastChar);
//         len2--;
//     }

//     return false;
// }

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> buildLPS(const string &pattern)
    {
        int n = pattern.size();
        vector<int> lps(n, 0);
        int len = 0; // length of the previous longest prefix suffix
        int i = 1;

        while (i < n)
        {
            if (pattern[i] == pattern[len])
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
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2)
    {
        if (s1.length() != s2.length())
            return false;

        // Concatenate s1 with itself
        string temp = s1 + s1;

        // Use KMP to check if s2 is a substring of temp
        vector<int> lps = buildLPS(s2);
        int i = 0; // index for temp
        int j = 0; // index for s2
        while (i < temp.size())
        {
            if (temp[i] == s2[j])
            {
                i++;
                j++;
            }

            if (j == s2.size())
            {
                return true; // Found s2 as a substring
            }
            else if (i < temp.size() && temp[i] != s2[j])
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

        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}