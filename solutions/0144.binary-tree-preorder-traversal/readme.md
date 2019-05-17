### [144\. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)

Difficulty: **Medium**
  
  
Given a binary tree, return the _preorder_ traversal of its nodes' values.
  
**Example:**
  
```
Input: [1,null,2,3]
   1
    \
     2
    /
   3
  
Output: [1,2,3]
```
  
**Follow up:** Recursive solution is trivial, could you do it iteratively?
  
  
#### Solution 1: Recursion
  
  
```cpp
/*
 * Solution for Binary Tree Preorder Traversal (Leetcode 144)
 * https://leetcode.com/problems/binary-tree-preorder-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
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
    void preorderTraversalRecur(TreeNode* root, vector<int>& res) {
        if (root == NULL) {
            return;
        }
        res.push_back(root->val);
        preorderTraversalRecur(root->left, res);
        preorderTraversalRecur(root->right, res);
    }
  
  
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorderTraversalRecur(root, res);
        return res;
    }
};
```  
  