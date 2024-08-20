# SOLUTION

[Kth Smallest Element In A BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

## Method-1 : inorder traversal

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

the inorder traversal of a BST provides the elements in an increasing order so we traverse inorder and create and ans vector
then we return the k-1th element of that array.
