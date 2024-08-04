# SOLUTION

[Check If Two Trees Have The Same Structure](https://leetcode.com/problems/same-tree/)

## Method-1 : traversal

### Complexity : Time Complexity : O(2<sup>n</sup>) and space Complexity : O(n), n = depth

if both root are null we return true, if one is null but other is not null then the trees are not the same so return false and
if value of both roots are not equal then we return false otherwise we return the ans of the same function on left and right
child of root.
