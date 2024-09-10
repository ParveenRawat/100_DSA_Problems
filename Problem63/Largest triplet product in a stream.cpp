#include <bits/stdc++.h>
#include <vector>

using namespace std;

int maximumProduct(vector<int> &nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());
  return max(nums[n - 1] * nums[n - 2] * nums[n - 3],
             nums[0] * nums[1] * nums[n - 1]);
}
int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 3, 4, 5, 4, -1, -242, -2};
  cout << maximumProduct(arr);
  return 0;
}
