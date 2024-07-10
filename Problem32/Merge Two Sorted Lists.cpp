#include <bits/stdc++.h>
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

void printlist(node *head) {
  while (head->next) {
    cout << head->val << "-->";
    head = head->next;
  }
  cout << head->val << endl;
}

node *merge(node *head1, node *head2) {
  node *final;
  if (head1->val < head2->val) {
    final = head1;
    head1 = head1->next;
  } else {
    final = head2;
    head2 = head2->next;
  }
  node *ans = final;

  while (head1 && head2) {
    if (head1->val <= head2->val) {
      final->next = head1;
      head1 = head1->next;
      final = final->next;
    } else {
      final->next = head2;
      head2 = head2->next;
      final = final->next;
    }
  }
  if (head1) {
    final->next = head1;
  }
  if (head2) {
    final->next = head2;
  }
  return ans;
}

int main(int argc, char *argv[]) {
  vector<int> arr1 = {1, 2, 3, 4, 5, 6};
  vector<int> arr2 = {2, 3, 5, 6, 7, 8};
  node *head1 = arrtolist(arr1);
  printlist(head1);
  node *head2 = arrtolist(arr2);
  printlist(head2);
  node *final = merge(head1, head2);
  printlist(final);

  return 0;
}
