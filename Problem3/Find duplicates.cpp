#include <bits/stdc++.h>

using namespace std;

// vector<int> duplicates(vector<int> nums) {
//   vector<int> ans;
//   unordered_map<int, int> mp;
//   for (int i = 0; i < nums.size(); i++) {
//     mp[nums[i]]++;
//   }
//   for (auto &[a, b] : mp) {
//     if (b != 1) {
//       ans.push_back(a);
//     }
//   }
//   return ans;
// }

vector<int> duplicates(vector<int> &nums) {
  if (nums.empty())
    return {};
  vector<int> ans;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[abs(nums[i]) - 1] < 0)
      ans.push_back(abs(nums[i]));
    nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
  }
  return ans;
}

int main() {
  vector<int> nums = {1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 0};
  vector<int> ans = duplicates(nums);
  for (auto &i : ans) {
    cout << i << endl;
  }
  return 0;
}
