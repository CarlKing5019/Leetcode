  
### [104\. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/ )
  
  
Difficulty: **Easy**
  
  
Given a binary tree, find its maximum depth.
  
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
  
**Note:** A leaf is a node with no children.
  
**Example:**
  
Given binary tree `[3,9,20,null,null,15,7]`,
  
```
    3
   / \
  9  20
    /  \
   15   7
```
  
return its depth = 3.
  
  
  
#### Solution 1: Recursion
  
  
```cpp
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
```  
  