# SOLUTION

[Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)

## Method-1 : using a map and vector


### Complexity : Time Complexity : O(n) and space Complexity : O(n)

we first use a map to map out all the frequencies of the elements, then we put them into a vector of pair, with the
second element of the map element into first place of pair in vector. After this we sort the vector in reverse then
return the first k elements by pushing them into the ans vector.
