# SOLUTION

[Check Mirror In An N-ary Tree](https://leetcode.com/problems/symmetric-tree/)

## Method-1 : using recursion

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

we use a helper function to find the answer which takes two nodes as input.
if both nodes are null then return true, if only one is null then return false, and if none are null then recursively call
the function for the right and the left child.
