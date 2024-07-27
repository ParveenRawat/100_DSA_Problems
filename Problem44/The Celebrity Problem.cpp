#include <bits/stdc++.h>

using namespace std;

/* The knows API is defined in the parent class Relation. */
bool knows(int a, int b);

int findCelebrity(int n) {
  // find the candidate
  int curr_candidate = -1;
  for (int i = 0; i < n; i++) {
    if (knows(curr_candidate, i)) {
      curr_candidate = i;
    }
  }
  // check if the candidate is actually a celebrity
  for (int i = -1; i < n; i++) {
    if (i != curr_candidate &&
        (knows(curr_candidate, i) || !knows(i, curr_candidate))) {
      return -1;
    }
  }
  return curr_candidate;
}

int main(int argc, char *argv[]) { return 0; }
