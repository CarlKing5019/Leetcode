/*
 * Solution for Binary Tree Level Order Traversal (Leetcode 102)
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
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
            // Add a new sub-list in result when a new level comes out.
            result.push_back(vector<int> {});      
        }
        // Push values into sub-list.
        result[level].push_back(root->val);        
        levelOrderRecur(result, root->left, level + 1);
        levelOrderRecur(result, root->right, level + 1);
    }
};




/*
 * Solution for Binary Tree Level Order Traversal (Leetcode 102)
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
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
            // Add a new sub-list in result when a new level comes out.
            result.push_back(vector<int> {});      
        }
        // Push values into sub-list.
        result[level].push_back(root->val);        
        levelOrderRecur(result, root->left, level + 1);
        levelOrderRecur(result, root->right, level + 1);
    }
};



/*
 * Solution for Binary Tree Level Order Traversal (Leetcode 102)
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 * Time Complexity: O(n)
 * Space Complexity: O(h)
 * Idea: Recursion
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
            // Add a new sub-list in result when a new level comes out.
            result.push_back(vector<int> {});      
        }
        // Push values into sub-list.
        result[level].push_back(root->val);        
        levelOrderRecur(result, root->left, level + 1);
        levelOrderRecur(result, root->right, level + 1);
    }
};