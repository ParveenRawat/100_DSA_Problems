# SOLUTION

[word search](https://leetcode.com/problems/word-search/)

## Method-1 : using a character index array

### Complexity : Time Complexity : O(1) and space Complexity : O(n)

initialization: Initialize a sliding window with two pointers, left and right. Also, maintain an unordered_map (alphabets) to store the frequency of characters in the current window.

Reason: The sliding window approach allows us to efficiently process the string and focus on a specific segment without redundant computations. The alphabets map helps in keeping track of the frequency of characters within the window.

Frequency Count and Maximum Frequency: As the window slides to the right, update the frequency count of the characters encountered in the alphabets map. Additionally, keep track of the maximum frequency (maxf) of any character in the current window.

Reason: By maintaining the frequency count and the maximum frequency, we can efficiently identify the character with the highest occurrence in the current window.

Window Length Check: Check if the length of the current window minus the maximum frequency exceeds k. This condition ensures that we have at most k changes to any character in the window.

Reason: If the condition is met, it indicates that the window is not valid as we have exceeded the allowed changes. We need to adjust the window to maintain at most k changes.

Adjusting the Window: If the condition from step 3 is met, move the left pointer and update the frequency count accordingly until the condition is satisfied. This step ensures that the window remains valid.

Reason: By moving the left pointer, we adjust the window to satisfy the condition mentioned in step 3. This adjustment ensures that the window maintains the allowed number of changes.

Update Maximum Length: During each iteration, update the answer (ans) with the maximum length of the window seen so far.

Reason: The variable ans keeps track of the maximum length of the valid window. Updating this value ensures that we have the answer to the problem.
