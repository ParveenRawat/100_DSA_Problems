#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};

bool isSame(TreeNode *root1, TreeNode *root2) {
  if (!root1 && !root2)
    return true;

  if (!root1 || !root2)
    return false;

  if (root1->val != root2->val)
    return false;
  return isSame(root1->right, root2->right) && isSame(root1->left, root2->left);
}

bool isSubtree(TreeNode *root, TreeNode *subRoot) {
  if (!root)
    return false;
  if (isSame(root, subRoot))
    return true;
  return isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot);
}

int main(int argc, char *argv[]) { return 0; }
