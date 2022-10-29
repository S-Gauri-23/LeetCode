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
    vector<int> postorderTraversal(TreeNode* root) {
        // Using two stacks
        vector<int> res;
        stack<TreeNode*> st1, st2;
        TreeNode* temp;
        
        if(!root) return res;
        
        st1.push(root);
        while(!st1.empty()){
            temp = st1.top();
            st1.pop();
            st2.push(temp);
            
            if(temp->left)
                st1.push(temp->left);
            
            if(temp->right)
                st1.push(temp->right);   
        }
        
        while(!st2.empty()){
            temp = st2.top();
            st2.pop();
            res.push_back(temp->val);
        }
        return res;
    }
};