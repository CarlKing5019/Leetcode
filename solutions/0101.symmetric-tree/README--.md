 ### [101\. Symmetric Tree](https://leetcode.com/problems/symmetric-tree/ )
  
  
Difficulty: **Easy**
  
  
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
  
For example, this binary tree `[1,2,2,3,4,4,3]` is symmetric:
  
```
    1
   / \
  2   2
 / \ / \
3  4 4  3
```
  
But the following `[1,2,2,null,3,null,3]` is not:
  
```
    1
   / \
  2   2
   \   \
   3    3
```
  
**Note:**  
Bonus points if you could solve it both recursively and iteratively.
  
  
  
#### Solution 1: Recursion
  
  
```cpp
/*
 * Solution for Symmetric Tree (Leetcode 101)
 * https://leetcode.com/problems/symmetric-tree/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
 */
  
  
class Solution {
private:
    bool isSymmetrics(TreeNode* root_a, TreeNode* root_b) {
        if (root_a && root_b) {
            return root_a->val == root_b->val && 
                   isSymmetrics(root_a->left, root_b->right) && 
                   isSymmetrics(root_a->right, root_b->left);
        } else {
            return !root_a && !root_b;
        }
    }
  
  
public:
    bool isSymmetric(TreeNode* root) {
        return isSymmetrics(root, root);
    }
};
```  
  