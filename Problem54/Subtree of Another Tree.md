# SOLUTION

[Subtree Of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)

## Method-1 : DFS


### Complexity : Time Complexity : O(n<sup>2</sup>) and space Complexity : O(n)

we create a function that checks if two roots represent the same tree then we traverse the original tree in a dfs manner and if
we find the same subtree we return true otherwise we return the OR of the same function on the left and right child of the 
tree.
