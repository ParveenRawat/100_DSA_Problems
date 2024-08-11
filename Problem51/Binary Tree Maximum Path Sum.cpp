#include <bits/stdc++.h>
#include <climits>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};

int maxSum = INT_MIN;

int maxGain(TreeNode *root) {

  if (!root)
    return 0;
  int l = max(maxGain(root->left), 0);
  int r = max(maxGain(root->right), 0);
  int newPrice = root->val + l + r;
  maxSum = max(maxSum, newPrice);
  return root->val + max(l, r);
}

int maxPathSum(TreeNode *root) {
  maxGain(root);
  return maxSum;
}

int main(int argc, char *argv[]) { return 0; }
