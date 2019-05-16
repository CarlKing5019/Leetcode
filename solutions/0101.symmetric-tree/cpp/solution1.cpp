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