# SOLUTION

[Invert Flip Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

## Method-1 : BFS

### Complexity : Time Complexity : O(2<sup>n</sup>) and space Complexity : O(n) , n = depth

we invert the tree from bottom up, we traverse to the leafs and then we switch the sub trees to invert the tree and finally
return the root.
