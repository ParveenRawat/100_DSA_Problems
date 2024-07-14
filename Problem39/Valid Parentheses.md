# SOLUTION

[Valid Parenthesis](https://leetcode.com/problems/valid-parenthesis/)

## Method-1 : using a stack  


### Complexity : Time Complexity : O(n) and space Complexity : O(1)

we use a stack to keep track of balance of parenthesis we process all the parenthesis and if at end the stack is not 
empty then the initial string was not balanced thus we return false else true.
