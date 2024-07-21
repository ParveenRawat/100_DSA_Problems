#include <bits/stdc++.h>

using namespace std;

void helper(stack<int> &stk, int size, int depth) {
  if (depth == size / 2) {
    stk.pop();
    return;
  }
  int curr = stk.top();
  stk.pop();
  helper(stk, size, depth + 1);
  stk.push(curr);
}

void deleteMiddleElement(stack<int> &stk) { helper(stk, stk.size(), 0); }

void printStack(stack<int> stk) {
  while (stk.size()) {
    cout << stk.top() << " ";
    stk.pop();
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  stack<int> stk;
  stk.push(1);
  stk.push(2);
  stk.push(3);
  stk.push(4);
  stk.push(5);
  stk.push(6);

  printStack(stk);

  deleteMiddleElement(stk);
  printStack(stk);

  return 0;
}
