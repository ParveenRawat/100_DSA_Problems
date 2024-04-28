# SOLUTION

[transpose of a matrix](https://leetcode.com/problems/transpose/)

## Method-1 : using two for loops

### Complexity : Time Complexity : O(m\*n) and space Complexity : O(1) excluding the vector that has to be returned.

We create a ans vector then we loop through the vector and put value of matrix[i][j] at ans[j][i] and return the ans.
