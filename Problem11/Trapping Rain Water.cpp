#include <bits/stdc++.h>

using namespace std;

// Method - 1 : Two Pointers
// Space Complexity : O(n) ans Space Complexity : O(1)
int RainWater(vector<int> h) {
  int l = 0, r = h.size() - 1, lmax = INT_MIN, rmax = INT_MIN, ans = 0;
  while (l < r) {
    lmax = max(lmax, h[l]);
    rmax = max(rmax, h[r]);
    ans += (lmax < rmax) ? lmax - h[l++] : rmax - h[r--];
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int ans = RainWater(nums);
  cout << ans << endl;
  return 0;
}
