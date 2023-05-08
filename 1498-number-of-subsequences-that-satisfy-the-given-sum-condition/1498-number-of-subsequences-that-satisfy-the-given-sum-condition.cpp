class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        
        int mod=1000000007;
        
        sort( nums.begin(), nums.end() );
        
        int n=nums.size(), i=0, j=n-1, res=0;
        vector<int> pow2(n+1, 1);
        
        for( int k=1; k<=n ; k++ ){
            pow2[k] = (2*pow2[k-1])%mod;
        }
        
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                res = (res+pow2[j-i])%mod;
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};