#include <bits/stdc++.h>
using namespace std;
bool validParenthesis(string s) {

  stack<char> stk;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
      stk.push(s[i]);
    } else if (s[i] == ')' && !stk.empty() && stk.top() == '(') {
      stk.pop();
    } else if (s[i] == '}' && !stk.empty() && stk.top() == '{') {
      stk.pop();
    } else if (s[i] == ']' && !stk.empty() && stk.top() == '[') {
      stk.pop();
    } else {
      return false;
    }
  }
  return stk.empty();
}

int main(int argc, char *argv[]) {
  string s = "(()[]{}";

  if (validParenthesis(s)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
