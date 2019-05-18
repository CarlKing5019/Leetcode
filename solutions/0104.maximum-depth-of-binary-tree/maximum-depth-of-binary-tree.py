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

