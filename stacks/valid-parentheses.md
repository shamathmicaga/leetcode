## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Use a stack to store opening brackets. Whenever a closing bracket appears, check whether it matches the most recent opening bracket. The string is valid if all brackets are matched correctly.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

A stack is useful because brackets must be closed in the reverse order in which they are opened.