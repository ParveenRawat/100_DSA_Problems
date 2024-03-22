#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Method - 1
// Time Complexity : O(n^2) ans Space Complexity : O(1)
// int maxwater(vector<int> height) {
//   int maxAmount = 0;
//   int n = height.size();
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       maxAmount = max(maxAmount, abs(j - i) * min(height[i], height[j]));
//     }
//   }
//   return maxAmount;
// }

// Method - 2
// Time Complexity : O(n) and Space Complexity : O(1)
int maxwater(vector<int> height) {
  int maxAmount = 0;
  int l = 0;
  int n = height.size();
  int r = n - 1;
  while (l < r) {
    maxAmount = max(maxAmount, (r - l) * min(height[l], height[r]));
    if (height[l] < height[r]) {
      l++;
    } else {
      r--;
    }
  }

  return maxAmount;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int ans = maxwater(nums);
  cout << ans << endl;
  return 0;
}
