#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> &a, vector<int> &b) { return a[1] > b[1]; }

// Method 1 : Sorting the vector
// Analysis : Time Complexity : O(nlogn) and Space Complexity : O(1)
int overlaps(vector<vector<int>> intervals) {
  int ans = -1;
  if (intervals.size() == 0)
    return 0;
  sort(intervals.begin(), intervals.end(), comp);
  vector<int> prev = intervals[0];
  for (vector<int> interval : intervals) {
    if (interval[0] < prev[1]) {
      ans++;
    } else {
      prev = interval;
    }
    prev = interval;
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<vector<int>> intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  int ans = overlaps(intervals);
  cout << ans << endl;
  return 0;
}
