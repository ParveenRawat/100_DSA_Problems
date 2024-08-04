#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};

bool sameStructure(TreeNode *root1, TreeNode *root2) {
  if (!root1 && !root2)
    return true;
  if (!root1 && root2 || root1 && !root2)
    return false;
  if (root1->val != root2->val)
    return false;
  return sameStructure(root1->left, root2->left) &&
         sameStructure(root1->right, root2->right);
}

int main(int argc, char *argv[]) { return 0; }
