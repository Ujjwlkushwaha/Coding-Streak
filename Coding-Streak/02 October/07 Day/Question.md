
# 2696. Minimum String Length After Removing Substrings


You are given a string s consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings "AB" or "CD" from s.

Return the minimum possible length of the resulting string that you can obtain.

Note that the string concatenates after removing the substring and could produce new "AB" or "CD" substrings.

 

## Example 1:

Input: s = "ABFCACDB"
Output: 2

## Explanation:
        We can do the following operations:
        - Remove the substring "ABFCACDB", so s = "FCACDB".
        - Remove the substring "FCACDB", so s = "FCAB".
        - Remove the substring "FCAB", so s = "FC".
        So the resulting length of the string is 2.
        It can be shown that it is the minimum length that we can obtain.

### Example 2:

    Input: s = "ACBBD"
    Output: 5

    Explanation: We cannot do any operations on the string so the length remains the same.



## XOR Linked List
Difficulty: MediumAccuracy: 58.15%Submissions: 17K+Points: 4

An ordinary Doubly Linked List requires space for two address fields to store the addresses of previous and next nodes. A memory-efficient version of the Doubly Linked List can be created using only one space for the address field with every node. This memory-efficient Doubly Linked List is called XOR Linked List or Memory Efficient as the list uses bit-wise XOR operation to save space for one address.

Given a stream of data of size N for the linked list, your task is to complete the function insert() and getList(). The insert() function pushes (or inserts at the beginning) the given data in the linked list and the getList()  function returns the linked list as a list.

Note:

A utility function XOR() takes two Node pointers to get the bit-wise XOR of the two Node pointers. Use this function to get the XOR of the two pointers.
The driver code prints the returned list twice, once forward and once backwards.
Examples:

Input:
LinkedList: 9<->5<->4<->7<->3<->10

Output:
10 3 7 4 5 9
9 5 4 7 3 10
Input:
LinkedList: 58<->96<->31

Output:
31 96 58
58 96 31
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)