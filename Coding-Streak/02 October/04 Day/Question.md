# 2491. Divide Players Into Teams of Equal Skill

### Medium

You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player. Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.

The chemistry of a team is equal to the product of the skills of the players on that team.

Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.

    Example 1:

    Input: skill = [3,2,5,1,3,4]
    Output: 22

Explanation:
Divide the players into the following teams: (1, 5), (2, 4), (3, 3), where each team has a total skill of 6.
The sum of the chemistry of all the teams is: 1 _ 5 + 2 _ 4 + 3 \* 3 = 5 + 8 + 9 = 22.

Example 2:

    Input: skill = [3,4]
    Output: 12

Explanation:
The two players form a team with a total skill of 7.
The chemistry of the team is 3 \* 4 = 12.
   
    Example 3:

    Input: skill = [1,1,2,3]
    Output: -1

Explanation:
There is no way to divide the players into teams such that the total skill of each team is equal.





# Deletion and Reverse in Circular Linked List

### Difficulty: Medium

Given a Circular Linked List. The task is to delete the given node, key in the circular linked list, and reverse the circular linked list.

Note:

You don't have to print anything, just return the head of the modified list in each function.
Nodes may consist of Duplicate values.
The key may or may not be present.

    Examples:

    Input: Linked List: 2->5->7->8->10, key = 8
    Output: 10->7->5->2

Explanation: After deleting 8 from the given circular linked list, it has elements as 2, 5, 7, 10. Now, reversing this list will result in 10, 7, 5, 2 & the resultant list is also circular.


    Input: Linked List: 1->7->8->10, key = 8
    Output: 10->7->1

Explanation: After deleting 8 from the given circular linked list, it has elements as 1, 7,10. Now, reversing this list will result in 10, 7, 1 & the resultant list is also circular.


    Input: Linked List: 3->6->4->10, key = 9
    Output: 10->4->6->3
        
Explanation: As there no key present in the list, so simply reverse the list & the resultant list is also circular.

Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)

Constraints:
2 <= number of nodes, key <= 105
1 <= node -> data <= 105
