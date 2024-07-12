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

vector<int> numbertoarray(int n) {
  vector<int> ans;
  while (n > 0) {
    ans.push_back(n % 10);
    n = n / 10;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

int listtonum(node *head) {
  if (!head)
    return 0;

  int ans = 0;
  while (head) {
    ans *= 10;
    ans += head->val;
    head = head->next;
  }
  return ans;
}

node *add1(node *head) {
  int num = listtonum(head);
  num += 1;

  vector<int> arr = numbertoarray(num);
  head = arrtolist(arr);
  return head;
}

int main(int argc, char *argv[]) {
  int n = 45999;
  vector<int> arr = numbertoarray(n);

  node *head = arrtolist(arr);
  printlist(head);

  node *newnum = add1(head);

  printlist(newnum);

  return 0;
}
