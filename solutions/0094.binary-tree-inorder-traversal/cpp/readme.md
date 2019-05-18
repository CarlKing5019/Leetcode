### [94\. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)



#### Solution 1


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



#### Solution 2


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



#### Solution 3


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

