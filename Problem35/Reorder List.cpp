#include <algorithm>
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

void printlist(node *head) {
  while (head->next) {
    cout << head->val << "-->";
    head = head->next;
  }
  cout << head->val << endl;
}

// in : 1->2->3->4->5->6->7
// out : 1->7->2->6->3->5->4
void reorder(node *head) {
  if (!head)
    return;

  node *tmp = head, *half = head, *prev = NULL;
  while (tmp->next && tmp->next->next) {
    tmp = tmp->next->next;
    half = half->next;
  }

  if (tmp->next)
    half = half->next;

  while (half) {
    tmp = half->next;
    half->next = prev;
    prev = half;
    half = tmp;
  }
  half = prev;

  while (head && half) {
    tmp = head->next;
    prev = half->next;
    head->next = half;
    half->next = tmp;
    head = tmp;
    half = prev;
  }

  if (head && head->next)
    head->next->next = NULL;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  node *head = arrtolist(arr);
  printlist(head);
  reorder(head);
  printlist(head);

  return 0;
}
