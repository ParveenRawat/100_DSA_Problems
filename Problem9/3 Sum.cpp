#include <bits/stdc++.h>

using namespace std;

// Method-1 : Time Complexity : O(n^3) and Space Complexity : O(1)
//  vector<vector<int>> threeSum(vector<int> &nums) {
//    int n = nums.size();
//    sort(nums.begin(), nums.end());
//    set<vector<int>> set;
//    vector<vector<int>> output;
//    for (int i = 0; i < n - 2; i++) {
//      for (int j = i + 1; j < n - 1; j++) {
//        for (int k = j + 1; k < n; k++) {
//          if ((nums[i] + nums[j] + nums[k] == 0) && i != j && j != k && k !=
//          i) {
//            set.insert({nums[i], nums[j], nums[k]});
//          }
//        }
//      }
//    }
//    for (auto it : set) {
//      output.push_back(it);
//    }
//    return output;
//  }
//

// Method-2 : Time Complexity : O(N^2) and Space Complexity : O(1)
vector<vector<int>> threeSum(vector<int> &nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());
  vector<vector<int>> output;
  for (int i = 0; i < n - 1; i++) {
    int low = i + 1, high = n - 1;
    while (low < high) {
      if (nums[i] + nums[low] + nums[high] < 0) {
        low++;
      } else if (nums[i] + nums[low] + nums[high] > 0) {
        high--;
      } else {
        output.push_back({nums[i], nums[low], nums[high]});
        int tempIndex1 = low, tempIndex2 = high;
        while (low < high && nums[low] == nums[tempIndex1])
          low++;
        while (low < high && nums[high] == nums[tempIndex2])
          high--;
      }
    }
    while (i + 1 < n && nums[i] == nums[i + 1])
      i++;
  }
  return output;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {2, 3, 4, 5, 6, -1, 2, 4, 0, -4, 2};
  vector<vector<int>> ans = threeSum(nums);

  for (auto i : ans) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
