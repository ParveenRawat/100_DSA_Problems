#include <bits/stdc++.h>

using namespace std;

// Method 1 : using a charcter index array
// Complexity : Space Complexity : O(1) and Time Complexity : O(n)
int lengthOfLongestSubstring(string s) {
  int n = s.size();
  int maxLength = 0;
  vector<int> charIndex(128, -1);
  int left = 0;

  for (int right = 0; right < n; right++) {
    if (charIndex[s[right]] >= left) {
      left = charIndex[s[right]] + 1;
    }
    charIndex[s[right]] = right;
    maxLength = max(maxLength, right - left + 1);
  }

  return maxLength;
}

int main(int argc, char *argv[]) { return 0; }
