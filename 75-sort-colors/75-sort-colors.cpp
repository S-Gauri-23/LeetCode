class Solution {
public:
    void sortColors(vector<int>& arr) {
        int temp = INT_MIN;
        for(int i=0; i< arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i] > arr[j]){
                    // swap(arr[i], arr[j]);
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
                    
            }
        }
    }
};