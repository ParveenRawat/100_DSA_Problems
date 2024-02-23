#include <bits/stdc++.h>

using namespace std;

// Method 1 : Brute Force TimeComplexity : O(n^2) and SpaceComplexity : O(1)
// vector<int> twoSum(vector<int> nums, int target) {
//   vector<int> ans = {};
//   int n = nums.size();
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       if (nums[i] + nums[j] == target && i != j) {
//         ans.push_back(i);
//         ans.push_back(j);
//       }
//     }
//   }
//   return ans;
// }

// Method 2 : Using map TimeComplexity : O(n) and SpaceComplexity : O(n)
vector<int> twoSum(vector<int> nums, int target) {
  vector<int> ans;
  unordered_map<int, int> mp;
  int n = nums.size();
  
  for(int i = 0 ; i < n ; i++){
    int complement = target - nums[i];
    if (mp[complement]){
      ans.push_back(mp[complement]);
      ans.push_back(i);
    }
    mp[nums[i]] = i;
  }
  return ans;
}

int main() {
  vector<int> arr = {7, 10, 4, 2, 6, 5, 9, 3};
  int target = 10;

  vector<int> ans = twoSum(arr, target);

  cout << "first index : " << ans[0] <<endl;
  cout << "first index : " << ans[1] << endl;

  return 1;
}