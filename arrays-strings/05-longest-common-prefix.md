## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Compare characters at the same position in all strings until a mismatch is found.

### Complexity

- Time: O(n*m)
- Space: O(1)

### Notes

If the first characters do not match, the common prefix is empty.
