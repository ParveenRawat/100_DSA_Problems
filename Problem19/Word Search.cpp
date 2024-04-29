#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Method 1 : BackTracking
// Complexity : Time Complexity : O(¯\_00_/¯) and Space Complexity :
// O(¯\_(00)_/¯)
int n, m, s;

bool dfs(int i, int j, int k, vector<vector<char>> &board, string &word) {
  if (i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[k])
    return 0;
  if (k == s - 1)
    return 1;
  char recover = board[i][j];
  board[i][j] = '@';
  bool a1 = dfs(i + 1, j, k + 1, board, word);
  bool a2 = dfs(i, j + 1, k + 1, board, word);
  bool a3 = dfs(i - 1, j, k + 1, board, word);
  bool a4 = dfs(i, j - 1, k + 1, board, word);
  board[i][j] = recover; // backtracking
  return a1 || a2 || a3 || a4;
}

bool exist(vector<vector<char>> &board, string &word) {
  n = board.size();
  m = board[0].size();
  s = word.size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (dfs(i, j, 0, board, word))
        return 1;
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {
  vector<vector<char>> board = {
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  string word = "ABCESEE";
  bool ans = exist(board, word);

  return 0;
}
