#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Linear Search
//  space compexity : O(1) and time complexity : O(n)
//   int minimum(vector<int> nums) {
//     int min = nums[0];
//     for (auto i : nums) {
//       if (min > i)
//         min = i;
//     }
//     return min;
//   }

// Binary Search
//  space compexity : O(1) and time compexity : O(logn)
int minimum(vector<int> nums) {
  int n = nums.size();
  int result = nums[0], left = 0, right = n - 1, mid;
  while (left < right) {
    mid = left + (right - left) / 2;
    if (nums[mid] < result) {

      right = mid - 1;
      result = nums[mid];
    } else {
      left = mid + 1;
    }
  }
  return result;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1};
  cout << minimum(nums) << endl;
  return 0;
}
