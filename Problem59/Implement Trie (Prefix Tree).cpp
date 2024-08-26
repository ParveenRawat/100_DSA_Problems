
#include <bits/stdc++.h>

using namespace std;

class TrieNode {
public:
  TrieNode *child[26];
  bool isWord = false;
  TrieNode() {
    for (int i = 0; i < 26; ++i) {
      child[i] = nullptr;
    }
  }
};
class Trie {
private:
  TrieNode *root;

public:
  Trie() { root = new TrieNode(); }

  void insert(string word) {
    TrieNode *ptr = root;
    for (int i = 0; i < word.size(); ++i) {
      int curr = word[i] - 'a';
      if (!ptr->child[curr])
        ptr->child[curr] = new TrieNode;
      ptr = ptr->child[curr];
    }
    ptr->isWord = true;
  }

  bool search(string word) {
    TrieNode *curr = root;
    for (int i = 0; i < word.size(); ++i) {
      int index = word[i] - 'a';
      if (!curr->child[index])
        return false;
      curr = curr->child[index];
    }
    return curr->isWord;
  }

  bool startsWith(string word) {
    TrieNode *curr = root;
    for (int i = 0; i < word.size(); ++i) {
      int index = word[i] - 'a';
      if (!curr->child[index])
        return false;
      curr = curr->child[index];
    }
    return curr;
  }
};
