#include <bits/stdc++.h>

using namespace std;

unordered_map<string, vector<string>>
anagramsTogether(vector<string> anagrams) {

  unordered_map<string, vector<string>> ans;
  for (auto i : anagrams) {
    string s = i;
    sort(s.begin(), s.end());
    ans[s].push_back(i);
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<string> anagrams = {"eat", "tea", "tan", "ate", "nat", "bat"};
  unordered_map<string, vector<string>> ans = anagramsTogether(anagrams);
  for (auto [a, b] : ans) {
    cout << a << " ---> ";
    for (auto j : b) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
