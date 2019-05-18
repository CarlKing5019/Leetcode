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

