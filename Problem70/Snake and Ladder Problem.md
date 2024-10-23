# SOLUTION

[Snakes and Ladders](https://leetcode.com/problems/snake-and-ladders/)

## Method-1 : using an unordered map


### Complexity : Time Complexity : O(n^2) and space Complexity : O(n^2)

we implement a breadth-first search (BFS) algorithm to find the minimum number of moves needed to reach
the last cell of a board from the first cell. We start by creating a vector to store the positions of each
cell and another vector to track the minimum moves for each cell, initializing those moves to -1. We use
a queue to keep track of the cells we’re visiting, starting with the first cell.

As we loop through the cells, we explore possible moves from the current cell to the next six cells.
If we encounter a cell that hasn’t been visited yet, we update the minimum moves required to reach
it. We also handle cells with snakes or ladders by directly moving to their destination. We
continue this process until we’ve explored all the cells, ultimately returning the minimum
moves needed to reach the last cell.
