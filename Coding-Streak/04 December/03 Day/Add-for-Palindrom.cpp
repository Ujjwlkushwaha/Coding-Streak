#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minChar(string &s)
    {
        // Write your code here
        string rev = s;
        reverse(rev.begin(), rev.end());

        string pat = s + '|' + rev;
        int k = pat.size();

        //⭐  kmp algorithm
        vector<int> lps(k, 0);
        for (int i = 1, len = 0; i < k;)
        {
            if (pat[i] == pat[len])
            {
                lps[i++] = ++len;
            }
            else if (len)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i++] = 0;
            }
        }

        return s.size() - lps[k - 1];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}