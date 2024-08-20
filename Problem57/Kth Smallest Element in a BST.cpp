#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *right;
  TreeNode *left;
};

void inorder(TreeNode *root, vector<int> &ans) {
  if (root == nullptr)
    return;
  inorder(root->left, ans);
  ans.emplace_back(root->val);
  inorder(root->right, ans);
}
int kthsmallest(TreeNode *root, int k) {
  vector<int> ans;
  inorder(root, ans);
  return ans[k - 1];
}
