class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        double maxSum=INT_MIN, sum=0.0;
        for( int i=0 ; i<n ; i++ ){
            if( i<k ){
                sum+=nums[i];
            }
            else{
                maxSum = max(maxSum, sum);
                sum+=nums[i]-nums[i-k];
            }
        }
        maxSum = max(maxSum, sum);
        return maxSum/k;
    }
};