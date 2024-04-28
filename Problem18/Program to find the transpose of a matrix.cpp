#include <bits/stdc++.h>

using namespace std;

// Method 1 : using two for loops
// Complexity : Time Complexity : O(mn) and Space Complexity : O(1)
vector<vector<int>> transpose(vector<vector<int>> &matrix) {
  int m = matrix.size();
  int n = matrix[0].size();
  vector<vector<int>> ans(n, vector<int>(m, 0));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      ans[j][i] = matrix[i][j];
    }
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<vector<int>> ans = transpose(matrix);
  return 0;
}
