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

node *helper(node *head, int num, int &flag) {
  if (!head) {
    return head;
  }
  head->next = helper(head->next, num, flag);
  if (head->val == num && flag == 0) {
    flag = 1;
    return head->next;
  } else {
    return head;
  }
}

node *deleteLastOccurence(node *head, int num) {
  int flag = 0;
  return helper(head, num, flag);
}

int main(int argc, char *argv[]) {
  vector<int> arr = {5, 1, 2, 3, 5, 4, 6, 5, 7};
  node *head = arrtolist(arr);
  printlist(head);

  head = deleteLastOccurence(head, 5);

  printlist(head);

  return 0;
}
