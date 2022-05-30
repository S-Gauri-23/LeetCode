class Solution {
public:
    
    void findSubsets(int ind, vector<int>& nums,vector<vector<int>>& ans, vector<int>& ds){
        ans.push_back(ds);
        
        for(int i = ind ; i < nums.size() ; i++){
            ds.push_back(nums[i]);
            findSubsets(i+1, nums, ans, ds);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        findSubsets(0, nums, ans, ds);
        return ans;
    }
};