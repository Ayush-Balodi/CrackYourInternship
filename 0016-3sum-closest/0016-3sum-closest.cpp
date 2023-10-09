class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n=nums.size(), sum=0;
        long long bestSum=INT_MAX;
        sort( nums.begin(), nums.end());
        for( int i=0 ; i<n-2 ; i++ ){
            
            int l=i+1, h=n-1;
            while( l<h ){
                sum = nums[i] + nums[l] + nums[h];
                if( abs(target-sum) <= abs(target-bestSum) ){
                    bestSum = sum;
                }
                if( sum < target ){
                    l++;
                }
                else{
                    h--;
                }
            }
        } 
        return bestSum;
    }
};