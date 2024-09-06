# SOLUTION

[Find Median From Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)

## Method-1 : using two priority queue


### Complexity : Time Complexity : O(n) and space Complexity : O(logn)


I keep two heaps (or priority queues):
  Max-heap small has the smaller half of the numbers.
  Min-heap large has the larger half of the numbers.

This gives me direct access to the one or two middle values (they're the tops of the heaps), so getting the median
takes O(1) time. And adding a number takes O(log n) time.

Supporting both min- and max-heap is more or less cumbersome, depending on the language, so I simply negate the
numbers in the heap in which I want the reverse of the default order. To prevent this from causing
a bug with -231 (which negated is itself, when using 32-bit ints), I use integer types larger than 32 bits.

Using larger integer types also prevents an overflow error when taking the mean of the two middle numbers. I think
almost all solutions posted previously have that bug.
