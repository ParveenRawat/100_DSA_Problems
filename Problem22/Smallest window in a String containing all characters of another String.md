# SOLUTION

[smallest window in a string containing all characters of another string]( https://leetcode.com/problems/minimum-window-substring/)

## Method-1 : using a character index array


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

Initialize a character array map of size 128 to store the frequency of characters in string t.

Initialize variables count, start, end, minLen, and startIndex.

Iterate through each character in string t and update the character frequency in the map.

Use two pointers (start and end) to slide the window and find the minimum window that contains all characters from string t.

Increment end and decrease the frequency in map for each character encountered until all characters from t are present in the window.

When all characters from t are present, update minLen and startIndex based on the current window size and starting index.

Increment start and increase the frequency in map until the window no longer contains all characters from t.

After the iteration, the minimum window is found, and the result is a substring of s starting from startIndex with length minLen.
