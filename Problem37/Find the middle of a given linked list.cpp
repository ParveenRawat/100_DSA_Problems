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

node *middleOfList(node *head) {
  node *slow = head;
  node *fast = head;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  node *head = arrtolist(arr);
  printlist(head);

  node *middle = middleOfList(head);

  cout << middle->val << endl;

  return 0;
}
