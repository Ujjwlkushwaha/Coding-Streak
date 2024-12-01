/*
    # we have given a string 's' and a character 'x' 
    Return the maximum difference between anyy two occurrences of x in the string s;

    the distance between two occurrences of a character is defined as the toatal number of distinct characters
    between them including whitespaces and the character x itself.

    Return -1 if x does not exist in the string s or occurs only once;
*/

#include<bits/stdc++.h>
using namespace std;

void maxDistance(string s, char x){

    vector<int> occurrences;
    int max_diff = -1;
    // storing the occurrences of x with index
    for(int i = 0; i<s.length(); i++){
        if(s[i] == x)
            occurrences.push_back(i);
    }
    
    // if x does not exist or occurs only once
    if(occurrences.size() < 2){
        cout << -1;
        return;
    }
    
   // find first occurrence of x and last occurrence of x   
    int first_occurrence = occurrences[0];
    int last_occurrence = occurrences[occurrences.size() - 1];
    
    // calculate the maximum difference
    max_diff = max(max_diff, last_occurrence - first_occurrence);
    
    // calculate the x-sum for each subarray
    for(int i = 1; i<occurrences.size(); i++){
        max_diff = max(max_diff, occurrences[i] - occurrences[i-1]);
    }
    
    cout << max_diff-1;
    

}
int main(){

    string s = "haryana";
    char x = 'a';
    maxDistance(s, x);
    return 0;
 
}