# SOLUTION

[Check if given paraentheses expression is balanced or not](https://leetcode.com/problems/valid-parantheses/)

## Method-1 : using a stack 

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

we create a stack and then loop through the string if the character is an opening brakcet then we push it into the stack if 
the character is closing bracket and the top of the stack isn't a opening bracket then the stack will be unbalanced and
we return false and each time we pop a character finally we check if the stack if empty or not as and empty string is a 
balanced string while an unbalanced string will produce and non empty final stack.
