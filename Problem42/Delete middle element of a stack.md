# SOLUTION

[Delete Middle Element Of A Stack](https://leetcode.com/problems/delete-middle-element-of-a-stack/)

## Method-1 : using recursion


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

we use a helper function which takes our stack, its size and depth ie depth in stack. if depth equals half of our stack size 
we perform a pop operation and return, otherwise we save the current top of the element in a variable eg. curr then we pop an element
from the stack then run the helper function again with depth increased by one and finally we push the curr element back into the stack
because we want to reconstruct the elements we have removed to get to the middle.
