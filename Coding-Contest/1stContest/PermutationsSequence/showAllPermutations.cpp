#include<bits/stdc++.h>
using namespace std;

void allPermutations(string s){

    //  printing all permutations
    do{
        cout << s << endl;
    }while(next_permutation(s.begin() , s.end()));
}

int main()
{
    string s = "123";
    allPermutations(s);
}