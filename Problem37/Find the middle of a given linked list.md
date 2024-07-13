# SOLUTION

[Find The Middle Of A Given Linked List](https://leetcode.com/problems/find-the-middle-of-a-linked-list/)

## Method-1 : slow and fast pointer


### Complexity : Time Complexity : O(n) and space Complexity : O(1)

we use two pointers fast and slow, the fast pointer moves two nodes at a time and the slow pointer moves one node at a time so,
when the fast pointer reaches the end of linked list ie either the last or the second last node then the slow 
pointer will be in the middle so we can return the slow pointer.
