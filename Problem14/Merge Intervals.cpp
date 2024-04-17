#include <bits/stdc++.h>
#include <vector>

using namespace std;
vector<vector<int>> insert(vector<vector<int>> &intervals,
                           vector<int> &newInterval) {
  vector<vector<int>> ans;
  int a = newInterval[0], b = newInterval[1];
  int i = 0, n = intervals.size();
  for (; i < n && intervals[i][1] < a; i++)
    ans.push_back(intervals[i]);
  for (; i < n && intervals[i][0] <= b; i++) {
    a = min(a, intervals[i][0]);
    b = max(b, intervals[i][1]);
  }

  ans.push_back({a, b});

  ans.reserve(ans.size() + intervals.size() - i);
  ans.insert(ans.end(), intervals.begin() + i, intervals.end());

  return ans;
}
int main(int argc, char *argv[]) {
  vector<vector<int>> arr = {{1, 2}, {3, 5}, {6, 7}, {8, 10}, {12, 16}};
  vector<int> newinterval = {4, 8};
  vector<vector<int>> ans = insert(arr, newinterval);
  return 0;
}
