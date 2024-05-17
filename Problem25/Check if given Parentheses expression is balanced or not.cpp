#include <bits/stdc++.h>

using namespace std;

// Method 1 : using a stack
// Complexity : TimeCompexity : O(N) | Space Complexity : O(N)
bool balanced(string s) {
  stack<char> st;
  for (char ch : s) {
    if (ch == '(' || ch == '{' || ch == '[') {
      st.push(ch);
    } else {
      if (st.empty() || ch == ')' && st.top() != '(' ||
          ch == '{' && st.top() != '{' || ch == ']' && st.top() != '[') {
        return false;
      }
      st.pop();
    }
  }
  return st.empty();
}

int main() {
  string s = "()[]{{}}[{]";
  cout << balanced(s) << endl;

  return 0;
}
