#include <bits/stdc++.h>

using namespace std;

// Method 1 : using stack
// Complexity : Time Complexity : O(n^2) and Space Complexity : O(n)
void helper(int num, stack<int> stk, vector<int> &ans) {
  int topush = -1;
  while (!stk.empty()) {
    int curr = stk.top();
    if (num < curr) {
      topush = curr;
    }
    if (num == curr) {
      if (topush == -1) {
        ans.emplace_back(-1);
      } else {
        ans.emplace_back(topush);
      }
      return;
    }
    stk.pop();
  }
}

vector<int> nextGreater(vector<int> nums1, vector<int> nums2) {
  vector<int> ans;
  stack<int> stk;
  for (int i = 0; i < nums2.size(); ++i) {
    stk.push(nums2[i]);
  }
  for (int i = 0; i < nums1.size(); ++i) {
    helper(nums1[i], stk, ans);
  }
  return ans;
}

// Method 2 : Using stack and a map
// Complexity : Time Complexity : O(n) and Space Complexity : O(n)

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
  stack<int> stk;
  unordered_map<int, int> map;
  for (int i = 0; i < nums2.size(); ++i) {
    while (stk.size() && stk.top() < nums2[i]) {
      map[stk.top()] = nums2[i];
      stk.pop();
    }
    stk.push(nums2[i]);
  }
  vector<int> ans;
  for (int i = 0; i < nums1.size(); ++i)
    ans.push_back(map.count(nums1[i]) ? map[nums1[i]] : -1);
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> nums1 = {4, 1, 2};
  vector<int> nums2 = {1, 3, 4, 2};
  vector<int> ans = nextGreaterElement(nums1, nums2);
  for (int i = 0; i < ans.size(); ++i) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
