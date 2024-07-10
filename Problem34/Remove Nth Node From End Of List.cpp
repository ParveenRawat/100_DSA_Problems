#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>

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

int listsize(node *head) {
  int size = 0;
  while (head) {
    size++;
    head = head->next;
  }
  return size;
}

void removeFromEnd(node *head, int n) {
  int size = listsize(head);
  if (size < n) {
    cout << "Input fault" << endl;
    return;
  }
  node *prev = head;
  node *curr = head;
  for (int i = 0; i < size - n; i++) {
    prev = curr;
    curr = head->next;
    head = head->next;
  }
  prev->next = curr->next;
};

void printlist(node *head) {
  while (head->next) {
    cout << head->val << "-->";
    head = head->next;
  }
  cout << head->val << endl;
}
int main(int argc, char *argv[]) {
  vector<int> arr1 = {1, 2, 3, 4, 5, 6};
  node *head1 = arrtolist(arr1);
  printlist(head1);
  removeFromEnd(head1, 3);
  printlist(head1);
  return 0;
}
