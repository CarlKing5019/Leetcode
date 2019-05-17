### [94\. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/ )
  
  
Difficulty: **Medium**
  
  
Given a binary tree, return the _inorder_ traversal of its nodes' values.
  
**Example:**
  
```
Input: [1,null,2,3]
   1
    \
     2
    /
   3
  
Output: [1,3,2]
```
  
**Follow up:** Recursive solution is trivial, could you do it iteratively?
  
  
#### Solution 1: Recursion
  
  
```cpp
/*
 * Solution for Binary Tree Inorder Traversal (Leetcode 94)
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
 */
  
  
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
  
  
class Solution {
private:
    void inorderTraversalRecur(TreeNode* root, vector<int>& res) {
        if (root == NULL) {
            return;
        }
        inorderTraversalRecur(root->left, res);
        res.push_back(root->val);
        inorderTraversalRecur(root->right, res);
    }
  
  
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorderTraversalRecur(root, res);
        return res;
  
    }
};
```  
  