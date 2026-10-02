## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers representing the left and right boundaries of the search range. Find the middle element and eliminate half of the search space depending on whether the target is smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted.