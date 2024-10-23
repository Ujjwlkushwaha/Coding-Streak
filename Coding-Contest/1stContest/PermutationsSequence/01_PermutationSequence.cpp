#include <bits/stdc++.h>
using namespace std;

// permutations
void permutation(vector<int> &arr, vector<vector<int>> &ans, int index){
  if(index == arr.size()){
    ans.push_back(arr);
    return;
  }

  for(int i = index ; i<arr.size() ; i++){
    swap(arr[i] , arr[index]);
    permutation(arr, ans, index+1);
    swap(arr[i] , arr[index]);
  }
}

void getPermutation(int n, int k)
{

  vector<int> arr;
  for(int i=1;i<=n;i++){
    arr.push_back(i);
  }

  vector<vector<int>> ans;
  permutation(arr,ans,0);

  for(int i=0 ; i<ans.size() ; i++){
    for(int j = 0 ; j < ans[i].size() ; j++){
      cout<<ans[i][j]<<" ";
    }
    cout << endl;
  }

  int finalAns = 0;

  for(int i=0 ; i<ans[k].size() ; i++){
    finalAns = finalAns * 10 + ans[k-1][i];
  }

  cout << finalAns << endl;

}

int main() {

  getPermutation(4, 9 );
  
}