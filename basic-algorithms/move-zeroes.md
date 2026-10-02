## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Use a pointer to keep track of the position where the next non-zero element should be placed. Traverse the array and move all non-zero elements forward while keeping the zeroes at the end.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in-place and maintains the relative order of non-zero elements.