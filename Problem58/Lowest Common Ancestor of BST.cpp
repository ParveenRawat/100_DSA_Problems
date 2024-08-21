#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};

void pathTo(TreeNode *root, vector<TreeNode *> &ans, int val) {
  if (root == nullptr)
    return;

  ans.push_back(root);

  if (root->val == val)
    return;
  if (root->val > val) {
    pathTo(root->left, ans, val);
  } else {
    pathTo(root->right, ans, val);
  }
}

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
  vector<TreeNode *> pathtop;
  vector<TreeNode *> pathtoq;

  pathTo(root, pathtop, p->val);
  pathTo(root, pathtoq, q->val);

  TreeNode *ans;

  int size = min(pathtoq.size(), pathtop.size());
  for (int i = 0; i < size; ++i) {
    if (pathtoq[i] != pathtop[i]) {
      break;
    }
    ans = pathtop[i];
  }

  return ans;
}
