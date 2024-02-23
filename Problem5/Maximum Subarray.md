# SOLUTION

Link to the problem : [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

## Method 1 : Brute Force

### Time Complexity = O(n <sup>3</sup>) and Space Complexity = O(1)

In this approach we add all elements between indexes `i and j` which are from `0 to n-1` ans `i+1 to n-1` then compare to the maxsum to find the largest sum possible.

## Method 2 : Kadane's Algorithm 

### Time Complexity = O(n) and Space Complexity = O(1)

In kadane's algorithm we keep track of two values maxsum (which is our final ans) and currentsum (which is the current sum), the pseudocode for this algo looks like
    
    for each element in array do
        currentsum += element
        if maxsum < currentsum then
            set maxsum = current sum
        if current < 0 then
            current = 0

**Insight** : if all the elements were positive then the maximum-subarray would have been the entire array which means that the change in maxsum may occur only during adding negative numbers.
