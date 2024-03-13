# SOLUTION

[search in a sorted rotated array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

## Method 1 : Linear Search

### Time Complexity = O(n) and Space Complexity = O(1)

we keep a minimum variable and compare it to every element, if the element is smaller then we set the value of minimum to that element.

## Method 2 : Binary Search

### Time Complexity = O(logn) and Space Complexity = O(1)

we use binary search, we compare nums[start] with nums[middle] find if the array in front or behind is sorted, then we apply binary search on the sorted array if value lies in sorted part else we repeat the process after changing start or end accordingly.
