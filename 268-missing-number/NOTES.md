sort(nums.begin(), nums.end());
int n = nums.size();
int i;
for(i=0 ; i<=n ; i++){
if(i == nums[i])
continue;
else
break;
}
return i;