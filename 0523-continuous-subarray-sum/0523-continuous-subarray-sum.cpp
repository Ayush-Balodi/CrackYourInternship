class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n=nums.size(), sum=0;
        
        unordered_map<int,int> mp;
        mp[0]=0;
        
        for( int i=0 ; i<n ; i++ ){
            sum+=nums[i];
            if( mp.find(sum%k) == mp.end() ){
                mp[sum%k] = i+1;
            }
            else if(mp[sum%k]<i){
                return true;
            }
        }
        return false;
    }
};