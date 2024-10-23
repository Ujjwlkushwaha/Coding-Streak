#include<bits/stdc++.h>
using namespace std;

string allPermutations(int n , int k){

    //  printing all permutations
    int num = 0;
    for(int i=1 ; i<=n ; i++){
        num = num*10 + i;
    }

    string ans = to_string(num);
    int i = 1;
    while( i != k ){
        next_permutation(ans.begin(), ans.end());
        i++;
    }

    return ans;
}

int main()
{
  cout << "ans is :: " <<  allPermutations(3,3);
} 