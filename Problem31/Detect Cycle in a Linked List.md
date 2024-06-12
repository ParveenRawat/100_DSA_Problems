# SOLUTION

[detect cycle in a linked list](https://leetcode.com/problems/linked-list-cycle)

## Method-1 : fast and slow pointer


### Complexity : Time Complexity : O(n) and space Complexity : O(1)


we use two pointers (fast and slow) to traverse the linked list. fast moves two nodes at a time and the slow pointer moves at
one node at a time. If there is a cycle in the linked list, the fast pointer will eventually meet the slow pointer thus we 
know that there is a cycle in the linked list.
