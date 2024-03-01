# SOLUTION

[Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

## Method 1 : Kadane's algo from left and right

### Time Complexity = O(n) and Space Complexity = O(1)

We keep track of max product from left and right using a modified kadane's algorithm.When 0 occurs we reset our product to 1.

## Method 2 : Keeping max and min

### Time Complexity = O(n) and Space Complexity = O(1)

We keep track of two variables max and min and loop through the array then we make the temporary product equal to current max and current element and set current max to `max(max(n * curMax, n * curMin), n)` and current min to `min(min(tmp, n * curMin), n)` then at the end return the max of current max and current min.
