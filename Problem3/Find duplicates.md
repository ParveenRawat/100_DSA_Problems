# SOLUTION

Link to the problem : [find duplicates in an array](https://leetcode.com/problems/find-all-duplicates-in-an-array/)

## Method 1 : Brute Force

### Time Complexity = O(n <sup>2</sup> ) and Space Complexity = O(1)

We loop through the array and choose an element and loop through the array again and check for repetetion and if repetetion occurs we add it to the ans array and finally return it.

## Method 2 : Using A Map

### Time Complexity = O(n) and Space Complexity = O(n)

Keep track of the frequencies of the element in a map and then check if the frequency is 2 (accoding to constraints the frequency can only be 1 or 2) , if it is 2 we add the element to the ans vector and finally return the ans array.

## Method 3 : Using Array As Frequency Array

### Time Complexity = O(n) and Space Complexity = O(1)

We use the array as frequency array, we traverse int the array and we change the sign of the number at `nums[abs(nums[i]-1)]`. we do this for all elements and if the number is negative i.e. we have already visited it we add it to our ans array and finnally return the ans array.
