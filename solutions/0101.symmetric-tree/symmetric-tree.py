'''
 * Solution for Symmetric Tree (Leetcode 101)
 * https://leetcode.com/problems/symmetric-tree/
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
    def isSymmetrics(self, root_a: TreeNode, root_b: TreeNode) -> bool:
        if root_a and root_b:
            return root_a.val == root_b.val and \
                   self.isSymmetrics(root_a.left, root_b.right) and \
                   self.isSymmetrics(root_a.right, root_b.left)
        else:
            return not root_a and not root_b

    
    def isSymmetric(self, root: TreeNode) -> bool:
        return self.isSymmetrics(root, root)

