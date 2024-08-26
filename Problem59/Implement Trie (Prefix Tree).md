# SOLUTION

[Implement Trie](https://leetcode.com/problems/implement-trie-prefix-tree/)

## Method-1 : standard implementation of Trie

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

Trie, also known as a prefix tree, is a data structure used for efficient retrieval of strings in a set of strings.
It is particularly useful when we need to perform prefix searches on the set of strings. The intuition behind Trie
is to store the strings in a tree-like data structure where each node in the tree represents a character in the string.
The edges between nodes represent characters of the string, and each node may have multiple children nodes corresponding
to different characters.

The implementation provided in the code is a Trie data structure. It has a private member variable root which is the
root node of the Trie. The insert function takes a string as input and inserts it into the Trie by iterating over the
characters of the string and creating new nodes if necessary. The search function takes a string as input and returns true
if the string is present in the Trie, and false otherwise. The startsWith function takes a prefix string as input and
returns true if there is any string in the Trie that starts with the prefix, and false otherwise.
