# SOLUTION

[Detect Cycle In A Directed Graph](https://leetcode.com/problems/course-schedule-ii/)

## Method-1 : Topological Sort with BFS

### Complexity : Time Complexity : O(N+E) and space Complexity : O(N+E)


Form adjacency list graph from P & compute indegree for each node
For the 1st level of BFS iteration, fill up the queue with courses having indegreei = 0, i.e,
courses with no prerequisites
At each iteration, pop & add the course from queue to ordering ans
Decrement indegree of each course for which current course was prerequisite.
If the indegree for those courses becomes 0, we can take it next by adding it to queue
Continue the process till queue isn't empty
Finally, return ans if it contains N courses denoting all courses can be finished,
otherwise we know that the graph contains cycle & its impossible to finish all courses in which case we return []
