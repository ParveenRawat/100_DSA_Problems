#include <bits/stdc++.h>

using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};
bool validate(TreeNode *node, TreeNode *&prev) {
  if (node == NULL)
    return true;
  if (!validate(node->left, prev))
    return false;
  if (prev != NULL && prev->val >= node->val)
    return false;
  prev = node;
  return validate(node->right, prev);
}
bool isValidBST(TreeNode *root) {
  TreeNode *prev = NULL;
  return validate(root, prev);
}
