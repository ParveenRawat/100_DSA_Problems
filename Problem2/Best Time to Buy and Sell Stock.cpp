#include <bits/stdc++.h>

using namespace std;

// Method 1 : Brute Force : TimeComplexity : O(n^2) and SpaceComplexity : O(1)
// int StockProfit(vector<int> stocks) {
//   int ans = 0;
//   for (int i = 0; i < stocks.size(); i++) {
//     for (int j = i + 1; j < stocks.size(); j++) {
//       ans = max(stocks[i] - stocks[j], ans);
//     }
//   }
//   return ans;
// }

// Method 2 : Two Pointers : TimeComplexity : O(n) and SpaceComplexity : O(1)
int StockProfit(vector<int> nums) {
  int r = 1, l = 0;
  int maxP = 0;
  int profit = 0;
  while (r < nums.size()) {
    if (nums[l] < nums[r]) {
      profit = nums[r] - nums[l];
      maxP = max(maxP, profit);
    } else {
      l = r;
    }
    r += 1;
  }
  return maxP;
}

int main() {
  vector<int> nums = {7, 6, 4, 9, 1};

  cout << StockProfit(nums) << endl;
  return 0;
}
