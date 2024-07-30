#include <bits/stdc++.h>

using namespace std;

struct TreeNode * {
  int val;
  TreeNode *left;
  TreeNode *right;
}

vector<int> rightView(TreeNode *root) {
  if (!root)
    return {};

  TreeNode *node;
  queue<TreeNode *> q;
  q.push(root);

  vector<int> ans;
  int n;

  while (!q.empty()) {
    n = q.size();
    for (int i = 0; i < n; ++i) {
      node = q.front();
      q.pop();

      if (node->left)
        q.push(node->left);
      if (node->right)
        q.push(node->right);

      if (i == n - 1) {
        ans.emplace_back(node->val);
      }
    }
  }
  return ans;
}

int main(int argc, char *argv[]) { return 0; }
