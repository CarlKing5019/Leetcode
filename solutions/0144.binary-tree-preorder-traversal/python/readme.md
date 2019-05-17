### [144\. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)

#### Solution 1: Recursion
  
  
```py
'''
 * Solution for Binary Tree Preorder Traversal (Leetcode 144)
 * https://leetcode.com/problems/binary-tree-preorder-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
'''
  
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
  
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        if root is None:
            return []
        else:
            return [root.val] + self.preorderTraversal(root.left) + self.preorderTraversal(root.right)
```  
  