#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

string serialize(TreeNode *root) {
  if (root == nullptr)
    return "#";
  return to_string(root->val) + "," + serialize(root->left) + "," +
         serialize(root->right);
}

int helper(string &data) {
  int pos = data.find(',');
  int val = stoi(data.substr(0, pos));
  data = data.substr(pos + 1);
  return val;
}

TreeNode *mydeserialize(string &data) {
  if (data[0] == '#') {
    if (data.size() > 1)
      data = data.substr(2);
    return nullptr;
  } else {
    TreeNode *node = new TreeNode(helper(data));
    node->left = mydeserialize(data);
    node->right = mydeserialize(data);
    return node;
  }
}

int main(int argc, char *argv[]) { return 0; }
