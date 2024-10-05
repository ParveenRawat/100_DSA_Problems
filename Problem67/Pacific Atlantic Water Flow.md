# SOLUTION

[Pacific Atlantic Water FLow](https://leetcode.com/problems/pacific-atlantic-water-flow/)

## Method-1 : DFS


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

We need to count the number of cells from which water could flow to both the oceans.
Water can go to left,top for pacific and to right,down for atlantic.

When at cell ht[i][j] :

we check that water can flow to left,top and also to right,down.
It is similar to finding a path with non-increasing values.
To prevent repeation, we use memoization to store the result for certain ht[i][j].

How memoization helps :

Let water can flow to both oceans from cell ht[i][j], so while checking for its adjacent cells, we need not find the complete path to oceans, we just find a path that leads to a cell that reaches both oceans.

Finding water can reach both oceans :

As we going for memoization, we create two vector<vector<bool>> that stores that whether water can flow to ocean for each ocean respectively.

For pacific, we created pac and water initially water can flow for top and left cells.

For atlanic, we created atl and water initially water can flow for bottom and right cells.

Then for each cell, we check whether water flows off :
For cell ht[i][j] we recurcively call for its adjacent cells, if neightbouring height is less or equal to current cell.
Water can flow off if we reach a cell for which we already have solution.
For pacific we already made top,left cells true and same for atlantic.

Whenever water reaches, make all cells in that path true so they need not to be calculated in future.
