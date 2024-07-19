# SOLUTION

[Next Greater Element](https://leetcode.com/problems/s/)

## Method-1 : using a stack

### Complexity : Time Complexity : O(n<sup>2</sup>) and space Complexity : O(n)

we loop over each element of the nums1 vector then use a stack to keep track of element that is to the right
of the current element if current element is equal to top of stack then no greater element is found then we push -1
to the ans, repeating it for all elements constructs the ans vector.

## Method-2 : using a stack and a map

### Complexity : Time Complexity : O(n) and Space Complexity : O(n)


We traverse nums2 and start storing elements on the top of stack.

If current number is greater than the top of the stack, then we found a pair.
Keep popping from stack till the top of stack is smaller than current number.

After matching pairs are found, push current number on top of stack.

Eventually when there are no more elements in nums2 to traverse, but there are elements in stack,
we can justify that next bigger element wasn't found for them. Hence we'll put -1 for the remaining elements in stack.

