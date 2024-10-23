
/*
        You are given an array nums of n integers and two integers k and x.

            The x-sum of an array is calculated by the following procedure:

            Count the occurrences of all elements in the array.
            Keep only the occurrences of the top x most frequent elements. If two elements have the same number of occurrences, the element with the bigger value is considered more frequent.
            Calculate the sum of the resulting array.
            Note that if an array has less than x distinct elements, its x-sum is the sum of the array.

            Return an integer array answer of length n - k + 1 where answer[i] is the x-sum of the subarray nums[i..i + k - 1].

            A subarray is a contiguous non-empty sequence of elements within an array.
 */

#include<bits/stdc++.h>
using namespace std;

vector<int> getXSum(vector<int>& nums, int k, int x)
{
    unordered_map<int, int> freq;
    for(int num: nums){
        freq[num]++;
    }


    

    for(int i = 0; i < nums.size() - k + 1; i++){
        
    }

    return answer;
}


int main(){

    vector<int> nums = {1,1,2,2,3,4,2,3};
    int k = 6;
    int x = 2;

    vector<int> result = getXSum(nums, k, x);
    for(int num: result) cout << num << " ";
}