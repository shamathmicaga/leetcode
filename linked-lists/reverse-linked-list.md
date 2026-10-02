## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

Use three pointers to reverse the links between nodes. At each step, store the next node, reverse the current node's pointer, and then move forward.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The previous node pointer is used to reverse the direction of each link.