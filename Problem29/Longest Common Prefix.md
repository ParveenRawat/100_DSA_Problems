# SOLUTION

[Longest common prefix](https://leetcode.com/problems/longest-common-prefix/)

## Method-1 : traversal through each word


### Complexity : Time Complexity : O(n * m) and space Complexity : O(1) where m is the size of the smallest string.

we traverse through the words and if we find that the characters do not match or the size of current string if smaller than the iteration variable
then we return the ans else we add the current character in the string to the ans.
