class Solution {
public:
int missingNumber(vector<int>& nums) {
int missingNumber(vector<int>& nums) {
int n = nums.size(), ans = 0, i = 0;
sort(nums.begin(), nums.end());
while(i < n){
if(i != nums[i]){
ans = i;
return ans;
}
i++;
}
if(i == n){ans = i;}
return ans;
}
}
};
​