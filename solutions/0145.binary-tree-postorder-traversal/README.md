### [145\. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/ )
  
  
Difficulty: **Hard**
  
  
Given a binary tree, return the _postorder_ traversal of its nodes' values.
  
**Example:**
  
```
Input: [1,null,2,3]
   1
    \
     2
    /
   3
  
Output: [3,2,1]
```
  
**Follow up:** Recursive solution is trivial, could you do it iteratively?
  
  
  
#### Solution 1: Recursion
  
  
```cpp
/*
 * Solution for Binary Tree Postorder Traversal (Leetcode 145)
 * https://leetcode.com/problems/binary-tree-postorder-traversal/
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
    void postorderTraversalRecur(TreeNode* root, vector<int>& res) {
        if (root == NULL) {
            return;
        }
        postorderTraversalRecur(root->left, res);
        postorderTraversalRecur(root->right, res);
        res.push_back(root->val);
    }
  
  
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postorderTraversalRecur(root, res);
        return res;
    }
};
```  
  