# SOLUTION

[trapping rain water](https://leetcode.com/problems/trapping-rain-water/)

## Method 1 : Two Pointer Approach

### Time Complexity = O(n) and Space Complexity = O(1)

Initialize two pointers, left and right, pointing to the beginning and the end of the array respectively.

Initialize two variables, left_max and right_max, to keep track of the maximum height encountered from the left and right sides respectively. Initialize them to zero.

Initialize a variable water to accumulate the trapped rainwater, initially set to zero.

Loop until left pointer is less than right pointer:

    If height[left] is less than or equal to height[right]:
        If height[left] is greater than left_max, update left_max to height[left].
        Otherwise, calculate the water trapped at the left pointer as left_max - height[left], and add it to water.
        Increment left pointer.
    Otherwise:
        If height[right] is greater than right_max, update right_max to height[right].
        Otherwise, calculate the water trapped at the right pointer as right_max - height[right], and add it to water.
        Decrement right pointer.

After the loop terminates, return the accumulated water variable, which represents the total trapped rainwater.
