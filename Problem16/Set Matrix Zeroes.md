# SOLUTION

[Set Matrix Zero](https://leetcode.com/problems/set-matrix-zero/)

## Method 1 : using first cell of each row and columns as flag

### Complexity : Time Complexity : O(nm) and Space Complexity : O(1)

In the first step we check if first cell of any row or column has 0 we keep track of two flags, flag1 and flag2 which mark the presence of 0 in row and columns respectiverly.

the we traverse the matrix to check which cells are 0 , if we find 0 we change the first cell of that row and column to 0.

then we traverse the matrix again to check if first cell is 0 , if it is 0 then set the current cell to 0 as well.

finally we change entire first row or column to 0 according to flag1 and flag2.
