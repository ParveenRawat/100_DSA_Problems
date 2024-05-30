#include <bits/stdc++.h>

using namespace std;

int palindromicSubstringCount(string s) {
  int n = s.size(), ans = 0, N = 2 * n;
  for (int i = 0; i < N; i++) {
    for (int left = i / 2, right = i / 2 + (i & 1);
         left >= 0 && right < n && s[left] == s[right]; left--, right++) {
      ans++;
    }
  }
  return ans;
}

int main(int argc, char *argv[]) {
  string s = "racacarerver";
  int ans = palindromicSubstringCount(s);
  cout << ans << endl;
  return 0;
}
