#include <bits/stdc++.h>

using namespace std;

struct node {
  int val;
  node *next;
  node(int x) : val(x), next(nullptr) {}
};

node *arrtolist(vector<int> arr) {
  node *head = new node(arr[0]);
  node *temp = head;
  for (int i = 1; i < arr.size(); i++) {
    node *newnode = new node(arr[i]);
    temp->next = newnode;
    temp = newnode;
  }
  return head;
}

bool cyclecheck(node *head) {
  if (head == nullptr) {
    return false;
  }
  node *fast = head;
  node *slow = head;

  while (slow->next && fast->next->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      return true;
    }
  }
  return false;
}

int main(int argc, char *argv[]) {
  vector<int> myarr = {1, 2, 3, 4, 5, 6};
  node *head = arrtolist(myarr);
  cout << cyclecheck(head) << endl;

  // making a cycle for testing
  head->next->next->next = head;

  cout << cyclecheck(head) << endl;
  return 0;
}
