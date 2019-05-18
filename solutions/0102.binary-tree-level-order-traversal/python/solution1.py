'''
 * Solution for Binary Tree Level Order Traversal (Leetcode 102)
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * Idea: Using list comprehension in pythonic way
 * Reference: http://t.cn/Eav6OiS
'''


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrder(self, root):
        ans, level = [], [root]
        while root and level:
            ans.append([node.val for node in level])
            level = [leaf for node in level for leaf in (node.left, node.right) if leaf]
        return ans