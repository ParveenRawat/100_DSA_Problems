#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

// Linear Search
// Time Complexity : O(n) and Space Complexity : O(1)
//  int Search(vector<int> nums, int value) {
//    for (int i = 0; i < nums.size(); i++) {
//      if (nums[i] == value) {
//        return i;
//      }
//    }
//    return -1;
//  }

// Linear Search
// Time Complexity : O(n) and Space Complexity : O(1)
int Search(vector<int> nums, int target) {
  int low = 0, high = nums.size() - 1;

  while (low <= high) {
    int mid = (low + high) / 2;

    if (nums[mid] == target) {
      return mid;
    }

    if (nums[low] <= nums[mid]) {
      if (nums[low] <= target && target < nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      if (nums[mid] < target && target <= nums[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }

  return -1;
}
int main(int argc, char *argv[]) {
  vector<int> nums = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
  cout << Search(nums, 7) << endl;
  return 0;
}
