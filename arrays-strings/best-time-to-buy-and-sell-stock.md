## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Keep track of the lowest price seen so far while traversing the array. For each price, calculate the possible profit and update the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold, so the minimum price is updated while moving from left to right.