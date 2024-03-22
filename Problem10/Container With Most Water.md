# SOLUTION

[Container with the most water](https://leetcode.com/problems/container-with-most-water/)

## Method 1 : Brute Force

### Time Complexity = O(n<sup>2</sup>) and Space Complexity = O(1)

We compare all the possible pairs of the array and calculate the most amount of water and store the max into a variable then finally return it.

## Method 2 : Two Pointer Approach

### Time Complexity = O(n) and Space Complexity = O(1)

we keep track of two pointers left and right,initially left is set to 0 and right is set to n-1 where n is the size of the given array then we loop while l < r.

In each iteration we find the maximum water and compare it to the variable that we store the maximum amount and if value at left is smaller then we increment the left pointer by one otherwise we decrement the right pointer by one.
