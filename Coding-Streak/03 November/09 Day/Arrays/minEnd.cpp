#include<bits/stdc++.h>
using namespace std;

/*
    Given an array arr[] such that each element is in the range [0 - 9], find the minimum possible sum of two numbers formed using the elements of the array. All digits in the given array must be used to form the two numbers. Return a string without leading zeroes.

Examples :

    Input: arr[] = [6, 8, 4, 5, 2, 3]
    Output: 604

    Explanation: The minimum sum is formed by numbers 358 and 246
    
    .
    Input: arr[] = [5, 3, 0, 7, 4]
    Output: 82
    Explanation: The minimum sum is formed by numbers 35 and 047.

    Input: arr[] = [9, 4]
    Output: 13
    Explanation: The minimum sum is formed by numbers 9 and 4.


Constraints:
    1 ≤ arr.size() ≤ 106
    0 ≤ arr[i] ≤ 9

*/

string minSum(vector<int> &arr) {
        // code here   
        string n1 , n2;
        sort(arr.begin() , arr.end());
        for( int i=0 ; i<arr.size() ; i++)
        {
            if( i&1 ){
                n2 += to_string(arr[i]);
            }else{
                n1 += to_string(arr[i]);
            }
        }
        
        reverse(n1.begin() , n1.end());
        reverse(n2.begin() , n2.end());
        string ans;
        
        int i=0 , j=0;
        int carry = 0;
        while( i<n1.size() or j<n2.size())
        {
            int sum = 0;
            if(i<n1.size()) sum += n1[i++] - '0';
            if(j<n2.size()) sum += n2[j++] - '0';
            sum += carry;
            carry = sum / 10;
            sum %= 10;
            ans += to_string(sum);
        }
        
        ans += to_string(carry);
        while(ans.back() == '0')ans.pop_back();
        
        reverse(ans.begin() , ans.end());
        return ans;
    
    }
int main()
{

    vector<int> arr = {6, 8, 4, 5, 2, 3};
    cout <<  minSum(arr);
    
}