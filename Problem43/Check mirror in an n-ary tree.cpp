#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left = nullptr;
  TreeNode *right = nullptr;
};

bool check(TreeNode *left, TreeNode *right) {
  if (!left && !right)
    return true;

  if (!left || !right)
    return false;

  if (left->val == right->val)
    return check(left->left, right->right);

  return false;
}

bool checkMirror(TreeNode *root) {
  if (!root)
    return true;
  return check(root->left, root->right);
}
