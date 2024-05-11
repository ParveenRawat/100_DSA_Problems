#include <bits/stdc++.h>

using namespace std;

bool anagram(string t, string s) {
  int n = s.size();
  int m = t.size();

  if (m != n) {
    return false;
  }
  pmr::unordered_map<char, int> mp;
  for (const char ch : s) {
    mp[ch]++;
  }
  for (const char ch : t) {
    mp[ch]--;
  }
  for (auto [a, b] : mp) {
    if (b == 0) {
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[]) {

  string s = "hello";
  string t = "llohe";
  bool ans = anagram(s, t);
  cout << "The ans is : " << ans << endl;
  return 0;
}
