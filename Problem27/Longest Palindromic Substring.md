# SOLUTION

[longest pallindromic substring](https://leetcode.com/problems/longest-pallindrome-substring/)

## Method-1 : expanding string from both sides


### Complexity : Time Complexity : O(n^2) and space Complexity : O(n)

We observe that a palindrome mirrors around its center. Therefore, a palindrome can be expanded from its center, and there are only 2n - 1 such centers.
You might be asking why there are 2n - 1 but not n centers? The reason is the center of a palindrome can be in between two letters. Such palindromes have even number of letters (such as "abba") and its center are between the two 'b's.'
Since expanding a palindrome around its center could take O(n) time, the overall complexity is O(n^2).
