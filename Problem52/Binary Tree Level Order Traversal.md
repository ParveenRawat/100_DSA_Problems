# SOLUTION

[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)

## Method-1 : BFS

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

If root is null we return ans empty vector of vectors as the ans.
first we start with an empty queue of TreeNodes then insert out root into it and while the queue is not empty
we loop into the queue and push the current node's childs into it and push the current node's value into a vector
at the end of the loop we push the vector into our ans vector and then return it when queue is empty
