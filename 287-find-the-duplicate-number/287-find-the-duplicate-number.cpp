class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        vector<int> freq(size, 0);
        
        int i;
        for(i=0; i<size; i++){
            if(freq[nums[i]] == 1)
                return nums[i];
            else
                freq[nums[i]] = 1;
        }
        return 0;
    }
};