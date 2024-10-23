#include <bits/stdc++.h>
using namespace std;

// void minAddToMakeValid(string s)
// {
//     stack<int> st;

//     for( char c : s)
//     {
//         if( c == '('){
//             st.push(c);
//         }
//         else if( c == ')' and st.top() == '('){
//             st.pop();
//         }else{
//             st.push(c);
//         }
//     }
//     cout << st.size() << endl; // Prints the minimum number of additions to make the string valid parentheses. 2 in this case.
// }

int minAddToMakeValid(string s)
{
    

      stack<char> st;

        for (int i=0 ; i<s.length() ; i++)
        {
            if (s[i] == '(') {
                st.push(s[i]);
            } 
            else if( s[i] == ')'){
                if(!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
            else {
                st.push(s[i]);
            }
        }
        return st.size();
}

int main()
{

    string s = ")))";
    cout << minAddToMakeValid(s); // Output: 2
}