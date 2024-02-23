# SOLUTION

Link to the problem : [2 Sum](https://leetcode.com/problems/two-sum/)

## Method 1 : Brute Force

### TimeComplexity = O(n^2) and SpaceComplexity = O(1)

Take two pointers to point to a member of the array and check if their sum equals the target and if it equals then return the index by the pointers.

## Method 2 : Using Map

### TimeComplexity = O(n) and SpaceComplexity = O(n)

move through the array and store the key and value in the map.

#### Key = number in array and Value = index

we check if the complement of the number exists in the map and if it exists then we append the values in the ans and finally return it.
