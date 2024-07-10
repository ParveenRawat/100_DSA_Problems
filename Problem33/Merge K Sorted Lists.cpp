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

node *mergeall(vector<node *> alllist) {
  node *first = alllist[0];
  node *sec = alllist[1];

  for (int i = 2; i < alllist.size(); i++) {
    first = merge(first, sec);
    sec = alllist[i];
  }
  merge(first, sec);
  return first;
}

int main(int argc, char *argv[]) {
  vector<int> arr1 = {1, 2, 3, 4, 5, 6};
  vector<int> arr2 = {2, 3, 5, 6, 7, 8};
  vector<int> arr3 = {3, 5, 6, 7, 19};
  vector<int> arr4 = {2, 5, 7, 8, 12, 13};

  node *head1 = arrtolist(arr1);
  printlist(head1);
  node *head2 = arrtolist(arr2);
  printlist(head2);
  node *head3 = arrtolist(arr3);
  printlist(head3);
  node *head4 = arrtolist(arr4);
  printlist(head4);
  vector<node *> alllist = {head1, head2, head3, head4};
  node *final = mergeall(alllist);
  printlist(final);

  return 0;
}
