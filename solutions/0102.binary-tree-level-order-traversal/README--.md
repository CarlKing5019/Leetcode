### [102\. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/ )
  
  
Difficulty: **Medium**
  
  
Given a binary tree, return the _level order_ traversal of its nodes' values. (ie, from left to right, level by level).
  
For example:  
Given binary tree `[3,9,20,null,null,15,7]`,  
  
```
    3
   / \
  9  20
    /  \
   15   7
```
  
return its level order traversal as:  
  
```
[
  [3],
  [9,20],
  [15,7]
]
```
  
  
#### Solution 1: Recursion
  
  
```cpp
/*
 * Solution for Binary Tree Level Order Traversal (Leetcode 102)
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
 */
  
  
/* 
 * In this solution, we fix the level number problem in the previous solution.
 * The key point is this statement `if(level + 1 > result.size()){ result.push_back(vector<int>{})} ;`.
 * Reference: http://t.cn/EavpjkS
 */
  
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        levelOrderRecur(result, root, 0);
        return result;
    }
  
private:
    void levelOrderRecur(vector<vector<int>> &result, TreeNode *root, int level) {
        if (root == NULL) {
            return;
        }
        if (level + 1 > result.size()) {
            result.push_back(vector<int> {});      // Add a new sub-list in result when a new level comes out.
        }
        result[level].push_back(root->val);        // Push values into sub-list.
        levelOrderRecur(result, root->left, level + 1);
        levelOrderRecur(result, root->right, level + 1);
    }
};
```  
  