# SOLUTION

[Construct Binary Tree From Preorder And Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

## Method-1 : Using properties of preorder and inorder traversal and map

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

the first element of the preorder traversal is root and next part are right and left subtree so we get the root from
the preorder traversal and then we find its index using a map and all element in inorder traversal left to that index
are part of right subtree and others are part of left subtree we use this to construct the binary tree.
