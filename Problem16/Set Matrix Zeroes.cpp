#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Method 1 : using first cell of row and column as flag
// Complexity : Time Complexity : O(mn) Space Complexity : O(1)
void setZeroes(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();

  bool flag1 = false;
  bool flag2 = false;

  for (int i = 0; i < m; i++) {
    if (matrix[0][i] == 0) {
      flag1 = true;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (matrix[i][0] == 0) {
      flag2 = true;
      break;
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (matrix[i][j] == 0) {
        matrix[0][j] = 0;
        matrix[i][0] = 0;
      }
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
  }
  if (flag1) {
    for (int i = 0; i < n; i++) {
      matrix[0][i] = 0;
    }
  }
  if (flag2) {
    for (int i = 0; i < m; i++) {
      matrix[i][0] = 0;
    }
  }
  cout << "flag1 : " << flag1 << endl;
  cout << "flag2 : " << flag2 << endl;
}

int main(int argc, char *argv[]) {
  vector<vector<int>> matrix = {{1, 0, 1}, {1, 0, 1}, {1, 1, 1}};
  int n = matrix.size();
  int m = matrix[0].size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  setZeroes(matrix);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
