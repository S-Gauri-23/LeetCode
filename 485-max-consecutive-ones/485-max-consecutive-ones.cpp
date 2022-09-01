class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOneCount = 0, count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                
                if(count > maxOneCount)
                    maxOneCount = count;
            }
            else
                count = 0;
        }
        return maxOneCount;
    }
};