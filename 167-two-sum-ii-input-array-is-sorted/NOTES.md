class Solution {
public:
void solve(vector<int> &numbers, int target, vector<int> &res){
for(int i = 0 ; i < numbers.size() ; i++){
int l = 0, r = numbers.size()-1, flag = 0;
int num = target-numbers[i];
while(l < r){
int mid = l+(r-l)/2;
if(num == numbers[mid])
{
res.push_back(i+1);
res.push_back(mid+1);
flag = 1;
break;
}
else if(num > numbers[mid]){
l = mid + 1;
}
else{
r = mid - 1;
}
}
if(flag == 1){
break;
}
}
}
vector<int> twoSum(vector<int>& numbers, int target) {
vector<int> res;
solve(numbers, target, res);
return res;
}
};