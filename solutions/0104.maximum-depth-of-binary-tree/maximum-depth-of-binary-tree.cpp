<<<<<<< HEAD:solutions/0104.maximum-depth-of-binary-tree/cpp/readme.md
### [104\. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

#### Solution 1: Recursion

@import "solution1.cpp"
=======
/*
 * Solution for Maximum Depth of Binary Tree (Leetcode 104)
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

>>>>>>> abba729e885f9162acef8dcb0694a32136dee15d:solutions/0104.maximum-depth-of-binary-tree/maximum-depth-of-binary-tree.cpp
