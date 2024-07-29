#include <bits/stdc++.h>

using namespace std;

int longestValidParentheses(string s) {
  stack<int> stk;
  stk.push(-1);
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(')
      stk.push(i);
    else {
      if (stk.size() == 1)
        stk.top() = i;
      else {
        stk.pop();
        ans = max(ans, i - stk.top());
      }
    }
  }
  return ans;
}

int int main(int argc, char *argv[]) {
  string s = ")()())";
  int ans = longestValidParentheses(s);
  cout << ans << endl;
  return 0;
}
