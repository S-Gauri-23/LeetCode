/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
            int diameter = 0;
            diameterOfTree(root, diameter);
            return diameter;
    }
    
    int diameterOfTree(TreeNode* node, int& diameter){
        if(node == NULL) return 0;
        
        int leftHeight = diameterOfTree(node->left, diameter);
        int rightHeight = diameterOfTree(node->right, diameter);
        diameter = max(diameter, leftHeight + rightHeight);
        return max(leftHeight, rightHeight) + 1;        
    }
};