# SOLUTION

[find minimum in a sorted rotated array](https://leetcode.com/problems/maximum-product-subarray/)

## Method 1 : Linear Search

### Time Complexity = O(n) and Space Complexity = O(1)

we keep a minimum variable and compare it to every element, if the element is smaller then we set the value of minimum to that element.

## Method 2 : Binary Search

### Time Complexity = O(logn) and Space Complexity = O(1)

we keep three variables `start,end and mid` initially start is 0, end is n-1. while start < end we update mid = change mid to middle of start and end and if array[start] > array[mid] => the array before mid is sorted and we update start = mid+1 else we update end to mid-1.
