#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr ={7, 3, 9, 1};
    int n = arr.size();
    int k = 9;

    queue<int>q;
    for( int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }

    arr.clear();

    int c = 1;
    while( !q.empty() and c<=k)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        c++;
    }

    cout << endl;
    // printing queue
    while(!q.empty())
    {
        arr.push_back(q.front());
        q.pop();
    }

    for( auto i:arr)
    {
        cout << i << " ";
    }
}