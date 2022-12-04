class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        if( n<2 ){ return 0; }
        vector<long long int> left(n,0) , right(n,0);
        for( int i=n-1; i>=0 ; i-- ){
            if( i == n-1 ){ right[i] = nums[i]; continue; }
            right[i] = right[i+1] + nums[i];
        }
        for( int i=0 ; i< n ; i++ ){
            if( i == 0 ){ left[i] = nums[i]; continue; }
            left[i] = left[i-1] + nums[i];
        }
        pair<int,int> minval = {INT_MAX,-1};
        for( int i=0 ; i<n ; i++ ){
            int temp;
            if( i == n-1 ){ temp = fabs(left[i]/(i+1) - 0 ); }
            else{ temp = fabs(left[i]/(i+1) - (right[i+1])/(n-i-1)); }
            if( temp < minval.first ){
                minval.first = temp;
                minval.second = i;
            }
        }
        return minval.second;
    }
};