# SOLUTION

[Print Right View Of A Binary Tree](https://leetcode.com/problems/binary-tree-right-side-view/)

## Method-1 : level wise traversal


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

we traverse the tree in a level wise manner with a queue and when ```i == n-1``` i.e. the last element of the level
is reached we put it into the ans and when our queue is empty which implies we traversed the whole tree, we exit out and 
return the ans vector.
