#include <bits/stdc++.h>
#include <vector>

using namespace std;

string commonPrefix(vector<string> words) {
  string ans = "";
  for (int i = 0; i < words[0].size(); i++) {
    for (string s : words) {
      if (i == s.size()) {
        return ans;
      }
      if (s[i] != words[0][i]) {
        return ans;
      }
    }
    ans += words[0][i];
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<string> words = {"flowers", "flow", "flock"};
  string ans = commonPrefix(words);
  cout << ans << endl;
  return 1;
}
