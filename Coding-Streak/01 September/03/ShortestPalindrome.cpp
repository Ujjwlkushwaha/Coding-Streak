/*
    214. Shortest Palindrome
👺Hard


You are given a string s. You can convert s to a 
palindrome
 by adding characters in front of it.

Return the shortest palindrome you can find by performing this transformation.

 

Example 1:

Input: s = "aacecaaa"
Output: "aaacecaaa"
Example 2:

Input: s = "abcd"
Output: "dcbabcd"
 

Constraints:

0 <= s.length <= 5 * 104
s consists of lowercase English letters only.

 */

#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

string shortestPalindrome(string s) 
{
    // step 1 - create a string
    string copyStr = s;

    // step 2 - reverse the string
    reverse(copyStr.begin(), copyStr.end());

    // step 3 - 
    for ( int i = 0 ; i<s.length() ; i++)
    {

        // Hme bar baar last character ko hta ke matck krna hia ki palindrome mila ki nhi
        string tmp1 = s.substr(0 , s.length()-i);
        string tmp2 = copyStr.substr(i);


        if( tmp1.compare(tmp2) == 0 ){
            return copyStr.substr(0,i) + s;
        }
    }

    return "";
}

int main(){

    string str = "aabba";
    cout << shortestPalindrome(str) << endl;

    string str2 = "aacecaaa";
    cout << shortestPalindrome(str2) << endl;

    string str3 = "abcd";
    cout << shortestPalindrome(str3) << endl;
}

// 🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️🗡️ 

// Algorith for solving this problem

    /*
        step 1: create reverse string 

        step 2: traverse string 

            cut off the every single character from end of string 

            and cut off the first character of reverse string one by one

        step 3: match the remaining string is equal or not

            if it is equal so return kar do utna part jitne ko hta ke vo equal hua haii 

            📌📌note :: original string ke sath me add krke return krnaa
    
     */