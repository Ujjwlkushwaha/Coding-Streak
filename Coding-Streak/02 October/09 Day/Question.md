# 921. Minimum Add to Make Parentheses Valid
Medium

A parentheses string is valid if and only if:

It is the empty string,
It can be written as AB (A concatenated with B), where A and B are valid strings, or

It can be written as (A), where A is a valid string.
You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.

For example, 

if s = "()))", 

you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
Return the minimum number of moves required to make s valid.

 

Example 1:

        Input: s = "())"
        Output: 1

Example 2:

Input: s = "((("
Output: 3
 


# Linked List Matrix

Difficulty: EasyAccuracy: 67.33%Submissions: 27K+Points: 2

Given a Matrix mat of n*n size. Your task is constructing a 2D linked list representation of the given matrix.

Input: mat = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]


