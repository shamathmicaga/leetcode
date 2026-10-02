## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

Use a hash map to store numbers that have already been visited along with their indices. For each number, check whether its required complement already exists in the hash map.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The hash map helps find the required pair efficiently without using nested loops.