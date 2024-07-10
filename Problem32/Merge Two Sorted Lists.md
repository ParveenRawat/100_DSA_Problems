# SOLUTION

[Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

## Method-1 : iteratively


### Complexity : Time Complexity : O(n+m) and space Complexity : O(1)

we use an ans pointer that contains the ans list.
At each step we update the next pointer to be the lower value / higher value as per our need ie ascending or descending sort.
we repeat this till we one of the pointer is null.
lastly we append the rest of the left list to ans.
