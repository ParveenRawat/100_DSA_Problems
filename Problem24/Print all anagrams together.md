# SOLUTION

[group anagrams together](https://leetcode.com/problems/group-anagrams/)

## Method-1 : using an unordered map


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

The main idea is that whenever anagrams are sorted they produce the same string thus this string can be used as the key for a map
so we first sort the string and use it as the key for insertion in a vector
