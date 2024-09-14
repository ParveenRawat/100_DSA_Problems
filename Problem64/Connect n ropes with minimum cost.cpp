#include <bits/stdc++.h>
#include <queue>
#include <vector>

using namespace std;

int minCost(vector<int> arr) {
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i : arr) {
    pq.push(i);
  }
  int ans = 0;
  while (pq.size() > 1) {
    int j = pq.top();
    pq.pop();
    int k = pq.top();
    pq.pop();
    int l = j + k;
    ans += l;
    pq.push(l);
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {8, 3, 5, 1};
  minCost(arr);

  return 0;
}
