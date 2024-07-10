#SOLUTION

[Reorder List](https://leetcode.com/problems/reorder-list/)

## Method-1 : using turtle and hare approach


### Complexity : Time Complexity : O(n) and space Complexity : O(1)

First let's take two pointers name it as half and temp . temp is faster than half by 1.
When temp reaches the end of linkedlsit half reaches the middle element .So this is how the linkedlist will get divided in two halfes as the center will become a dividing node .
Now reverse the second half .
After reversing the second half, merge the first half and second half.

