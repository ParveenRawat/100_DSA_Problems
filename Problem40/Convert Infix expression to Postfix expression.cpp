#include <bits/stdc++.h>

using namespace std;

int precedence(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

string infixToPostfix(string s) {
  stack<char> st;
  string res;
  for (int i = 0; i < s.length(); i++) {
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
        (s[i] >= '0' && s[i] <= '9')) {
      res += s[i];
    } else if (s[i] == '(') {
      st.push(s[i]);
    } else if (s[i] == ')') {
      while (!st.empty() && st.top() != '(') {
        res += st.top();
        st.pop();
      }
      if (!st.empty())
        st.pop();
    } else {
      while (!st.empty() && precedence(s[i]) <= precedence(st.top())) {
        res += st.top();
        st.pop();
      }
    }
  }
  return res;
}
int main(int argc, char *argv[]) { return 0; }
