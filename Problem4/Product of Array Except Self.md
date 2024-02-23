# SOLUTION

Link to the problem : [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)

## Method 1 : Brute Force

### Time Complexity = O(n <sup>2</sup> ) and Space Complexity = O(1)

we loop through the array and select the number then we multiply all numbers in array except the chosen number to multiply and save in the ans and finally we return the answer.

## Method 2 : Counting 0s and using product of entire array

### Time Complexity = O(n) and Space Complexity = O(n)

we keep track of number of 0 if it is 2 or larger then the ans will be an array of 0s.
if the number of 0s if 1 then the ans is filled with 0 then we find the 0's index and find the product except the zero, this product is then saved in the index of 0.
if their are no 0s then we simpy calculate the product of entire array and then divide by the current value and store it in ans then finally return it.

## Method 3 : Using Prefix and Postfix product array

### Time Complexity = O(n) and Space Complexity = O(1)

in this approach we store the product of elements before and after the number in two arrays the ans can be found by : `ans[i] = pre[i] * post[i]`
to further optimise this we store and multiply pre and post array in the ans array to save space.

```c++
nums = [1,2,3,4]
pre  = [1,1,2,6]
post = [24,12,4,1]
// using ans[i] = pre[i]*post[i]
ans = [24,12,8,6]
```
