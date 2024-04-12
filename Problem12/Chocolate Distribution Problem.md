# SOLUTION

[Chocolate Distribution Problem](https://leetcode.com/problems/Chocolate-distribution-problem/)

## Method 1 : Two pointer approach

### Time Complexity = O(n) and Space Complexity = O(1)

We sort the input array and keep track of minimum difference between `nums[i]` ans `nums[i+m]` and finally return the minimum value.

