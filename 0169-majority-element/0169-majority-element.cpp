class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int maxVal = INT_MIN;
        
        for(int num : nums){
            map[num]++;
        }
        
        maxVal = nums[0];
        for(auto it : map){
            if(it.second > map[maxVal]){
                maxVal = it.first;
            }
        }
        return maxVal;
    }
};