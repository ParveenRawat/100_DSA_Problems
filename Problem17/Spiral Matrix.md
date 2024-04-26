# SOLUTION

[Set Matrix Zero](https://leetcode.com/problems/spiral-matrix/)

## Method-1 : using start and end pointers for spiral

### Complexity : Time Complexity : O(m\*n) and space Complexity : O(1) excluding the array that has to be returned.

we instanciate 4 integers that point to the right column, left column, top row and bottom row for traversing in a spiral

first we traverse left to right then top to bottom then right to left then finally bottom to top
this is done until we get to the last element where either left > right or bottom < top which enables use to make
`(left <= right && bottom >= top)` our condition for the while loop.
