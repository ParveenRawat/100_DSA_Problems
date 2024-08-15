#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *tree(int ps, int pe, int is, int ie, vector<int> &pr, vector<int> &in,
               unordered_map<int, int> &mp) {
  if (ps > pe || is > ie)
    return NULL;
  TreeNode *root = new TreeNode(pr[ps]);
  int inRoot = mp[pr[ps]];
  int numl = inRoot - is;
  root->left = tree(ps + 1, ps + numl, is, inRoot - 1, pr, in, mp);
  root->right = tree(ps + numl + 1, pe, inRoot + 1, ie, pr, in, mp);
  return root;
}

TreeNode *buildTree(vector<int> &pr, vector<int> &in) {
  unordered_map<int, int> mp;
  for (int i = 0; i < in.size(); i++)
    mp[in[i]] = i;
  return tree(0, pr.size() - 1, 0, in.size() - 1, pr, in, mp);
}

int main(int argc, char *argv[]) {
  vector<int> preorder = {7, 3, 8, 9, 5, 4, 1, 2};
  vector<int> inorder = {8, 3, 9, 7, 1, 4, 2, 5};
  TreeNode *root = buildTree(preorder, inorder);
  return 0;
}
