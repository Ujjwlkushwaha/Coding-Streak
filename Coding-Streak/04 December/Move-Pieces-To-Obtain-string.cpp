#include<iostream>
#include<string> 
using namespace std;

/*
    ✅ 2337. Move Pieces to Obtain a String

    You are given two strings start and target, both of length n. Each string consists only of the characters 'L', 'R', and '_' where:

        The characters 'L' and 'R' represent pieces, where a piece 'L' can move to the left only if there is a blank space directly 
        to its left, and a piece 'R' can move to the right only if there is a blank space directly to its right.
        
        The character '_' represents a blank space that can be occupied by any of the 'L' or 'R' pieces.
        
        Return true if it is possible to obtain the string target by moving the pieces of the string start any number of times. Otherwise, return false.

        Example 1:

        Input: start = "_L__R__R_", target = "L______RR"
        Output: true
    
        Explanation: We can obtain the string target from start by doing the following moves:
        - Move the first piece one step to the left, start becomes equal to "L___R__R_".
        - Move the last piece one step to the right, start becomes equal to "L___R___R".
        - Move the second piece three steps to the right, start becomes equal to "L______RR".
        Since it is possible to get the string target from start, we return true.
 */

class Solution {
public:
    bool canChange(string start, string target) {

        int i = 0 , j = 0;
        int n = start.size();

        while( i<n or j<n)
        {
            // ignoring white spaces 
            while( i<n and start.at(i) == '_') i++;
            while( j<n and target.at(j) == '_') j++;

            // count of char is same if both strings ends at same time
            if( i == n or j==n ) return ( i ==n and j==n );

            // check false scenarios
            if( start.at(i) != target.at(j) or 
            (start.at(i)== 'L' and j>i) or
            (start.at(i) == 'R' and j<i)){
                return false;
            }
            i++;
            j++;
        } 

        return true;
    }
};
int main()
{
    Solution s;
    cout<<s.canChange("_L__R__R_", "L______RR")<<endl; // Output: true
    return 0;
}