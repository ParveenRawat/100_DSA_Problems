# SOLUTION

[Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)

## Method 1 : Linear Search

### Complexity : Time Complexity : O(n) and Space Complexity : O(1)

Initialize variables n and i to store the size of intervals and the current index, respectively, and an empty array res to store the result.

Case 1: No Overlap Before Insertion:

    Loop through intervals while i is less than n and the current interval's endpoint (intervals[i][1]) is less than the new interval's start point (newInterval[0]).
    
    Add the current interval from intervals to the res array.
    
    Increment i to move to the next interval.

Case 2: Overlap and Merge:

    Loop through intervals while i is less than n and the new interval's endpoint (newInterval[1]) is greater than or equal to the current interval's start point (intervals[i][0]).
    
    Update the newInterval's start point to the minimum of its current start and the current interval's start.
    
    Update the newInterval's endpoint to the maximum of its current end and the current interval's end.
    
    This essentially merges overlapping intervals into a single larger interval.
    
    Increment i to move to the next interval.
    
    Add the updated newInterval to the res array, representing the merged interval.

Case 3: No overlap after insertion:
    
    Loop through the remaining intervals (from index i) and add them to the res array.
    
    This includes intervals that occur after the new interval and those that don't overlap, as they have already been correctly inserted in the previous iterations (previous two cases).

    Return the res array containing all intervals with the new interval inserted correctly.

## Method 2 : Binary Search

### Complexity : Time Complexity : O(N) and Space Complexity : O(N)

If intervals is empty, it means there are no existing intervals, so we can simply return a array containing the newInterval.

    Perform a binary search to find the correct position to insert the new interval in the intervals array. It updates the values of left and right based on the comparison of the target value with the first element of the interval at the middle index.

    Initialize the variables target with the starting point of newInterval (i.e., newInterval[0]), left with 0, and right with n - 1 to define the search space in the intervals array.

    Perform a binary search by repeatedly dividing the search space in half until left is greater than right.

    Calculate the middle index mid as the average of left and right.

If the start of the interval at index mid is less than the target value, update left to mid + 1 to search the right half of the search space. Otherwise, update right to mid - 1 to search the left half of the search space.

    The search updates left and right until they converge to the correct position. Repeat until left is greater than right.

    Use intervals.insert(intervals.begin() + left, newInterval) to insert the newInterval at the correct position.

    Initialize an empty array res to store the result.

    Iterate through the sorted intervals.

    Check if res is empty or if the end of the last interval in res is less than the start of the current interval. If either condition is true, add the current interval to res.

    If there is an overlap, update the endpoint of the last interval in res to cover the current interval. This step ensures that non-overlapping intervals are added directly, and overlapping intervals are merged.

    The final merged and inserted intervals are stored in the res array, which is then returned.

