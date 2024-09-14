# SOLUTION

[Connect N Ropes With Minimum Cost](https://leetcode.com/problems/connect-n-ropes-with-minimum-cost/)

## Method-1 : using a priority queue


### Complexity : Time Complexity : O(nlogn) and space Complexity : O(n)

we create a priority queue (min heap) in which we insert all the elements then we get 2 elements then add them and add the 
total to the ans. we repeat this till we have only one item, at which point we have our ans.
