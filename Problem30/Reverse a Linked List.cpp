#include <bits/stdc++.h>
#include <vector>

using namespace std;

struct node {
  int val;
  node *next;
  node(int x) : val(x), next(nullptr) {}
};

node *reverse(node *head) {
  node *prev = nullptr;
  node *next = nullptr;
  node *curr = head;
  while (curr != nullptr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

void print(node *head) {
  while (head) {
    cout << head->val;
    head = head->next;
  }
  cout << endl;
}

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

int main(int argc, char *argv[]) {
  vector<int> myarr = {1, 2, 3, 4, 5, 6};
  node *head = arrtolist(myarr);
  print(head);
  head = reverse(head);
  print(head);
  return 0;
}
