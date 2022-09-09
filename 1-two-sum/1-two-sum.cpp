class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        
        int size = nums.size();
        int dif;
        
        for(int i = 0; i < size; i++){
            dif = target - nums[i];
            
            //If the s
            if(m.find(dif) != m.end()){
                res.push_back(m[dif]);
                res.push_back(i);
                return res;
            }
            else{
                m[nums[i]]  = i;
            }
        }
        return res;
    }
};
