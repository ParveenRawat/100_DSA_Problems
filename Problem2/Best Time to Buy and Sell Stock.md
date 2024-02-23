# SOLUTION

Link to the problem : [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## Method 1 : Brute Force

### TimeComplexity = O(n^2) and SpaceComplexity = O(1)

Take two pointers to point to a member of the array and check if their diffrence is greater than the current ans, after the entire array is processed then return the ans.

## Method 2 : Using Two Pointers

### TimeComplexity = O(n) and SpaceComplexity = O(1)

We keep track of two pointers left and right that point to a value in the array.

while right is smaller than size of the array we check if :

    1. Number at left is smaller than number at right

    2. if true we calculate profit and compare with max profit

    3. otherwise we set l = r

    4. for each iteration we increment the value of r

    5. finally return max profit
