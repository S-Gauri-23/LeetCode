class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int size = nums.size();
        
        if(size == 0) return 0;
        
        for(int j=i+1; j<size ; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};