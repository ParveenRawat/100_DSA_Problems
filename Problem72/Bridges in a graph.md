# SOLUTION

[Bridges in a graph](https://leetcode.com/problems/critical-connections-in-a-network/)

## Method-1 : using Tarjan's algorithm


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

Initialize:
Set up three key structures for each node: discovery time, low-link value, and a stack to keep track of nodes in the current SCC.
Keep track of which nodes are visited.


Depth-First Search (DFS):
Perform a DFS traversal starting from unvisited nodes.
For each node, assign a discovery time (a unique timestamp when it’s first visited).
Set the low-link value of the node as its discovery time (initially).
Push the node onto a stack to indicate it is part of the current path of exploration.


Update Low-Link Values:
For each neighboring node, recursively apply DFS if it hasn’t been visited.
After visiting a neighbor, update the current node's low-link value based on the neighbor’s low-link value.
If a neighbor is in the stack (i.e., part of the current SCC), update the low-link value based on its discovery time.

Identify SCC:
After exploring all neighbors of a node, if its discovery time equals its low-link value, it means the node is the root of an SCC.
Pop all nodes from the stack that are part of this SCC.


Repeat the process for all unvisited nodes until the entire graph is processed.
