'''
 * Solution for Binary Tree Postorder Traversal (Leetcode 145)
 * https://leetcode.com/problems/binary-tree-postorder-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
'''


class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        if root is None:
            return []
        else:
            return self.postorderTraversal(root.left) + self.postorderTraversal(root.right) + [root.val]