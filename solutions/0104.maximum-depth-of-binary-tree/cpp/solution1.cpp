/*
 * Solution for Maximum Depth of Binary Tree (Leetcode 104)
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
 */


class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};