
# 1593. Split a String Into the Max Number of Unique Substrings
## Medium
Solved

Given a string s, return the maximum number of unique substrings that the given string can be split into.

You can split string s into any list of non-empty substrings, where the concatenation of the substrings forms the original string. However, you must split the substrings such that all of them are unique.

A substring is a contiguous sequence of characters within a string.

 

    Example 1:

    Input: s = "ababccc"
    Output: 5
Explanation: One way to split maximally is ['a', 'b', 'ab', 'c', 'cc']. Splitting like ['a', 'b', 'a', 'b', 'c', 'cc'] is not valid as you have 'a' and 'b' multiple times.
    
    Example 2:

    Input: s = "aba"
    Output: 2
Explanation: One way to split maximally is ['a', 'ba'].

    Example 3:

    Input: s = "aa"
    Output: 1
Explanation: It is impossible to split the string any further.
 



# Split the Array

### Difficulty: Easy

Given an array arr[] of integers, the task is to count the number of ways to split given array elements into two non-empty subsets such that the XOR of elements of each group is equal. Each element should belong to exactly one subset.
Note:

The answer could be very large so print it by doing modulo with 109 + 7. 
Subsets with the same elements but derived from different indices are different.
Examples:

    Input : arr[] = [1, 2, 3]
    Output : 3
Explanation: {(1),(2, 3)}, {(2),(1, 3)}, {(3),(1, 2)} are three ways with equal XOR value of two groups.
   
    Input : arr[] = [5, 2, 3, 2]
    Output : 0
Explanation: No way to split into  two groups whose XOR is equal.

    Input : arr[] = [2, 2, 2, 2]
    Output : 7
    
Explanation: There are 7 ways to split the array into two groups with equal XOR, such that there are multiple combinations of {(2), (2,2,2)},{(2,2),(2,2)}.
Constraints:
1<=arr.size()<=106
1<=arr[i]<=106






