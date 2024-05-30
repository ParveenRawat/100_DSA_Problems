# SOLUTION

[pallindromic substrings](https://leetcode.com/problems/pallindromic-substrings/)

## Method-1 : Manacher's Algorithm


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

First, we need to preprocess the string by adding special characters between each pair of characters in the string. This is done to ensure that all palindromic substrings have an odd length.

Next, we create a table to store the lengths of the palindromic substrings centered at each character in the string.

We then iterate through the string and, for each character, we compute the length of the longest palindromic substring centered at that character using the values in the table.

To compute the length of the palindromic substring centered at a given character, we first initialize the value in the table to be 1. We then check the characters on either side of the current character to see if they are the same. If they are, we increment the value in the table and continue checking until we reach a character that is not the same or we reach the end of the string.

We repeat this process for each character in the string, and the final result is the longest palindromic substring in the string.

Finally, we need to find the longest palindromic substring in the string. We can do this by comparing the values in the table and returning the substring with the maximum length.
