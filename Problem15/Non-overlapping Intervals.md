# SOLUTION

[Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)

## Method 1 : Sorting and Comparing

### Complexity : Time Complexity : O(nlogn) and Space Complexity : O(1)

first we sort the intervals vector according to the second time in a given interval.

the we traverse linearly to see if there is overlap, if overlap occurs then we increase our counter by one else we change the interval to the next interval  
