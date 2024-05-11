# SOLUTION

[check if two strings are anagram of each other]( https://leetcode.com/problems/anagram-check/)

## Method-1 : using an unordered map


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

Initially we check if the two strings are equal in size as anagrams must be equal in size then,

we create a map that counts the occurence of characters of s,
then we decrease value from map if the character also occurs in t

finally we check if each frequency of characters is 0 if not we return false

then if false if not returned till now that means that the strings are anagram.
