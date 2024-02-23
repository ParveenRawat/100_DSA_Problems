#include <bits/stdc++.h>

using namespace std;

// Method 1 : Brute Force = Time Complexity : O(n^3) and Space Complexity : O(1)
// int maxSum(vector<int> nums) {
//   int sum = INT_MIN;
//   int n = nums.size();
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) {
//       int curr = 0;
//       for (int k = i; k < j; k++) {
//         curr += nums[k];
//       }
//       sum = max(sum, curr);
//     }
//   }
//   return sum;
// }

// Method 2 : Kadane's Algorithm = Time Complexity : O(n) and Space Complexity :
// O(1)
int maxSum(vector<int> &nums) {
  int maxsum = INT_MIN, curr = 0;
  for (int i = 0; i < nums.size(); i++) {
    curr = curr + nums[i];
    if (maxsum < curr) {
      maxsum = curr;
    }
    if (curr < 0) {
      curr = 0;
    }
  }
  return maxsum;
}

int main() {
  vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
  int ans = maxSum(nums);
  cout << ans << endl;
  return 1;
}
