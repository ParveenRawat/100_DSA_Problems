# SOLUTION

[Find The First Circular Tour That Visits All Petrol Pumps](https://leetcode.com/problems/gas-station/)

## Method-1 : greedy approach

### Complexity : Time Complexity : O(n) and space Complexity : O(1)

Two cases exists :
if our total_gas is less than our total cost in that case we can't complete our journey ,so will return -1
Now we have a unique solution that means single starting_point exists
To find that point we will keep track of my current_gas+=gas[i]-cost[i]
lets suppose at any index our current gas became negative so we can clearly say that till that index all the gas station between ith and starting point are bad, starting point as well.
So, this means we can start trying at next gas_station on the i+1 station
