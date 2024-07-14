# SOLUTION

[Delete Last Occurence Of An Item From A Linked List](https://leetcode.com/problems/delete-last-occurence-of-an-item-from-a-linked-list/)

## Method-1 : using recursion 


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

We use recursion to traverse the linked list from the end. if we find the last node with value equal to the given 
input we remove it from the linked list and set a flag to not remove any other node with the input value.
