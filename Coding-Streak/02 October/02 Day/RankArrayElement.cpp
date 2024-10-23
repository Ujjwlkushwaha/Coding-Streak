#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> arr = {37,12,28,9,100,56,80,5,12};

    vector<pair<int , int >> copy ;
    for(int i = 0; i < arr.size(); i++)
    {
        copy.push_back({arr[i], i});
    }

    sort(copy.begin(), copy.end());

    vector<int> ans(copy.size());
    int rank = 0;
    int pre = INT_MAX; 

     for(int i = 0; i < copy.size(); i++){
        cout << copy[i].first << " " << copy[i].second << endl;

        if( pre == copy[i].first) {
            ans[copy[i].second] = rank;
        }
        else {
            rank++;
            ans[copy[i].second] = rank;
            pre = copy[i].first;
        }
    }

    cout << "Rank of elements in the given array: " << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << arr[i] << " -> " << ans[i] << endl;
    }
}