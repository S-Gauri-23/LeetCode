class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> res;
        
        for(int i = 0; i < size; i++){
            int sum = target - nums[i];
            for(int j = i+1; j < size; j++){
                if(sum == nums[j])
                {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
    
        return res;
    }
};