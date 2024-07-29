# SOLUTION

[Length of longest valid substring](https://leetcode.com/problems/longest-valid-parenthese/)

## Method-1 : using a stack

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

if we reach an opening bracket we push it's index into the stack and when we reach
a closing bracket then if top is 1 it implies the closing bracket has dominated the
opening bracket, then we set top to index of closing bracket.
