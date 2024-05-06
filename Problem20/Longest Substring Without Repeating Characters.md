# SOLUTION

[word search](https://leetcode.com/problems/word-search/)

## Method-1 : using a character index array

### Complexity : Time Complexity : O(1) and space Complexity : O(n)


This solution uses an integer array charIndex to store the indices of characters.
We eliminate the need for an unordered map by utilizing the array.
The maxLength, left, and right pointers are still present.
We iterate through the string using the right pointer.
We check if the current character has occurred within the current substring by comparing its index in charIndex with left.
If the character has occurred, we move the left pointer to the next position after the last occurrence of the character.
We update the index of the current character in charIndex.
At each step, we update the maxLength by calculating the length of the current substring.
We continue the iteration until reaching the end of the string.
Finally, we return the maxLength as the length of the longest substring without repeating characters.

