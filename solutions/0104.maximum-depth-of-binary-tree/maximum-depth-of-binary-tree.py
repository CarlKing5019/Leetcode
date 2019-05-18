<<<<<<< HEAD:solutions/0104.maximum-depth-of-binary-tree/python/readme.md
### [104\. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

#### Solution 1: Recursion

@import "solution1.py"
=======
'''
 * Solution for Maximum Depth of Binary Tree (Leetcode 104)
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
'''


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1 if root else 0

>>>>>>> abba729e885f9162acef8dcb0694a32136dee15d:solutions/0104.maximum-depth-of-binary-tree/maximum-depth-of-binary-tree.py
