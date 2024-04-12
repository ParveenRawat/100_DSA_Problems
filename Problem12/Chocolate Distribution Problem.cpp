#include <bits/stdc++.h>
using namespace std;

int mindiff(vector<int> nums, int m) {
  sort(nums.begin(), nums.end());
  int diff = INT_MAX;
  cout << endl;
  for (int i = 0; i < nums.size() - m; i++) {
    if (nums[i + m] - nums[i] < diff) {
      diff = nums[i + m] - nums[i];
    }
  }
  return diff;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {12, 4,  7,  9,  2,  23, 25, 41, 30,
                      40, 28, 42, 30, 44, 48, 43, 50};
  int m = 7;
  int ans = mindiff(nums, m - 1);
  cout << ans << endl;
  return 0;
}
