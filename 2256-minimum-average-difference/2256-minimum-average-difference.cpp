class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n,0);

        long long totalSum=0 , currentSum=0;
        int index;
        for( int x:nums ){
            totalSum += x;
        }

        int minval = INT_MAX;
        for( int i=0 ; i<n ; i++ ){
            currentSum += nums[i];
            int avg1 = (currentSum)/(i+1);
            if( i == n-1 ){
                if( avg1 < minval ){
                    index = n-1;
                    break;
                }else{
                    break;
                }
            }
            int avg2 = (totalSum-currentSum)/(n-i-1);

            if( fabs(avg1-avg2) < minval ){
                minval = fabs(avg1-avg2);
                index =i;
            }
        }
        return index;
    }
};