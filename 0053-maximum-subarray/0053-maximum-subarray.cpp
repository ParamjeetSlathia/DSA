class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count = 0, maxSum = INT_MIN;
        for(auto x:nums){
            count = count + x;
            maxSum = max(count,maxSum);
        
        if(count<0){
            count = 0;
        }
       
    }
     return maxSum;
    
}
};