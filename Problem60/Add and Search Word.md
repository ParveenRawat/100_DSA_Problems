# SOLUTION

[Add And Search Word](https://leetcode.com/problems/design-add-and-search-words-data-structure/)

## Method-1 : using trie

### Complexity : Time Complexity : O(n) and space Complexity : O(n)

This is a vanilla application of Trie. The main difficulty lies in how to deal with the . character. I use a naive solution
in this place: each time when I reach a ., I simply traverse all the children of the current node and recursively search
the remaining substring starting from each of those children.
