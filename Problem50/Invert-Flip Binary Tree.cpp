#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};

TreeNode *invert(TreeNode *root) {
  if (!root)
    return root;

  invert(root->left);
  invert(root->right);

  TreeNode *rightChild = root->right;
  root->right = root->left;
  root->left = rightChild;

  return root;
}

int main(int argc, char *argv[]) { return 0; }
