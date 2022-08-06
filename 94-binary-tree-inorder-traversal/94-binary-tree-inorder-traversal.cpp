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
    
//     void InOrder(TreeNode* root, vector<int>& ans){
//         if(root == NULL)
//             return;
        
//         InOrder(root->left, ans);
//         ans.push_back(root->val);
//         InOrder(root->right, ans);
//     }
    
        // InOrder(root, ans);
        // return ans;
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root == NULL) return ans;
        
        stack<TreeNode*> st;
        TreeNode* node = root;
        
        while(true){
            if(node){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty()) break;
                
                node = st.top();
                st.pop();
                
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};