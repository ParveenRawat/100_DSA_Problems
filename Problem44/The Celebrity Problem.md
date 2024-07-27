# SOLUTION

[The celebrity problem](https://leetcode.com/problems/find-the-celebrity//)

## Method-1 : by iterating through all the people

### Complexity : Time Complexity : O(n) and space Complexity : O(1)

we initially set candidate to 0, then we loop through rest of the people if the current candidate
knows the current person we update the candidate to be the current person then finally we have
found out the candidate for celebrity, if the person knows someone we return -1 else the candidate.
