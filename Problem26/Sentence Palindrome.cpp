#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
  cout << s << endl;
  for (char i : s) {
    if (!isalnum(i))
      s.erase(remove(s.begin(), s.end(), i), s.end());
  }
  cout << s << endl;
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1])
      return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  string s = "race , car ,   ";
  string t = "race , car ,s";
  bool ans = isPalindrome(t);
  cout << ans << endl;
  return 0;
}
