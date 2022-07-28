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
    
//     void PreOrder(TreeNode* rt, vector<int>& ans){
//         if(rt == NULL)
//             return;
        
//         ans.push_back(rt->val);
//         PreOrder(rt->left, ans);
//         PreOrder(rt->right, ans);
//     }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        // PreOrder(root, ans);
        // return ans;
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            ans.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return ans;
    }
};