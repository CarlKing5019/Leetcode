'''
 * Solution for Binary Tree Inorder Traversal (Leetcode 94)
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
'''

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        if root is None:
            return []
        else:
            return self.inorderTraversal(root.left) + [root.val] + self.inorderTraversal(root.right)