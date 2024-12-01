#include<bits/stdc++.h>
using namespace std;

//✅ find first non-repeating character
char findChar( string str )
{
    // step : 1
    int count[26] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        count[str[i]-'a']++;
    }

    // step : 2
    for(int i = 0; i < str.length(); i++)
    {
        if(count[str[i]-'a'] == 1)
            return str[i];
    }
    return '$';
}
int main()
{
    string str = "geeksforgeeks";
    cout << "First non-repeating character is: " << findChar(str) << endl;
    return 0;

}