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
    bool isBalanced(TreeNode* root) {
        return DFSHeight(root) != -1;
    }
    
    int DFSHeight(TreeNode* node){
        if(node == NULL) return 0;
        
        int leftHeight = DFSHeight(node->left);
        if(leftHeight == -1) return -1;
        
        int rightHeight = DFSHeight(node->right);
        if(rightHeight == -1) return -1;
        
        if(abs(rightHeight - leftHeight) > 1) return -1;
        
        return max(rightHeight, leftHeight) + 1;
    }
};