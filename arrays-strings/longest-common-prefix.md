## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Compare the characters of the strings from left to right. Continue while all strings have the same character at the current position.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common starting sequence, the result is an empty string.