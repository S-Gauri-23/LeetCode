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