#include <bits/stdc++.h>

using namespace std;

vector<int> topkfreq(vector<int> input, int k) {
  vector<int> ans;
  map<int, int> mp;
  for (auto i : input) {
    mp[i]++;
  }
  vector<pair<int, int>> v;
  for (auto item : mp) {
    v.push_back({item.second, item.first});
  }
  sort(v.rbegin(), v.rend());
  for (int i = 0; i < v.size() && k > 0; i++) {
    ans.emplace_back(v[i].second);
    k--;
  }
  return ans;
}

int main(int argc, char *argv[]) {

  vector<int> input = {1, 1, 1, 2, 2, 3, 4};
  int k = 2;
  vector<int> ans = topkfreq(input, k);

  for (auto i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
