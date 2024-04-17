# SOLUTION

[Insert Interval](https://leetcode.com/problems/insert-interval/)

## Method 1 : insertion and merging

### Complexity : Time Complexity : O(n) and Space Complexity : O(1)

We traverse the vector to find the correct spot of the time period and then insert it.

If two time periods overlap we merge those and move on.

Finally we return the modified intervals vector.
