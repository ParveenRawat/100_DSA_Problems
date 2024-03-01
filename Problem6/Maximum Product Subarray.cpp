#include <bits/stdc++.h>

using namespace std;

// Method-1 : Time Complexity : O(n) , Space Complexity : O(1)
//  int maxProduct(vector<int> &nums) {
//    int maxi = INT_MIN;
//    int prod = 1;
//
//    for (int i = 0; i < nums.size(); i++) {
//      prod *= nums[i];
//      maxi = max(prod, maxi);
//      if (prod == 0)
//        prod = 1;
//    }
//    prod = 1;
//    for (int i = nums.size() - 1; i >= 0; i--) {
//      prod *= nums[i];
//
//      maxi = max(prod, maxi);
//      if (prod == 0)
//        prod = 1;
//    }
//    return maxi;
//  }

// Method-2 : Time Complexity : O(n) ,Space Complexity : O(1)
int maxProduct(vector<int> &nums) {
  int res = nums[0];
  int curMin = 1, curMax = 1;
  for (int i = 0; i < nums.size(); i++) {
    int n = nums[i];
    int tmp = curMax * n;
    curMax = max(max(n * curMax, n * curMin), n);
    curMin = min(min(tmp, n * curMin), n);
    res = max(res, curMax);
  }
  return res;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {2, 3, -2, 4};
  int ans = maxProduct(nums);
  cout << ans;
  return 0;
}
