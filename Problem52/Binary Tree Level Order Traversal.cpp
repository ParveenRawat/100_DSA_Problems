#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};

vector<vector<int>> BFS(TreeNode *root) {
  vector<vector<int>> ans;
  if (!root)
    return ans;

  queue<TreeNode *> q;
  q.push(root);

  vector<int> level;
  TreeNode *temp;

  while (!q.empty()) {
    int size = q.size();
    level = {};

    for (int i = 0; i < size; ++i) {
      temp = q.front();
      q.pop();

      if (temp->right)
        q.push(temp->right);
      if (temp->left)
        q.push(temp->left);

      level.push_back(temp->val);
    }
    ans.push_back(level);
  }
  return ans;
}

int main(int argc, char *argv[]) { return 0; }
