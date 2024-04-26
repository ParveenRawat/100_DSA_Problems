#include <bits/stdc++.h>

using namespace std;

// Method-1 : using start and end pointers for spiral
// Complexity : Time Complexity : O(m*n) and space Complexity : O(1) excluding
// the array that has to be returned.
vector<int> spiral(vector<vector<int>> &matrix) {
  vector<int> ans;

  int top = 0;
  int bottom = matrix.size() - 1;

  int left = 0;
  int right = matrix[0].size() - 1;

  int i;
  while (left <= right && top <= bottom) {
    for (i = left; i <= right;)
      ans.emplace_back(matrix[top][i++]);
    top++;

    for (i = top; i <= bottom;)
      ans.emplace_back(matrix[i++][right]);
    right--;

    if (bottom >= top) {
      for (i = right; i >= left;)
        ans.emplace_back(matrix[bottom][i--]);
      bottom--;
    }
    if (left <= right) {
      for (i = bottom; i >= top;)
        ans.emplace_back(matrix[i--][left]);
      left++;
    }
  }
  return ans;
}
int main(int argc, char *argv[]) {
  vector<vector<int>> matrix = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
  vector<int> spiralMat = spiral(matrix);
  for (const auto i : spiralMat) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
