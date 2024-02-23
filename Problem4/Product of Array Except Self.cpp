#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Method 1 : Brute Force = Time Complexity : O(n^2) and Space Complexity : O(1)
// vector<int> product(vector<int> &nums) {
//   int n = nums.size();
//   vector<int> ans(n, 0);
//   for (int i = 0; i < n; i++) {
//     int curr = 1;
//     for (int j = 0; j < n; j++) {
//       if (i == j) {
//         continue;
//       }
//       curr *= nums[j];
//       cout << nums[j] << endl;
//       cout << curr << endl;
//     }
//     ans[i] = curr;
//   }
//   return ans;
// }

// Method 2 : 0 manipulation = Time Complexity : O(n) and Space Complexity :
// O(1) utility functions to count number of zeros and get the first occurence
//
// int count_occurence(vector<int> &nums, int n) {
//   int count = 0;
//   for (int i = 0; i < nums.size(); i++) {
//     if (nums[i] == n) {
//       count++;
//     }
//   }
//   return count;
// }
// int first_occurence(vector<int> &nums, int n) {
//   for (int i = 0; i < nums.size(); i++) {
//     if (nums[i] == n) {
//       return i;
//     }
//   }
//   return -1;
// }
//
// vector<int> product(vector<int> nums) {
//   int n = nums.size();
//   vector<int> ans(n, 0);
//
//   int NumberOfZeros = count_occurence(nums, 0);
//
//   if (NumberOfZeros == 1) {
//     int index = first_occurence(nums, 0);
//     int mul = 1;
//     for (int i = 0; i < nums.size(); i++) {
//       if (i == index) {
//         continue;
//       }
//       mul *= nums[i];
//     }
//     ans[index] = mul;
//   }
//
//   if (NumberOfZeros == 0) {
//     int mul = 1;
//     for (int i = 0; i < n; i++) {
//       mul *= nums[i];
//     }
//     for (int i = 0; i < n; i++) {
//       ans[i] = mul / nums[i];
//     }
//   }
//   return ans;
// }

// Method 3 : prefix product and postfix product : Time Complexity : O(n) and
// Space Complexity : O(1)
vector<int> product(vector<int> nums) {
  int n = nums.size();
  vector<int> ans(n, 1);
  int curr = 1;
  for (int i = n - 1; i > -1; i--) {
    ans[i] *= curr;
    curr *= nums[i];
  }
  curr = 1;
  for (int i = 0; i < n; i++) {
    ans[i] *= curr;
    curr *= nums[i];
  }
  return ans;
}

int main() {
  vector<int> nums = {1, 2, 3, 4};
  vector<int> ans = product(nums);
  for (auto &i : ans) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
